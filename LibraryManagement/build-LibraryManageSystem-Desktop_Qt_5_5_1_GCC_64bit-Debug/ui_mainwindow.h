/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditPwd;
    QRadioButton *radioButtonAdmin;
    QRadioButton *radioButtonReader;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonCancel;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(398, 339);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 80, 100, 32));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 140, 100, 32));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        lineEditUser = new QLineEdit(centralWidget);
        lineEditUser->setObjectName(QStringLiteral("lineEditUser"));
        lineEditUser->setGeometry(QRect(170, 80, 160, 32));
        lineEditUser->setFont(font);
        lineEditPwd = new QLineEdit(centralWidget);
        lineEditPwd->setObjectName(QStringLiteral("lineEditPwd"));
        lineEditPwd->setGeometry(QRect(170, 140, 160, 32));
        lineEditPwd->setFont(font);
        radioButtonAdmin = new QRadioButton(centralWidget);
        radioButtonAdmin->setObjectName(QStringLiteral("radioButtonAdmin"));
        radioButtonAdmin->setGeometry(QRect(210, 200, 121, 25));
        QFont font1;
        font1.setPointSize(12);
        radioButtonAdmin->setFont(font1);
        radioButtonReader = new QRadioButton(centralWidget);
        radioButtonReader->setObjectName(QStringLiteral("radioButtonReader"));
        radioButtonReader->setGeometry(QRect(60, 200, 110, 25));
        radioButtonReader->setFont(font1);
        radioButtonReader->setChecked(true);
        pushButtonLogin = new QPushButton(centralWidget);
        pushButtonLogin->setObjectName(QStringLiteral("pushButtonLogin"));
        pushButtonLogin->setGeometry(QRect(50, 250, 101, 41));
        pushButtonLogin->setFont(font);
        pushButtonCancel = new QPushButton(centralWidget);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(220, 250, 101, 41));
        pushButtonCancel->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "User         :", 0));
        label_2->setText(QApplication::translate("MainWindow", "Password :", 0));
        radioButtonAdmin->setText(QApplication::translate("MainWindow", "Administrator", 0));
        radioButtonReader->setText(QApplication::translate("MainWindow", "Reader", 0));
        pushButtonLogin->setText(QApplication::translate("MainWindow", "Login", 0));
        pushButtonCancel->setText(QApplication::translate("MainWindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
