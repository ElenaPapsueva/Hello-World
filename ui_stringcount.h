/********************************************************************************
** Form generated from reading UI file 'stringcount.ui'
**
** Created: Fri 22. Aug 15:58:36 2014
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRINGCOUNT_H
#define UI_STRINGCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StringCount
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QWidget *StringCount)
    {
        if (StringCount->objectName().isEmpty())
            StringCount->setObjectName(QString::fromUtf8("StringCount"));
        StringCount->resize(458, 300);
        gridLayout = new QGridLayout(StringCount);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(StringCount);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 3, 3, 1, 1);

        label_2 = new QLabel(StringCount);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 4);

        pushButton = new QPushButton(StringCount);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 2);

        label = new QLabel(StringCount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::RightToLeft);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 3, 2, 1, 1);

        tableWidget = new QTableWidget(StringCount);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setSortingEnabled(true);
        tableWidget->setColumnCount(2);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(16);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(16);
        tableWidget->verticalHeader()->setMinimumSectionSize(16);
        tableWidget->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(tableWidget, 2, 0, 1, 4);


        retranslateUi(StringCount);

        QMetaObject::connectSlotsByName(StringCount);
    } // setupUi

    void retranslateUi(QWidget *StringCount)
    {
        StringCount->setWindowTitle(QApplication::translate("StringCount", "StringCount", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("StringCount", "\320\237\321\200\320\276\320\265\320\272\321\202", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("StringCount", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\272\320\260\321\202\320\260\320\273\320\276\320\263", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("StringCount", "\320\230\321\202\320\276\320\263\320\276: ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StringCount: public Ui_StringCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRINGCOUNT_H
