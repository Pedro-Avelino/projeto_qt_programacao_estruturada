/********************************************************************************
** Form generated from reading UI file 'fm_gestaocolaboradores.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_GESTAOCOLABORADORES_H
#define UI_FM_GESTAOCOLABORADORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
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

class Ui_fm_gestaoColaboradores
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_novocolaborador;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txt_nome_novocolab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_username_novocolab;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_senha_novocolab;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *txt_fone_novocolab;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QComboBox *cb_acesso_novocolab;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_novo_novocolab;
    QPushButton *btn_gravar_novocolab;
    QWidget *tab_gestaocolaboradores;
    QTableWidget *tw_ge_listacolab;
    QWidget *widget;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QLineEdit *txt_ge_nome;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QLineEdit *txt_ge_username;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_8;
    QLineEdit *txt_ge_senha;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_9;
    QLineEdit *txt_ge_telefone;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_10;
    QComboBox *cb_ge_acesso;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_ge_salvar;
    QPushButton *btn_ge_excluir;
    QPushButton *btn_ge_vervendas;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_11;
    QRadioButton *rb_ge_idcolab;
    QRadioButton *rb_ge_nome;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_12;
    QLineEdit *txt_ge_filtro;
    QPushButton *btn_ge_filtrar;

    void setupUi(QDialog *fm_gestaoColaboradores)
    {
        if (fm_gestaoColaboradores->objectName().isEmpty())
            fm_gestaoColaboradores->setObjectName(QStringLiteral("fm_gestaoColaboradores"));
        fm_gestaoColaboradores->resize(545, 389);
        tabWidget = new QTabWidget(fm_gestaoColaboradores);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 521, 381));
        tab_novocolaborador = new QWidget();
        tab_novocolaborador->setObjectName(QStringLiteral("tab_novocolaborador"));
        layoutWidget = new QWidget(tab_novocolaborador);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(3, 10, 491, 301));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        txt_nome_novocolab = new QLineEdit(layoutWidget);
        txt_nome_novocolab->setObjectName(QStringLiteral("txt_nome_novocolab"));

        verticalLayout->addWidget(txt_nome_novocolab);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        txt_username_novocolab = new QLineEdit(layoutWidget);
        txt_username_novocolab->setObjectName(QStringLiteral("txt_username_novocolab"));

        verticalLayout_2->addWidget(txt_username_novocolab);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        txt_senha_novocolab = new QLineEdit(layoutWidget);
        txt_senha_novocolab->setObjectName(QStringLiteral("txt_senha_novocolab"));
        txt_senha_novocolab->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(txt_senha_novocolab);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        txt_fone_novocolab = new QLineEdit(layoutWidget);
        txt_fone_novocolab->setObjectName(QStringLiteral("txt_fone_novocolab"));

        verticalLayout_4->addWidget(txt_fone_novocolab);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);

        cb_acesso_novocolab = new QComboBox(layoutWidget);
        cb_acesso_novocolab->setObjectName(QStringLiteral("cb_acesso_novocolab"));

        verticalLayout_5->addWidget(cb_acesso_novocolab);


        horizontalLayout_3->addLayout(verticalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_novo_novocolab = new QPushButton(layoutWidget);
        btn_novo_novocolab->setObjectName(QStringLiteral("btn_novo_novocolab"));

        horizontalLayout->addWidget(btn_novo_novocolab);

        btn_gravar_novocolab = new QPushButton(layoutWidget);
        btn_gravar_novocolab->setObjectName(QStringLiteral("btn_gravar_novocolab"));

        horizontalLayout->addWidget(btn_gravar_novocolab);


        verticalLayout_6->addLayout(horizontalLayout);

        tabWidget->addTab(tab_novocolaborador, QString());
        tab_gestaocolaboradores = new QWidget();
        tab_gestaocolaboradores->setObjectName(QStringLiteral("tab_gestaocolaboradores"));
        tw_ge_listacolab = new QTableWidget(tab_gestaocolaboradores);
        tw_ge_listacolab->setObjectName(QStringLiteral("tw_ge_listacolab"));
        tw_ge_listacolab->setGeometry(QRect(299, 90, 211, 261));
        widget = new QWidget(tab_gestaocolaboradores);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 256, 341));
        verticalLayout_14 = new QVBoxLayout(widget);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_7->addWidget(label_6);

        txt_ge_nome = new QLineEdit(widget);
        txt_ge_nome->setObjectName(QStringLiteral("txt_ge_nome"));

        verticalLayout_7->addWidget(txt_ge_nome);


        verticalLayout_14->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_8->addWidget(label_7);

        txt_ge_username = new QLineEdit(widget);
        txt_ge_username->setObjectName(QStringLiteral("txt_ge_username"));

        verticalLayout_8->addWidget(txt_ge_username);


        verticalLayout_14->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_9->addWidget(label_8);

        txt_ge_senha = new QLineEdit(widget);
        txt_ge_senha->setObjectName(QStringLiteral("txt_ge_senha"));
        txt_ge_senha->setEchoMode(QLineEdit::Password);

        verticalLayout_9->addWidget(txt_ge_senha);


        verticalLayout_14->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_10->addWidget(label_9);

        txt_ge_telefone = new QLineEdit(widget);
        txt_ge_telefone->setObjectName(QStringLiteral("txt_ge_telefone"));

        verticalLayout_10->addWidget(txt_ge_telefone);


        verticalLayout_14->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_11->addWidget(label_10);

        cb_ge_acesso = new QComboBox(widget);
        cb_ge_acesso->setObjectName(QStringLiteral("cb_ge_acesso"));

        verticalLayout_11->addWidget(cb_ge_acesso);


        verticalLayout_14->addLayout(verticalLayout_11);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btn_ge_salvar = new QPushButton(widget);
        btn_ge_salvar->setObjectName(QStringLiteral("btn_ge_salvar"));

        horizontalLayout_4->addWidget(btn_ge_salvar);

        btn_ge_excluir = new QPushButton(widget);
        btn_ge_excluir->setObjectName(QStringLiteral("btn_ge_excluir"));

        horizontalLayout_4->addWidget(btn_ge_excluir);

        btn_ge_vervendas = new QPushButton(widget);
        btn_ge_vervendas->setObjectName(QStringLiteral("btn_ge_vervendas"));

        horizontalLayout_4->addWidget(btn_ge_vervendas);


        verticalLayout_14->addLayout(horizontalLayout_4);

        widget1 = new QWidget(tab_gestaocolaboradores);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(300, 10, 206, 74));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_12->addWidget(label_11);

        rb_ge_idcolab = new QRadioButton(widget1);
        rb_ge_idcolab->setObjectName(QStringLiteral("rb_ge_idcolab"));
        rb_ge_idcolab->setChecked(true);

        verticalLayout_12->addWidget(rb_ge_idcolab);

        rb_ge_nome = new QRadioButton(widget1);
        rb_ge_nome->setObjectName(QStringLiteral("rb_ge_nome"));

        verticalLayout_12->addWidget(rb_ge_nome);


        horizontalLayout_5->addLayout(verticalLayout_12);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_12 = new QLabel(widget1);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_13->addWidget(label_12);

        txt_ge_filtro = new QLineEdit(widget1);
        txt_ge_filtro->setObjectName(QStringLiteral("txt_ge_filtro"));

        verticalLayout_13->addWidget(txt_ge_filtro);


        verticalLayout_15->addLayout(verticalLayout_13);

        btn_ge_filtrar = new QPushButton(widget1);
        btn_ge_filtrar->setObjectName(QStringLiteral("btn_ge_filtrar"));

        verticalLayout_15->addWidget(btn_ge_filtrar);


        horizontalLayout_5->addLayout(verticalLayout_15);

        tabWidget->addTab(tab_gestaocolaboradores, QString());

        retranslateUi(fm_gestaoColaboradores);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(fm_gestaoColaboradores);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaoColaboradores)
    {
        fm_gestaoColaboradores->setWindowTitle(QApplication::translate("fm_gestaoColaboradores", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("fm_gestaoColaboradores", "Nome", Q_NULLPTR));
        label_2->setText(QApplication::translate("fm_gestaoColaboradores", "Username", Q_NULLPTR));
        label_3->setText(QApplication::translate("fm_gestaoColaboradores", "Senha", Q_NULLPTR));
        label_4->setText(QApplication::translate("fm_gestaoColaboradores", "Telefone", Q_NULLPTR));
        label_5->setText(QApplication::translate("fm_gestaoColaboradores", "Tipo Acesso", Q_NULLPTR));
        btn_novo_novocolab->setText(QApplication::translate("fm_gestaoColaboradores", "Novo", Q_NULLPTR));
        btn_gravar_novocolab->setText(QApplication::translate("fm_gestaoColaboradores", "Gravar", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_novocolaborador), QApplication::translate("fm_gestaoColaboradores", "Novo Colaborador", Q_NULLPTR));
        label_6->setText(QApplication::translate("fm_gestaoColaboradores", "Nome", Q_NULLPTR));
        label_7->setText(QApplication::translate("fm_gestaoColaboradores", "Username", Q_NULLPTR));
        label_8->setText(QApplication::translate("fm_gestaoColaboradores", "Senha", Q_NULLPTR));
        label_9->setText(QApplication::translate("fm_gestaoColaboradores", "Telefone", Q_NULLPTR));
        label_10->setText(QApplication::translate("fm_gestaoColaboradores", "Acesso", Q_NULLPTR));
        btn_ge_salvar->setText(QApplication::translate("fm_gestaoColaboradores", "Gravar", Q_NULLPTR));
        btn_ge_excluir->setText(QApplication::translate("fm_gestaoColaboradores", "Excluir", Q_NULLPTR));
        btn_ge_vervendas->setText(QApplication::translate("fm_gestaoColaboradores", "Ver Vendas", Q_NULLPTR));
        label_11->setText(QApplication::translate("fm_gestaoColaboradores", "Filtrar por:", Q_NULLPTR));
        rb_ge_idcolab->setText(QApplication::translate("fm_gestaoColaboradores", "ID Colab.", Q_NULLPTR));
        rb_ge_nome->setText(QApplication::translate("fm_gestaoColaboradores", "Nome", Q_NULLPTR));
        label_12->setText(QApplication::translate("fm_gestaoColaboradores", "Filtro", Q_NULLPTR));
        btn_ge_filtrar->setText(QApplication::translate("fm_gestaoColaboradores", "Filtrar", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_gestaocolaboradores), QApplication::translate("fm_gestaoColaboradores", "Gest\303\243o Colaboradores", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoColaboradores: public Ui_fm_gestaoColaboradores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOCOLABORADORES_H
