/********************************************************************************
** Form generated from reading UI file 'fm_novavenda.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_NOVAVENDA_H
#define UI_FM_NOVAVENDA_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_novavenda
{
public:
    QLineEdit *txt_qtde;
    QLineEdit *txt_codproduto;
    QTableWidget *tw_listaprodutos;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *lb_totalvenda;
    QPushButton *pushButton_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_excluirproduto;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_editarproduto;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_finalizarvenda;

    void setupUi(QDialog *fm_novavenda)
    {
        if (fm_novavenda->objectName().isEmpty())
            fm_novavenda->setObjectName(QStringLiteral("fm_novavenda"));
        fm_novavenda->resize(720, 300);
        txt_qtde = new QLineEdit(fm_novavenda);
        txt_qtde->setObjectName(QStringLiteral("txt_qtde"));
        txt_qtde->setGeometry(QRect(8, 25, 113, 21));
        txt_codproduto = new QLineEdit(fm_novavenda);
        txt_codproduto->setObjectName(QStringLiteral("txt_codproduto"));
        txt_codproduto->setGeometry(QRect(140, 25, 231, 21));
        tw_listaprodutos = new QTableWidget(fm_novavenda);
        tw_listaprodutos->setObjectName(QStringLiteral("tw_listaprodutos"));
        tw_listaprodutos->setGeometry(QRect(4, 53, 711, 192));
        label = new QLabel(fm_novavenda);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(11, 5, 61, 16));
        label_2 = new QLabel(fm_novavenda);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(128, 26, 16, 16));
        label_3 = new QLabel(fm_novavenda);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(141, 5, 91, 16));
        label_4 = new QLabel(fm_novavenda);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 250, 61, 16));
        lb_totalvenda = new QLabel(fm_novavenda);
        lb_totalvenda->setObjectName(QStringLiteral("lb_totalvenda"));
        lb_totalvenda->setGeometry(QRect(68, 250, 91, 16));
        pushButton_4 = new QPushButton(fm_novavenda);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 9, 100, 41));
        pushButton_4->setAutoDefault(false);
        widget = new QWidget(fm_novavenda);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(8, 270, 266, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_excluirproduto = new QPushButton(widget);
        btn_excluirproduto->setObjectName(QStringLiteral("btn_excluirproduto"));
        btn_excluirproduto->setAutoDefault(false);

        horizontalLayout->addWidget(btn_excluirproduto);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_editarproduto = new QPushButton(widget);
        btn_editarproduto->setObjectName(QStringLiteral("btn_editarproduto"));
        btn_editarproduto->setAutoDefault(false);

        horizontalLayout->addWidget(btn_editarproduto);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_finalizarvenda = new QPushButton(widget);
        btn_finalizarvenda->setObjectName(QStringLiteral("btn_finalizarvenda"));
        btn_finalizarvenda->setAutoDefault(false);

        horizontalLayout->addWidget(btn_finalizarvenda);


        retranslateUi(fm_novavenda);

        QMetaObject::connectSlotsByName(fm_novavenda);
    } // setupUi

    void retranslateUi(QDialog *fm_novavenda)
    {
        fm_novavenda->setWindowTitle(QApplication::translate("fm_novavenda", "Dialog", Q_NULLPTR));
        txt_qtde->setText(QApplication::translate("fm_novavenda", "1", Q_NULLPTR));
        label->setText(QApplication::translate("fm_novavenda", "Quantidade", Q_NULLPTR));
        label_2->setText(QApplication::translate("fm_novavenda", "X", Q_NULLPTR));
        label_3->setText(QApplication::translate("fm_novavenda", "C\303\263digo do Produto", Q_NULLPTR));
        label_4->setText(QApplication::translate("fm_novavenda", "Valor Total:", Q_NULLPTR));
        lb_totalvenda->setText(QApplication::translate("fm_novavenda", "R$", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("fm_novavenda", "Pesquisar Produto", Q_NULLPTR));
        btn_excluirproduto->setText(QApplication::translate("fm_novavenda", "Excluir Produto", Q_NULLPTR));
        btn_editarproduto->setText(QApplication::translate("fm_novavenda", "Editar Produto", Q_NULLPTR));
        btn_finalizarvenda->setText(QApplication::translate("fm_novavenda", "Finalizar Venda", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_novavenda: public Ui_fm_novavenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_NOVAVENDA_H
