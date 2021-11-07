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
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_fm_novavenda
{
public:

    void setupUi(QDialog *fm_novavenda)
    {
        if (fm_novavenda->objectName().isEmpty())
            fm_novavenda->setObjectName(QStringLiteral("fm_novavenda"));
        fm_novavenda->resize(400, 300);

        retranslateUi(fm_novavenda);

        QMetaObject::connectSlotsByName(fm_novavenda);
    } // setupUi

    void retranslateUi(QDialog *fm_novavenda)
    {
        fm_novavenda->setWindowTitle(QApplication::translate("fm_novavenda", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_novavenda: public Ui_fm_novavenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_NOVAVENDA_H
