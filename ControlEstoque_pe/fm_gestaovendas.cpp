#include "fm_gestaovendas.h"
#include "ui_fm_gestaovendas.h"
#include <QtSql>
#include <QDebug>
#include <QPrinter>
#include <QPainter>
#include <QDir>
#include <QDesktopServices>

fm_gestaoVendas::fm_gestaoVendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_gestaoVendas)
{
    ui->setupUi(this);

    ui->tw_listaProdutosVendas->horizontalHeader()->setVisible(true);
    ui->tw_listaProdutosVendas->setColumnCount(6);
    QStringList cabe1={"Mov.","Produto","Qtde","Valor U.","Valor T."};
    ui->tw_listaProdutosVendas->setHorizontalHeaderLabels(cabe1);
    ui->tw_listaProdutosVendas->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tw_listaProdutosVendas->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_listaProdutosVendas->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_listaProdutosVendas->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tw_listaVendas->horizontalHeader()->setVisible(true);
    ui->tw_listaVendas->setColumnCount(6);
    QStringList cabe2={"ID","Data","Hora","Colab.","V.Total","T.Pgto"};
    ui->tw_listaVendas->setHorizontalHeaderLabels(cabe2);
    ui->tw_listaVendas->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tw_listaVendas->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_listaVendas->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_listaVendas->setEditTriggers(QAbstractItemView::NoEditTriggers);

    con.abrir();
    int contLinhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_vendas");
    query.exec();
    query.first();
    do{
        ui->tw_listaVendas->insertRow(contLinhas);
        ui->tw_listaVendas->setItem(contLinhas,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tw_listaVendas->setItem(contLinhas,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tw_listaVendas->setItem(contLinhas,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tw_listaVendas->setItem(contLinhas,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tw_listaVendas->setItem(contLinhas,4,new QTableWidgetItem(query.value(4).toString()));
        ui->tw_listaVendas->setItem(contLinhas,5,new QTableWidgetItem(query.value(5).toString()));
        contLinhas++;
    }while(query.next());

    con.fechar();

}

fm_gestaoVendas::~fm_gestaoVendas()
{
    delete ui;
}

void fm_gestaoVendas::on_tw_listaVendas_itemSelectionChanged()
{
    //ui->tw_listaProdutosVendas->clear();
    ui->tw_listaProdutosVendas->setRowCount(0);
    con.abrir();
    int contLinhas=0;
    QSqlQuery query;
    query.prepare("select id_movimentacao,produto,qtde,valor_un,valor_total from tb_produtoVendas where id_venda="+ui->tw_listaVendas->item(ui->tw_listaVendas->currentRow(),0)->text());
    if(query.exec()){
        qDebug() << "ERRO:" << query.lastError().text();
    }
    query.first();
    do{
        ui->tw_listaProdutosVendas->insertRow(contLinhas);
        ui->tw_listaProdutosVendas->setItem(contLinhas,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tw_listaProdutosVendas->setItem(contLinhas,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tw_listaProdutosVendas->setItem(contLinhas,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tw_listaProdutosVendas->setItem(contLinhas,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tw_listaProdutosVendas->setItem(contLinhas,4,new QTableWidgetItem(query.value(4).toString()));
        contLinhas++;
    }while(query.next());

    con.fechar();
}

void fm_gestaoVendas::on_btn_filtrar_clicked()
{
    ui->tw_listaVendas->setRowCount(0);
    con.abrir();
    int contLinhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_vendas where data_venda between '"+ui->de_dataini->text()+"' and '"+ui->de_datafim->text()+"'");
    query.exec();
    query.first();
    do{
        ui->tw_listaVendas->insertRow(contLinhas);
        ui->tw_listaVendas->setItem(contLinhas,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tw_listaVendas->setItem(contLinhas,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tw_listaVendas->setItem(contLinhas,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tw_listaVendas->setItem(contLinhas,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tw_listaVendas->setItem(contLinhas,4,new QTableWidgetItem(query.value(4).toString()));
        ui->tw_listaVendas->setItem(contLinhas,5,new QTableWidgetItem(query.value(5).toString()));
        contLinhas++;
    }while(query.next());

    con.fechar();
}


void fm_gestaoVendas::on_btn_relatorioPDF_clicked()
{
    QString nome=QDir::currentPath()+"/"+ui->tw_listaVendas->item(ui->tw_listaVendas->currentRow(),0)->text()+"_vendas.pdf";

    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(nome);

    QPainter painter;
    if(!painter.begin(&printer)){
        qDebug() << "ERRO ao abrir PDF";
        return;
    }

    int linha=250;
    int salto=20;

    painter.drawPixmap(25,25,QPixmap(":/imagens/imgs/meme.png"));

    painter.drawText(25,200,"ID:"+ui->tw_listaVendas->item(ui->tw_listaVendas->currentRow(),0)->text());
    painter.drawText(150,200,"DATA:"+ui->tw_listaVendas->item(ui->tw_listaVendas->currentRow(),1)->text());

    for(int i=0;i<ui->tw_listaProdutosVendas->rowCount();i++){
        painter.drawText(25,linha,ui->tw_listaProdutosVendas->item(i,0)->text());
        painter.drawText(50,linha,ui->tw_listaProdutosVendas->item(i,1)->text());
        painter.drawText(300,linha,ui->tw_listaProdutosVendas->item(i,2)->text());
        linha+=salto;
    }

    printer.newPage();

    painter.drawText(25,25,"DEPRESSÃO");

    painter.end();

    QDesktopServices::openUrl(QUrl("file:///"+nome));

}

