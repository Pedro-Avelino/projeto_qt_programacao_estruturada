/********************************************************************************
** Form generated from reading UI file 'fm_editarprodutovenda.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_EDITARPRODUTOVENDA_H
#define UI_FM_EDITARPRODUTOVENDA_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_editarprodutovenda
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txt_edita_produto;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_edita_precoUnitario;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_edita_quantidade;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_edita_confirma;
    QPushButton *btn_edita_cancela;

    void setupUi(QDialog *fm_editarprodutovenda)
    {
        if (fm_editarprodutovenda->objectName().isEmpty())
            fm_editarprodutovenda->setObjectName(QStringLiteral("fm_editarprodutovenda"));
        fm_editarprodutovenda->resize(415, 181);
        widget = new QWidget(fm_editarprodutovenda);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(7, 4, 401, 171));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        txt_edita_produto = new QLineEdit(widget);
        txt_edita_produto->setObjectName(QStringLiteral("txt_edita_produto"));

        verticalLayout->addWidget(txt_edita_produto);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        txt_edita_precoUnitario = new QLineEdit(widget);
        txt_edita_precoUnitario->setObjectName(QStringLiteral("txt_edita_precoUnitario"));

        verticalLayout_2->addWidget(txt_edita_precoUnitario);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        txt_edita_quantidade = new QLineEdit(widget);
        txt_edita_quantidade->setObjectName(QStringLiteral("txt_edita_quantidade"));

        verticalLayout_3->addWidget(txt_edita_quantidade);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btn_edita_confirma = new QPushButton(widget);
        btn_edita_confirma->setObjectName(QStringLiteral("btn_edita_confirma"));

        horizontalLayout_2->addWidget(btn_edita_confirma);

        btn_edita_cancela = new QPushButton(widget);
        btn_edita_cancela->setObjectName(QStringLiteral("btn_edita_cancela"));

        horizontalLayout_2->addWidget(btn_edita_cancela);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(fm_editarprodutovenda);

        QMetaObject::connectSlotsByName(fm_editarprodutovenda);
    } // setupUi

    void retranslateUi(QDialog *fm_editarprodutovenda)
    {
        fm_editarprodutovenda->setWindowTitle(QApplication::translate("fm_editarprodutovenda", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("fm_editarprodutovenda", "Produto", Q_NULLPTR));
        label_2->setText(QApplication::translate("fm_editarprodutovenda", "Pre\303\247o Unit\303\241rio", Q_NULLPTR));
        label_3->setText(QApplication::translate("fm_editarprodutovenda", "Quantidade", Q_NULLPTR));
        btn_edita_confirma->setText(QApplication::translate("fm_editarprodutovenda", "Confirmar", Q_NULLPTR));
        btn_edita_cancela->setText(QApplication::translate("fm_editarprodutovenda", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_editarprodutovenda: public Ui_fm_editarprodutovenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_EDITARPRODUTOVENDA_H
