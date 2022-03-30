/********************************************************************************
** Form generated from reading UI file 'scavenger.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCAVENGER_H
#define UI_SCAVENGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scavengerClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *tableWidget_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *scavengerClass)
    {
        if (scavengerClass->objectName().isEmpty())
            scavengerClass->setObjectName(QString::fromUtf8("scavengerClass"));
        scavengerClass->resize(1037, 698);
        centralWidget = new QWidget(scavengerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tableWidget_2 = new QTableWidget(tab);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        verticalLayout_5->addWidget(tableWidget_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tableWidget = new QTableWidget(tab_2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_4->addWidget(tableWidget);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableView = new QTableView(tab_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_3->addWidget(tableView);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget);


        verticalLayout->addWidget(frame);

        scavengerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(scavengerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1037, 21));
        scavengerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(scavengerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        scavengerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(scavengerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        scavengerClass->setStatusBar(statusBar);

        retranslateUi(scavengerClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(scavengerClass);
    } // setupUi

    void retranslateUi(QMainWindow *scavengerClass)
    {
        scavengerClass->setWindowTitle(QCoreApplication::translate("scavengerClass", "scavenger", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("scavengerClass", "\320\232\321\203\320\277\320\273\320\265\320\275\320\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("scavengerClass", "\320\235\320\260\320\264\320\276 \320\272\321\203\320\277\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("scavengerClass", "\320\234\320\276\320\266\320\275\320\276 \320\277\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scavengerClass: public Ui_scavengerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCAVENGER_H
