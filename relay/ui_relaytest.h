/********************************************************************************
** Form generated from reading UI file 'relaytest.ui'
**
** Created: Fri Nov 24 00:01:55 2017
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELAYTEST_H
#define UI_RELAYTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_relaytest
{
public:
    QPushButton *RELAY_Button;

    void setupUi(QDialog *relaytest)
    {
        if (relaytest->objectName().isEmpty())
            relaytest->setObjectName(QString::fromUtf8("relaytest"));
        relaytest->resize(400, 300);
        relaytest->setMouseTracking(true);
        RELAY_Button = new QPushButton(relaytest);
        RELAY_Button->setObjectName(QString::fromUtf8("RELAY_Button"));
        RELAY_Button->setGeometry(QRect(140, 110, 121, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("WenQuanYi Micro Hei"));
        font.setPointSize(14);
        RELAY_Button->setFont(font);

        retranslateUi(relaytest);

        QMetaObject::connectSlotsByName(relaytest);
    } // setupUi

    void retranslateUi(QDialog *relaytest)
    {
        relaytest->setWindowTitle(QApplication::translate("relaytest", "relaytest", 0, QApplication::UnicodeUTF8));
        RELAY_Button->setText(QApplication::translate("relaytest", "RELAY", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class relaytest: public Ui_relaytest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELAYTEST_H
