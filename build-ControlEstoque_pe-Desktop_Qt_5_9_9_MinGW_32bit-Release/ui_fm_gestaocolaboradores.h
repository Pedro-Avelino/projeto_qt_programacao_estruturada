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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_fm_gestaoColaboradores
{
public:

    void setupUi(QDialog *fm_gestaoColaboradores)
    {
        if (fm_gestaoColaboradores->objectName().isEmpty())
            fm_gestaoColaboradores->setObjectName(QStringLiteral("fm_gestaoColaboradores"));
        fm_gestaoColaboradores->resize(400, 300);

        retranslateUi(fm_gestaoColaboradores);

        QMetaObject::connectSlotsByName(fm_gestaoColaboradores);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaoColaboradores)
    {
        fm_gestaoColaboradores->setWindowTitle(QApplication::translate("fm_gestaoColaboradores", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoColaboradores: public Ui_fm_gestaoColaboradores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOCOLABORADORES_H
