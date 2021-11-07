/********************************************************************************
** Form generated from reading UI file 'fm_gestaoestoque.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_GESTAOESTOQUE_H
#define UI_FM_GESTAOESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_gestaoEstoque
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_novoproduto;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_27;
    QVBoxLayout *verticalLayout_26;
    QVBoxLayout *verticalLayout_25;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QLineEdit *txt_codigoproduto;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_14;
    QLineEdit *txt_descricaoproduto;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_15;
    QLineEdit *txt_qtdeestoque;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_16;
    QLineEdit *txt_valorcompra;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_18;
    QLineEdit *txt_valorvenda;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_17;
    QLineEdit *txt_fornecedor;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btn_novoproduto;
    QPushButton *btn_gravarnovoproduto;
    QWidget *tab_gestaoprodutos;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_30;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *txt_ge_codigoproduto;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *txt_ge_produto;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLineEdit *txt_ge_qtde;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QLineEdit *txt_ge_valorcompra;
    QVBoxLayout *verticalLayout_28;
    QLabel *label_5;
    QLineEdit *txt_ge_valorvenda;
    QVBoxLayout *verticalLayout_29;
    QLabel *label_6;
    QLineEdit *txt_ge_fornecedor;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_ge_gravar;
    QPushButton *btn_ge_excluir;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_33;
    QVBoxLayout *verticalLayout_32;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb_ge_codigo;
    QRadioButton *rb_ge_produto;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_31;
    QLabel *label_31;
    QLineEdit *txt_ge_filtrar;
    QPushButton *btn_ge_filtrar;
    QTableWidget *tw_ge_produtos;

    void setupUi(QDialog *fm_gestaoEstoque)
    {
        if (fm_gestaoEstoque->objectName().isEmpty())
            fm_gestaoEstoque->setObjectName(QStringLiteral("fm_gestaoEstoque"));
        fm_gestaoEstoque->resize(721, 444);
        tabWidget = new QTabWidget(fm_gestaoEstoque);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 701, 421));
        tab_novoproduto = new QWidget();
        tab_novoproduto->setObjectName(QStringLiteral("tab_novoproduto"));
        layoutWidget = new QWidget(tab_novoproduto);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 611, 241));
        verticalLayout_27 = new QVBoxLayout(layoutWidget);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_7->addWidget(label_13);

        txt_codigoproduto = new QLineEdit(layoutWidget);
        txt_codigoproduto->setObjectName(QStringLiteral("txt_codigoproduto"));

        verticalLayout_7->addWidget(txt_codigoproduto);


        verticalLayout_25->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_8->addWidget(label_14);

        txt_descricaoproduto = new QLineEdit(layoutWidget);
        txt_descricaoproduto->setObjectName(QStringLiteral("txt_descricaoproduto"));

        verticalLayout_8->addWidget(txt_descricaoproduto);


        verticalLayout_25->addLayout(verticalLayout_8);


        verticalLayout_26->addLayout(verticalLayout_25);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_9->addWidget(label_15);

        txt_qtdeestoque = new QLineEdit(layoutWidget);
        txt_qtdeestoque->setObjectName(QStringLiteral("txt_qtdeestoque"));

        verticalLayout_9->addWidget(txt_qtdeestoque);


        horizontalLayout_6->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_10->addWidget(label_16);

        txt_valorcompra = new QLineEdit(layoutWidget);
        txt_valorcompra->setObjectName(QStringLiteral("txt_valorcompra"));

        verticalLayout_10->addWidget(txt_valorcompra);


        horizontalLayout_6->addLayout(verticalLayout_10);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_12->addWidget(label_18);

        txt_valorvenda = new QLineEdit(layoutWidget);
        txt_valorvenda->setObjectName(QStringLiteral("txt_valorvenda"));

        verticalLayout_12->addWidget(txt_valorvenda);


        horizontalLayout_6->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_11->addWidget(label_17);

        txt_fornecedor = new QLineEdit(layoutWidget);
        txt_fornecedor->setObjectName(QStringLiteral("txt_fornecedor"));

        verticalLayout_11->addWidget(txt_fornecedor);


        horizontalLayout_6->addLayout(verticalLayout_11);


        verticalLayout_26->addLayout(horizontalLayout_6);


        verticalLayout_27->addLayout(verticalLayout_26);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        btn_novoproduto = new QPushButton(layoutWidget);
        btn_novoproduto->setObjectName(QStringLiteral("btn_novoproduto"));

        horizontalLayout_7->addWidget(btn_novoproduto);

        btn_gravarnovoproduto = new QPushButton(layoutWidget);
        btn_gravarnovoproduto->setObjectName(QStringLiteral("btn_gravarnovoproduto"));

        horizontalLayout_7->addWidget(btn_gravarnovoproduto);


        verticalLayout_27->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab_novoproduto, QString());
        tab_gestaoprodutos = new QWidget();
        tab_gestaoprodutos->setObjectName(QStringLiteral("tab_gestaoprodutos"));
        layoutWidget1 = new QWidget(tab_gestaoprodutos);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 261, 371));
        verticalLayout_30 = new QVBoxLayout(layoutWidget1);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        verticalLayout_30->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        txt_ge_codigoproduto = new QLineEdit(layoutWidget1);
        txt_ge_codigoproduto->setObjectName(QStringLiteral("txt_ge_codigoproduto"));

        verticalLayout_3->addWidget(txt_ge_codigoproduto);


        verticalLayout_30->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_4->addWidget(label_2);

        txt_ge_produto = new QLineEdit(layoutWidget1);
        txt_ge_produto->setObjectName(QStringLiteral("txt_ge_produto"));

        verticalLayout_4->addWidget(txt_ge_produto);


        verticalLayout_30->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_5->addWidget(label_3);

        txt_ge_qtde = new QLineEdit(layoutWidget1);
        txt_ge_qtde->setObjectName(QStringLiteral("txt_ge_qtde"));

        verticalLayout_5->addWidget(txt_ge_qtde);


        verticalLayout_30->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_6->addWidget(label_4);

        txt_ge_valorcompra = new QLineEdit(layoutWidget1);
        txt_ge_valorcompra->setObjectName(QStringLiteral("txt_ge_valorcompra"));

        verticalLayout_6->addWidget(txt_ge_valorcompra);


        verticalLayout_30->addLayout(verticalLayout_6);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_28->addWidget(label_5);

        txt_ge_valorvenda = new QLineEdit(layoutWidget1);
        txt_ge_valorvenda->setObjectName(QStringLiteral("txt_ge_valorvenda"));

        verticalLayout_28->addWidget(txt_ge_valorvenda);


        verticalLayout_30->addLayout(verticalLayout_28);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_29->addWidget(label_6);

        txt_ge_fornecedor = new QLineEdit(layoutWidget1);
        txt_ge_fornecedor->setObjectName(QStringLiteral("txt_ge_fornecedor"));

        verticalLayout_29->addWidget(txt_ge_fornecedor);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_29->addItem(verticalSpacer_2);


        verticalLayout_30->addLayout(verticalLayout_29);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_ge_gravar = new QPushButton(layoutWidget1);
        btn_ge_gravar->setObjectName(QStringLiteral("btn_ge_gravar"));

        horizontalLayout->addWidget(btn_ge_gravar);

        btn_ge_excluir = new QPushButton(layoutWidget1);
        btn_ge_excluir->setObjectName(QStringLiteral("btn_ge_excluir"));

        horizontalLayout->addWidget(btn_ge_excluir);


        verticalLayout_30->addLayout(horizontalLayout);

        layoutWidget2 = new QWidget(tab_gestaoprodutos);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(320, 0, 371, 381));
        verticalLayout_33 = new QVBoxLayout(layoutWidget2);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        verticalLayout_33->setContentsMargins(0, 0, 0, 0);
        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        groupBox = new QGroupBox(layoutWidget2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        rb_ge_codigo = new QRadioButton(groupBox);
        rb_ge_codigo->setObjectName(QStringLiteral("rb_ge_codigo"));
        rb_ge_codigo->setChecked(true);

        verticalLayout->addWidget(rb_ge_codigo);

        rb_ge_produto = new QRadioButton(groupBox);
        rb_ge_produto->setObjectName(QStringLiteral("rb_ge_produto"));

        verticalLayout->addWidget(rb_ge_produto);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_32->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        label_31 = new QLabel(layoutWidget2);
        label_31->setObjectName(QStringLiteral("label_31"));

        verticalLayout_31->addWidget(label_31);

        txt_ge_filtrar = new QLineEdit(layoutWidget2);
        txt_ge_filtrar->setObjectName(QStringLiteral("txt_ge_filtrar"));

        verticalLayout_31->addWidget(txt_ge_filtrar);


        horizontalLayout_3->addLayout(verticalLayout_31);

        btn_ge_filtrar = new QPushButton(layoutWidget2);
        btn_ge_filtrar->setObjectName(QStringLiteral("btn_ge_filtrar"));

        horizontalLayout_3->addWidget(btn_ge_filtrar);


        verticalLayout_32->addLayout(horizontalLayout_3);


        verticalLayout_33->addLayout(verticalLayout_32);

        tw_ge_produtos = new QTableWidget(layoutWidget2);
        tw_ge_produtos->setObjectName(QStringLiteral("tw_ge_produtos"));

        verticalLayout_33->addWidget(tw_ge_produtos);

        tabWidget->addTab(tab_gestaoprodutos, QString());

        retranslateUi(fm_gestaoEstoque);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(fm_gestaoEstoque);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaoEstoque)
    {
        fm_gestaoEstoque->setWindowTitle(QApplication::translate("fm_gestaoEstoque", "Dialog", Q_NULLPTR));
        label_13->setText(QApplication::translate("fm_gestaoEstoque", "C\303\263digo do Produto", Q_NULLPTR));
        label_14->setText(QApplication::translate("fm_gestaoEstoque", "Descri\303\247\303\243o Produto", Q_NULLPTR));
        label_15->setText(QApplication::translate("fm_gestaoEstoque", "Qtde Estoque", Q_NULLPTR));
        label_16->setText(QApplication::translate("fm_gestaoEstoque", "Valor de Compra", Q_NULLPTR));
        label_18->setText(QApplication::translate("fm_gestaoEstoque", "Valor de Venda", Q_NULLPTR));
        label_17->setText(QApplication::translate("fm_gestaoEstoque", "Fornecedor", Q_NULLPTR));
        btn_novoproduto->setText(QApplication::translate("fm_gestaoEstoque", "Novo", Q_NULLPTR));
        btn_gravarnovoproduto->setText(QApplication::translate("fm_gestaoEstoque", "Gravar", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_novoproduto), QApplication::translate("fm_gestaoEstoque", "Novo Produto", Q_NULLPTR));
        label->setText(QApplication::translate("fm_gestaoEstoque", "C\303\263digo produto", Q_NULLPTR));
        label_2->setText(QApplication::translate("fm_gestaoEstoque", "Produto", Q_NULLPTR));
        label_3->setText(QApplication::translate("fm_gestaoEstoque", "Quantidade", Q_NULLPTR));
        label_4->setText(QApplication::translate("fm_gestaoEstoque", "Valor Compra", Q_NULLPTR));
        label_5->setText(QApplication::translate("fm_gestaoEstoque", "Valor Venda", Q_NULLPTR));
        label_6->setText(QApplication::translate("fm_gestaoEstoque", "Fornecedor", Q_NULLPTR));
        btn_ge_gravar->setText(QApplication::translate("fm_gestaoEstoque", "Gravar", Q_NULLPTR));
        btn_ge_excluir->setText(QApplication::translate("fm_gestaoEstoque", "Excluir", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("fm_gestaoEstoque", "Filtrar por:", Q_NULLPTR));
        rb_ge_codigo->setText(QApplication::translate("fm_gestaoEstoque", "C\303\263digo Produto", Q_NULLPTR));
        rb_ge_produto->setText(QApplication::translate("fm_gestaoEstoque", "Descri\303\247\303\243o Produto", Q_NULLPTR));
        label_31->setText(QApplication::translate("fm_gestaoEstoque", "Filtrar", Q_NULLPTR));
        btn_ge_filtrar->setText(QApplication::translate("fm_gestaoEstoque", "Filtrar", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_gestaoprodutos), QApplication::translate("fm_gestaoEstoque", "Gest\303\243o Produtos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoEstoque: public Ui_fm_gestaoEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOESTOQUE_H
