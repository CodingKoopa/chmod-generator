/********************************************************************************
** Form generated from reading UI file 'symbolic.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMBOLIC_H
#define UI_SYMBOLIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_symbolic
{
public:
    QLabel *label;

    void setupUi(QDialog *symbolic)
    {
        if (symbolic->objectName().isEmpty())
            symbolic->setObjectName(QStringLiteral("symbolic"));
        symbolic->resize(400, 300);
        label = new QLabel(symbolic);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 150, 67, 17));

        retranslateUi(symbolic);

        QMetaObject::connectSlotsByName(symbolic);
    } // setupUi

    void retranslateUi(QDialog *symbolic)
    {
        symbolic->setWindowTitle(QApplication::translate("symbolic", "Dialog", 0));
        label->setText(QApplication::translate("symbolic", "uh", 0));
    } // retranslateUi

};

namespace Ui {
    class symbolic: public Ui_symbolic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMBOLIC_H
