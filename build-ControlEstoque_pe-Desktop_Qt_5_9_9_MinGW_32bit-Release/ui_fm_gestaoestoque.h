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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_gestaoEstoque
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_novoproduto;
    QWidget *widget;
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

    void setupUi(QDialog *fm_gestaoEstoque)
    {
        if (fm_gestaoEstoque->objectName().isEmpty())
            fm_gestaoEstoque->setObjectName(QStringLiteral("fm_gestaoEstoque"));
        fm_gestaoEstoque->resize(649, 410);
        tabWidget = new QTabWidget(fm_gestaoEstoque);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 631, 391));
        tab_novoproduto = new QWidget();
        tab_novoproduto->setObjectName(QStringLiteral("tab_novoproduto"));
        widget = new QWidget(tab_novoproduto);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 611, 241));
        verticalLayout_27 = new QVBoxLayout(widget);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_7->addWidget(label_13);

        txt_codigoproduto = new QLineEdit(widget);
        txt_codigoproduto->setObjectName(QStringLiteral("txt_codigoproduto"));

        verticalLayout_7->addWidget(txt_codigoproduto);


        verticalLayout_25->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_8->addWidget(label_14);

        txt_descricaoproduto = new QLineEdit(widget);
        txt_descricaoproduto->setObjectName(QStringLiteral("txt_descricaoproduto"));

        verticalLayout_8->addWidget(txt_descricaoproduto);


        verticalLayout_25->addLayout(verticalLayout_8);


        verticalLayout_26->addLayout(verticalLayout_25);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_9->addWidget(label_15);

        txt_qtdeestoque = new QLineEdit(widget);
        txt_qtdeestoque->setObjectName(QStringLiteral("txt_qtdeestoque"));

        verticalLayout_9->addWidget(txt_qtdeestoque);


        horizontalLayout_6->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_16 = new QLabel(widget);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_10->addWidget(label_16);

        txt_valorcompra = new QLineEdit(widget);
        txt_valorcompra->setObjectName(QStringLiteral("txt_valorcompra"));

        verticalLayout_10->addWidget(txt_valorcompra);


        horizontalLayout_6->addLayout(verticalLayout_10);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_18 = new QLabel(widget);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_12->addWidget(label_18);

        txt_valorvenda = new QLineEdit(widget);
        txt_valorvenda->setObjectName(QStringLiteral("txt_valorvenda"));

        verticalLayout_12->addWidget(txt_valorvenda);


        horizontalLayout_6->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_17 = new QLabel(widget);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_11->addWidget(label_17);

        txt_fornecedor = new QLineEdit(widget);
        txt_fornecedor->setObjectName(QStringLiteral("txt_fornecedor"));

        verticalLayout_11->addWidget(txt_fornecedor);


        horizontalLayout_6->addLayout(verticalLayout_11);


        verticalLayout_26->addLayout(horizontalLayout_6);


        verticalLayout_27->addLayout(verticalLayout_26);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        btn_novoproduto = new QPushButton(widget);
        btn_novoproduto->setObjectName(QStringLiteral("btn_novoproduto"));

        horizontalLayout_7->addWidget(btn_novoproduto);

        btn_gravarnovoproduto = new QPushButton(widget);
        btn_gravarnovoproduto->setObjectName(QStringLiteral("btn_gravarnovoproduto"));

        horizontalLayout_7->addWidget(btn_gravarnovoproduto);


        verticalLayout_27->addLayout(horizontalLayout_7);

        tabWidget->addTab(tab_novoproduto, QString());
        tab_gestaoprodutos = new QWidget();
        tab_gestaoprodutos->setObjectName(QStringLiteral("tab_gestaoprodutos"));
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
        tabWidget->setTabText(tabWidget->indexOf(tab_gestaoprodutos), QApplication::translate("fm_gestaoEstoque", "Gest\303\243o Produtos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoEstoque: public Ui_fm_gestaoEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOESTOQUE_H
