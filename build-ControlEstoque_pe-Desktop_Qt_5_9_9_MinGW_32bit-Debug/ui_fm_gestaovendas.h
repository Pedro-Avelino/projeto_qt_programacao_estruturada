/********************************************************************************
** Form generated from reading UI file 'fm_gestaovendas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_GESTAOVENDAS_H
#define UI_FM_GESTAOVENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_gestaoVendas
{
public:
    QTableWidget *tw_listaVendas;
    QTableWidget *tw_listaProdutosVendas;
    QPushButton *btn_relatorioPDF;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDateEdit *de_dataini;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QDateEdit *de_datafim;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_filtrar;
    QPushButton *btn_mostrarTodasVendas;

    void setupUi(QDialog *fm_gestaoVendas)
    {
        if (fm_gestaoVendas->objectName().isEmpty())
            fm_gestaoVendas->setObjectName(QStringLiteral("fm_gestaoVendas"));
        fm_gestaoVendas->resize(551, 368);
        tw_listaVendas = new QTableWidget(fm_gestaoVendas);
        tw_listaVendas->setObjectName(QStringLiteral("tw_listaVendas"));
        tw_listaVendas->setGeometry(QRect(10, 80, 531, 101));
        tw_listaProdutosVendas = new QTableWidget(fm_gestaoVendas);
        tw_listaProdutosVendas->setObjectName(QStringLiteral("tw_listaProdutosVendas"));
        tw_listaProdutosVendas->setGeometry(QRect(10, 190, 531, 151));
        btn_relatorioPDF = new QPushButton(fm_gestaoVendas);
        btn_relatorioPDF->setObjectName(QStringLiteral("btn_relatorioPDF"));
        btn_relatorioPDF->setGeometry(QRect(11, 343, 111, 21));
        widget = new QWidget(fm_gestaoVendas);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 178, 46));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        de_dataini = new QDateEdit(widget);
        de_dataini->setObjectName(QStringLiteral("de_dataini"));

        verticalLayout->addWidget(de_dataini);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        de_datafim = new QDateEdit(widget);
        de_datafim->setObjectName(QStringLiteral("de_datafim"));

        verticalLayout_2->addWidget(de_datafim);


        horizontalLayout->addLayout(verticalLayout_2);

        widget1 = new QWidget(fm_gestaoVendas);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(195, 43, 201, 23));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_filtrar = new QPushButton(widget1);
        btn_filtrar->setObjectName(QStringLiteral("btn_filtrar"));

        horizontalLayout_2->addWidget(btn_filtrar);

        btn_mostrarTodasVendas = new QPushButton(widget1);
        btn_mostrarTodasVendas->setObjectName(QStringLiteral("btn_mostrarTodasVendas"));

        horizontalLayout_2->addWidget(btn_mostrarTodasVendas);


        retranslateUi(fm_gestaoVendas);

        QMetaObject::connectSlotsByName(fm_gestaoVendas);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaoVendas)
    {
        fm_gestaoVendas->setWindowTitle(QApplication::translate("fm_gestaoVendas", "Dialog", Q_NULLPTR));
        btn_relatorioPDF->setText(QApplication::translate("fm_gestaoVendas", "Gerar Relat\303\263rio PDF", Q_NULLPTR));
        label->setText(QApplication::translate("fm_gestaoVendas", "Data Inicial", Q_NULLPTR));
        label_2->setText(QApplication::translate("fm_gestaoVendas", "Data Final", Q_NULLPTR));
        btn_filtrar->setText(QApplication::translate("fm_gestaoVendas", "Filtrar", Q_NULLPTR));
        btn_mostrarTodasVendas->setText(QApplication::translate("fm_gestaoVendas", "Mostrar todas vendas", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoVendas: public Ui_fm_gestaoVendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOVENDAS_H
