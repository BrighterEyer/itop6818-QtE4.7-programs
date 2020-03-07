/********************************************************************************
** Form generated from reading UI file 'rc522.ui'
**
** Created: Thu Nov 23 17:19:12 2017
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RC522_H
#define UI_RC522_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_rc522
{
public:
    QLineEdit *id_Edit;
    QLabel *label;

    void setupUi(QDialog *rc522)
    {
        if (rc522->objectName().isEmpty())
            rc522->setObjectName(QString::fromUtf8("rc522"));
        rc522->resize(400, 300);
        id_Edit = new QLineEdit(rc522);
        id_Edit->setObjectName(QString::fromUtf8("id_Edit"));
        id_Edit->setGeometry(QRect(60, 110, 231, 31));
        label = new QLabel(rc522);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 90, 171, 16));

        retranslateUi(rc522);

        QMetaObject::connectSlotsByName(rc522);
    } // setupUi

    void retranslateUi(QDialog *rc522)
    {
        rc522->setWindowTitle(QApplication::translate("rc522", "rc522", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("rc522", "PLEASE SWIPE YOUR CARD", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rc522: public Ui_rc522 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RC522_H
