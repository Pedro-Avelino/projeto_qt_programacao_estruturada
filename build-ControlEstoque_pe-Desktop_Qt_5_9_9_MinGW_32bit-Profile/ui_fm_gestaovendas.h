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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_fm_gestaoVendas
{
public:

    void setupUi(QDialog *fm_gestaoVendas)
    {
        if (fm_gestaoVendas->objectName().isEmpty())
            fm_gestaoVendas->setObjectName(QStringLiteral("fm_gestaoVendas"));
        fm_gestaoVendas->resize(400, 300);

        retranslateUi(fm_gestaoVendas);

        QMetaObject::connectSlotsByName(fm_gestaoVendas);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaoVendas)
    {
        fm_gestaoVendas->setWindowTitle(QApplication::translate("fm_gestaoVendas", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoVendas: public Ui_fm_gestaoVendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOVENDAS_H
