/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QAction *actionEstoque;
    QAction *actionColaboradores;
    QAction *actionVendas;
    QAction *actionSAIR;
    QAction *actionSobre;
    QWidget *centralwidget;
    QPushButton *btn_bloquear;
    QPushButton *pushButton_2;
    QLabel *lb_nome;
    QMenuBar *menubar;
    QMenu *menuGest_o;
    QMenu *menuSistema;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName(QStringLiteral("fm_principal"));
        fm_principal->resize(471, 343);
        actionEstoque = new QAction(fm_principal);
        actionEstoque->setObjectName(QStringLiteral("actionEstoque"));
        actionColaboradores = new QAction(fm_principal);
        actionColaboradores->setObjectName(QStringLiteral("actionColaboradores"));
        actionVendas = new QAction(fm_principal);
        actionVendas->setObjectName(QStringLiteral("actionVendas"));
        actionSAIR = new QAction(fm_principal);
        actionSAIR->setObjectName(QStringLiteral("actionSAIR"));
        actionSobre = new QAction(fm_principal);
        actionSobre->setObjectName(QStringLiteral("actionSobre"));
        centralwidget = new QWidget(fm_principal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btn_bloquear = new QPushButton(centralwidget);
        btn_bloquear->setObjectName(QStringLiteral("btn_bloquear"));
        btn_bloquear->setGeometry(QRect(10, 270, 32, 32));
        btn_bloquear->setFlat(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 131, 41));
        pushButton_2->setStyleSheet(QLatin1String("background:#248;\n"
"color:#fff;\n"
"font-size:16pt;\n"
"border:none;\n"
"border-radius:10px;"));
        lb_nome = new QLabel(centralwidget);
        lb_nome->setObjectName(QStringLiteral("lb_nome"));
        lb_nome->setGeometry(QRect(60, 280, 91, 16));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_nome->sizePolicy().hasHeightForWidth());
        lb_nome->setSizePolicy(sizePolicy);
        fm_principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(fm_principal);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 471, 20));
        menuGest_o = new QMenu(menubar);
        menuGest_o->setObjectName(QStringLiteral("menuGest_o"));
        menuSistema = new QMenu(menubar);
        menuSistema->setObjectName(QStringLiteral("menuSistema"));
        fm_principal->setMenuBar(menubar);
        statusbar = new QStatusBar(fm_principal);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        fm_principal->setStatusBar(statusbar);

        menubar->addAction(menuGest_o->menuAction());
        menubar->addAction(menuSistema->menuAction());
        menuGest_o->addAction(actionEstoque);
        menuGest_o->addAction(actionColaboradores);
        menuGest_o->addAction(actionVendas);
        menuSistema->addSeparator();
        menuSistema->addAction(actionSAIR);
        menuSistema->addSeparator();
        menuSistema->addAction(actionSobre);

        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QMainWindow *fm_principal)
    {
        fm_principal->setWindowTitle(QApplication::translate("fm_principal", "fm_principal", Q_NULLPTR));
        actionEstoque->setText(QApplication::translate("fm_principal", "Estoque", Q_NULLPTR));
        actionColaboradores->setText(QApplication::translate("fm_principal", "Colaboradores", Q_NULLPTR));
        actionVendas->setText(QApplication::translate("fm_principal", "Vendas", Q_NULLPTR));
        actionSAIR->setText(QApplication::translate("fm_principal", "SAIR", Q_NULLPTR));
        actionSobre->setText(QApplication::translate("fm_principal", "Sobre", Q_NULLPTR));
        btn_bloquear->setText(QApplication::translate("fm_principal", "Cad", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("fm_principal", "nova venda", Q_NULLPTR));
        lb_nome->setText(QApplication::translate("fm_principal", "Sem Colaborador", Q_NULLPTR));
        menuGest_o->setTitle(QApplication::translate("fm_principal", "Gest\303\243o", Q_NULLPTR));
        menuSistema->setTitle(QApplication::translate("fm_principal", "Sistema", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
