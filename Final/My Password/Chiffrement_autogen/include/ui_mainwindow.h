/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAjouter;
    QAction *actionRestart;
    QAction *action_propos;
    QAction *action_propos_de_Qt;
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEditUserName;
    QLabel *labelUserName;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QPushButton *buttonCopyUserName;
    QPushButton *buttonSeePassword;
    QPushButton *buttonCopyPassword;
    QPushButton *buttonSeeUserName;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEditUserName_6;
    QLabel *labelUserName_6;
    QLabel *labelPassword_6;
    QLineEdit *lineEditPassword_6;
    QPushButton *buttonCopyUserName_6;
    QPushButton *buttonSeePassword_6;
    QPushButton *buttonCopyPassword_6;
    QPushButton *buttonSeeUserName_6;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEditUserName_5;
    QLabel *labelUserName_5;
    QLabel *labelPassword_5;
    QLineEdit *lineEditPassword_5;
    QPushButton *buttonCopyUserName_5;
    QPushButton *buttonSeePassword_5;
    QPushButton *buttonCopyPassword_5;
    QPushButton *buttonSeeUserName_5;
    QLabel *categorieName;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEditUserName_3;
    QLabel *labelUserName_3;
    QLabel *labelPassword_3;
    QLineEdit *lineEditPassword_3;
    QPushButton *buttonCopyUserName_3;
    QPushButton *buttonSeePassword_3;
    QPushButton *buttonCopyPassword_3;
    QPushButton *buttonSeeUserName_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditUserName_2;
    QLabel *labelUserName_2;
    QLabel *labelPassword_2;
    QLineEdit *lineEditPassword_2;
    QPushButton *buttonCopyUserName_2;
    QPushButton *buttonSeePassword_2;
    QPushButton *buttonCopyPassword_2;
    QPushButton *buttonSeeUserName_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEditUserName_4;
    QLabel *labelUserName_4;
    QLabel *labelPassword_4;
    QLineEdit *lineEditPassword_4;
    QPushButton *buttonCopyUserName_4;
    QPushButton *buttonSeePassword_4;
    QPushButton *buttonCopyPassword_4;
    QPushButton *buttonSeeUserName_4;
    QComboBox *categoriesNameComboBox;
    QToolBar *toolBar;
    QMenuBar *menuBar;
    QMenu *menu_propos;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(841, 565);
        MainWindow->setMinimumSize(QSize(841, 565));
        MainWindow->setMaximumSize(QSize(841, 565));
        actionAjouter = new QAction(MainWindow);
        actionAjouter->setObjectName("actionAjouter");
        actionRestart = new QAction(MainWindow);
        actionRestart->setObjectName("actionRestart");
        action_propos = new QAction(MainWindow);
        action_propos->setObjectName("action_propos");
        action_propos_de_Qt = new QAction(MainWindow);
        action_propos_de_Qt->setObjectName("action_propos_de_Qt");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName("gridLayout_7");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(false);
        groupBox->setMinimumSize(QSize(321, 131));
        groupBox->setMaximumSize(QSize(321, 131));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        lineEditUserName = new QLineEdit(groupBox);
        lineEditUserName->setObjectName("lineEditUserName");
        lineEditUserName->setEchoMode(QLineEdit::Password);
        lineEditUserName->setReadOnly(true);

        gridLayout->addWidget(lineEditUserName, 1, 0, 1, 1);

        labelUserName = new QLabel(groupBox);
        labelUserName->setObjectName("labelUserName");

        gridLayout->addWidget(labelUserName, 0, 0, 1, 1);

        labelPassword = new QLabel(groupBox);
        labelPassword->setObjectName("labelPassword");

        gridLayout->addWidget(labelPassword, 2, 0, 1, 1);

        lineEditPassword = new QLineEdit(groupBox);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setEchoMode(QLineEdit::Password);
        lineEditPassword->setReadOnly(true);

        gridLayout->addWidget(lineEditPassword, 3, 0, 1, 1);

        buttonCopyUserName = new QPushButton(groupBox);
        buttonCopyUserName->setObjectName("buttonCopyUserName");

        gridLayout->addWidget(buttonCopyUserName, 1, 1, 1, 1);

        buttonSeePassword = new QPushButton(groupBox);
        buttonSeePassword->setObjectName("buttonSeePassword");

        gridLayout->addWidget(buttonSeePassword, 3, 2, 1, 1);

        buttonCopyPassword = new QPushButton(groupBox);
        buttonCopyPassword->setObjectName("buttonCopyPassword");

        gridLayout->addWidget(buttonCopyPassword, 3, 1, 1, 1);

        buttonSeeUserName = new QPushButton(groupBox);
        buttonSeeUserName->setObjectName("buttonSeeUserName");

        gridLayout->addWidget(buttonSeeUserName, 1, 2, 1, 1);


        gridLayout_7->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setEnabled(false);
        groupBox_6->setMinimumSize(QSize(321, 131));
        groupBox_6->setMaximumSize(QSize(321, 131));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName("gridLayout_6");
        lineEditUserName_6 = new QLineEdit(groupBox_6);
        lineEditUserName_6->setObjectName("lineEditUserName_6");
        lineEditUserName_6->setEchoMode(QLineEdit::Password);
        lineEditUserName_6->setReadOnly(true);

        gridLayout_6->addWidget(lineEditUserName_6, 1, 0, 1, 1);

        labelUserName_6 = new QLabel(groupBox_6);
        labelUserName_6->setObjectName("labelUserName_6");

        gridLayout_6->addWidget(labelUserName_6, 0, 0, 1, 1);

        labelPassword_6 = new QLabel(groupBox_6);
        labelPassword_6->setObjectName("labelPassword_6");

        gridLayout_6->addWidget(labelPassword_6, 2, 0, 1, 1);

        lineEditPassword_6 = new QLineEdit(groupBox_6);
        lineEditPassword_6->setObjectName("lineEditPassword_6");
        lineEditPassword_6->setEchoMode(QLineEdit::Password);
        lineEditPassword_6->setReadOnly(true);

        gridLayout_6->addWidget(lineEditPassword_6, 3, 0, 1, 1);

        buttonCopyUserName_6 = new QPushButton(groupBox_6);
        buttonCopyUserName_6->setObjectName("buttonCopyUserName_6");

        gridLayout_6->addWidget(buttonCopyUserName_6, 1, 1, 1, 1);

        buttonSeePassword_6 = new QPushButton(groupBox_6);
        buttonSeePassword_6->setObjectName("buttonSeePassword_6");

        gridLayout_6->addWidget(buttonSeePassword_6, 3, 2, 1, 1);

        buttonCopyPassword_6 = new QPushButton(groupBox_6);
        buttonCopyPassword_6->setObjectName("buttonCopyPassword_6");

        gridLayout_6->addWidget(buttonCopyPassword_6, 3, 1, 1, 1);

        buttonSeeUserName_6 = new QPushButton(groupBox_6);
        buttonSeeUserName_6->setObjectName("buttonSeeUserName_6");

        gridLayout_6->addWidget(buttonSeeUserName_6, 1, 2, 1, 1);


        gridLayout_7->addWidget(groupBox_6, 3, 1, 1, 1);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setEnabled(false);
        groupBox_5->setMinimumSize(QSize(321, 131));
        groupBox_5->setMaximumSize(QSize(321, 131));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName("gridLayout_5");
        lineEditUserName_5 = new QLineEdit(groupBox_5);
        lineEditUserName_5->setObjectName("lineEditUserName_5");
        lineEditUserName_5->setEchoMode(QLineEdit::Password);
        lineEditUserName_5->setReadOnly(true);

        gridLayout_5->addWidget(lineEditUserName_5, 1, 0, 1, 1);

        labelUserName_5 = new QLabel(groupBox_5);
        labelUserName_5->setObjectName("labelUserName_5");

        gridLayout_5->addWidget(labelUserName_5, 0, 0, 1, 1);

        labelPassword_5 = new QLabel(groupBox_5);
        labelPassword_5->setObjectName("labelPassword_5");

        gridLayout_5->addWidget(labelPassword_5, 2, 0, 1, 1);

        lineEditPassword_5 = new QLineEdit(groupBox_5);
        lineEditPassword_5->setObjectName("lineEditPassword_5");
        lineEditPassword_5->setEchoMode(QLineEdit::Password);
        lineEditPassword_5->setReadOnly(true);

        gridLayout_5->addWidget(lineEditPassword_5, 3, 0, 1, 1);

        buttonCopyUserName_5 = new QPushButton(groupBox_5);
        buttonCopyUserName_5->setObjectName("buttonCopyUserName_5");

        gridLayout_5->addWidget(buttonCopyUserName_5, 1, 1, 1, 1);

        buttonSeePassword_5 = new QPushButton(groupBox_5);
        buttonSeePassword_5->setObjectName("buttonSeePassword_5");

        gridLayout_5->addWidget(buttonSeePassword_5, 3, 2, 1, 1);

        buttonCopyPassword_5 = new QPushButton(groupBox_5);
        buttonCopyPassword_5->setObjectName("buttonCopyPassword_5");

        gridLayout_5->addWidget(buttonCopyPassword_5, 3, 1, 1, 1);

        buttonSeeUserName_5 = new QPushButton(groupBox_5);
        buttonSeeUserName_5->setObjectName("buttonSeeUserName_5");

        gridLayout_5->addWidget(buttonSeeUserName_5, 1, 2, 1, 1);


        gridLayout_7->addWidget(groupBox_5, 3, 0, 1, 1);

        categorieName = new QLabel(centralwidget);
        categorieName->setObjectName("categorieName");
        categorieName->setEnabled(false);
        QFont font;
        font.setPointSize(12);
        categorieName->setFont(font);

        gridLayout_7->addWidget(categorieName, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setEnabled(false);
        groupBox_3->setMinimumSize(QSize(321, 131));
        groupBox_3->setMaximumSize(QSize(321, 131));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        lineEditUserName_3 = new QLineEdit(groupBox_3);
        lineEditUserName_3->setObjectName("lineEditUserName_3");
        lineEditUserName_3->setEchoMode(QLineEdit::Password);
        lineEditUserName_3->setReadOnly(true);

        gridLayout_3->addWidget(lineEditUserName_3, 1, 0, 1, 1);

        labelUserName_3 = new QLabel(groupBox_3);
        labelUserName_3->setObjectName("labelUserName_3");

        gridLayout_3->addWidget(labelUserName_3, 0, 0, 1, 1);

        labelPassword_3 = new QLabel(groupBox_3);
        labelPassword_3->setObjectName("labelPassword_3");

        gridLayout_3->addWidget(labelPassword_3, 2, 0, 1, 1);

        lineEditPassword_3 = new QLineEdit(groupBox_3);
        lineEditPassword_3->setObjectName("lineEditPassword_3");
        lineEditPassword_3->setEchoMode(QLineEdit::Password);
        lineEditPassword_3->setReadOnly(true);

        gridLayout_3->addWidget(lineEditPassword_3, 3, 0, 1, 1);

        buttonCopyUserName_3 = new QPushButton(groupBox_3);
        buttonCopyUserName_3->setObjectName("buttonCopyUserName_3");

        gridLayout_3->addWidget(buttonCopyUserName_3, 1, 1, 1, 1);

        buttonSeePassword_3 = new QPushButton(groupBox_3);
        buttonSeePassword_3->setObjectName("buttonSeePassword_3");

        gridLayout_3->addWidget(buttonSeePassword_3, 3, 2, 1, 1);

        buttonCopyPassword_3 = new QPushButton(groupBox_3);
        buttonCopyPassword_3->setObjectName("buttonCopyPassword_3");

        gridLayout_3->addWidget(buttonCopyPassword_3, 3, 1, 1, 1);

        buttonSeeUserName_3 = new QPushButton(groupBox_3);
        buttonSeeUserName_3->setObjectName("buttonSeeUserName_3");

        gridLayout_3->addWidget(buttonSeeUserName_3, 1, 2, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setEnabled(false);
        groupBox_2->setMinimumSize(QSize(321, 131));
        groupBox_2->setMaximumSize(QSize(321, 131));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        lineEditUserName_2 = new QLineEdit(groupBox_2);
        lineEditUserName_2->setObjectName("lineEditUserName_2");
        lineEditUserName_2->setEchoMode(QLineEdit::Password);
        lineEditUserName_2->setReadOnly(true);

        gridLayout_2->addWidget(lineEditUserName_2, 1, 0, 1, 1);

        labelUserName_2 = new QLabel(groupBox_2);
        labelUserName_2->setObjectName("labelUserName_2");

        gridLayout_2->addWidget(labelUserName_2, 0, 0, 1, 1);

        labelPassword_2 = new QLabel(groupBox_2);
        labelPassword_2->setObjectName("labelPassword_2");

        gridLayout_2->addWidget(labelPassword_2, 2, 0, 1, 1);

        lineEditPassword_2 = new QLineEdit(groupBox_2);
        lineEditPassword_2->setObjectName("lineEditPassword_2");
        lineEditPassword_2->setEchoMode(QLineEdit::Password);
        lineEditPassword_2->setReadOnly(true);

        gridLayout_2->addWidget(lineEditPassword_2, 3, 0, 1, 1);

        buttonCopyUserName_2 = new QPushButton(groupBox_2);
        buttonCopyUserName_2->setObjectName("buttonCopyUserName_2");

        gridLayout_2->addWidget(buttonCopyUserName_2, 1, 1, 1, 1);

        buttonSeePassword_2 = new QPushButton(groupBox_2);
        buttonSeePassword_2->setObjectName("buttonSeePassword_2");

        gridLayout_2->addWidget(buttonSeePassword_2, 3, 2, 1, 1);

        buttonCopyPassword_2 = new QPushButton(groupBox_2);
        buttonCopyPassword_2->setObjectName("buttonCopyPassword_2");

        gridLayout_2->addWidget(buttonCopyPassword_2, 3, 1, 1, 1);

        buttonSeeUserName_2 = new QPushButton(groupBox_2);
        buttonSeeUserName_2->setObjectName("buttonSeeUserName_2");

        gridLayout_2->addWidget(buttonSeeUserName_2, 1, 2, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 1, 1, 1, 1);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setEnabled(false);
        groupBox_4->setMinimumSize(QSize(321, 131));
        groupBox_4->setMaximumSize(QSize(321, 131));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName("gridLayout_4");
        lineEditUserName_4 = new QLineEdit(groupBox_4);
        lineEditUserName_4->setObjectName("lineEditUserName_4");
        lineEditUserName_4->setEchoMode(QLineEdit::Password);
        lineEditUserName_4->setReadOnly(true);

        gridLayout_4->addWidget(lineEditUserName_4, 1, 0, 1, 1);

        labelUserName_4 = new QLabel(groupBox_4);
        labelUserName_4->setObjectName("labelUserName_4");

        gridLayout_4->addWidget(labelUserName_4, 0, 0, 1, 1);

        labelPassword_4 = new QLabel(groupBox_4);
        labelPassword_4->setObjectName("labelPassword_4");

        gridLayout_4->addWidget(labelPassword_4, 2, 0, 1, 1);

        lineEditPassword_4 = new QLineEdit(groupBox_4);
        lineEditPassword_4->setObjectName("lineEditPassword_4");
        lineEditPassword_4->setEchoMode(QLineEdit::Password);
        lineEditPassword_4->setReadOnly(true);

        gridLayout_4->addWidget(lineEditPassword_4, 3, 0, 1, 1);

        buttonCopyUserName_4 = new QPushButton(groupBox_4);
        buttonCopyUserName_4->setObjectName("buttonCopyUserName_4");

        gridLayout_4->addWidget(buttonCopyUserName_4, 1, 1, 1, 1);

        buttonSeePassword_4 = new QPushButton(groupBox_4);
        buttonSeePassword_4->setObjectName("buttonSeePassword_4");

        gridLayout_4->addWidget(buttonSeePassword_4, 3, 2, 1, 1);

        buttonCopyPassword_4 = new QPushButton(groupBox_4);
        buttonCopyPassword_4->setObjectName("buttonCopyPassword_4");

        gridLayout_4->addWidget(buttonCopyPassword_4, 3, 1, 1, 1);

        buttonSeeUserName_4 = new QPushButton(groupBox_4);
        buttonSeeUserName_4->setObjectName("buttonSeeUserName_4");

        gridLayout_4->addWidget(buttonSeeUserName_4, 1, 2, 1, 1);


        gridLayout_7->addWidget(groupBox_4, 2, 1, 1, 1);

        categoriesNameComboBox = new QComboBox(centralwidget);
        categoriesNameComboBox->setObjectName("categoriesNameComboBox");

        gridLayout_7->addWidget(categoriesNameComboBox, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setMovable(false);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 841, 22));
        menu_propos = new QMenu(menuBar);
        menu_propos->setObjectName("menu_propos");
        MainWindow->setMenuBar(menuBar);

        toolBar->addAction(actionAjouter);
        toolBar->addSeparator();
        toolBar->addAction(actionRestart);
        menuBar->addAction(menu_propos->menuAction());
        menu_propos->addAction(action_propos);
        menu_propos->addAction(action_propos_de_Qt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "My Password", nullptr));
        actionAjouter->setText(QCoreApplication::translate("MainWindow", "Ajouter / Supprimer", nullptr));
#if QT_CONFIG(tooltip)
        actionAjouter->setToolTip(QCoreApplication::translate("MainWindow", "Ajouter un nouveau mot de passe et un nom d'utilisateur", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAjouter->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRestart->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
        action_propos->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        action_propos_de_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Vide", nullptr));
        lineEditUserName->setText(QString());
        labelUserName->setText(QCoreApplication::translate("MainWindow", "Nom d'utilisateur :", nullptr));
        labelPassword->setText(QCoreApplication::translate("MainWindow", "Mot de passe :", nullptr));
        buttonCopyUserName->setText(QCoreApplication::translate("MainWindow", "Copier", nullptr));
        buttonSeePassword->setText(QCoreApplication::translate("MainWindow", "Voir", nullptr));
        buttonCopyPassword->setText(QCoreApplication::translate("MainWindow", "Copier", nullptr));
        buttonSeeUserName->setText(QCoreApplication::translate("MainWindow", "Voir", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Vide", nullptr));
        labelUserName_6->setText(QCoreApplication::translate("MainWindow", "Nom d'utilisateur :", nullptr));
        labelPassword_6->setText(QCoreApplication::translate("MainWindow", "Mot de passe :", nullptr));
        buttonCopyUserName_6->setText(QCoreApplication::translate("MainWindow", "Copier", nullptr));
        buttonSeePassword_6->setText(QCoreApplication::translate("MainWindow", "Voir", nullptr));
        buttonCopyPassword_6->setText(QCoreApplication::translate("MainWindow", "Copier", nullptr));
        buttonSeeUserName_6->setText(QCoreApplication::translate("MainWindow", "Voir", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Vide", nullptr));
        labelUserName_5->setText(QCoreApplication::translate("MainWindow", "Nom d'utilisateur :", nullptr));
        labelPassword_5->setText(QCoreApplication::translate("MainWindow", "Mot de passe :", nullptr));
        buttonCopyUserName_5->setText(QCoreApplication::translate("MainWindow", "Copier", nullptr));
        buttonSeePassword_5->setText(QCoreApplication::translate("MainWindow", "Voir", nullptr));
        buttonCopyPassword_5->setText(QCoreApplication::translate("MainWindow", "Copier", nullptr));
        buttonSeeUserName_5->setText(QCoreApplication::translate("MainWindow", "Voir", nullptr));
        categorieName->setText(QCoreApplication::translate("MainWindow", "Cat\303\251gorie", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Vide", nullptr));
        labelUserName_3->setText(QCoreApplication::translate("MainWindow", "Nom d'utilisateur :", nullptr));
        labelPassword_3->setText(QCoreApplication::translate("MainWindow", "Mot de passe :", nullptr));
        buttonCopyUserName_3->setText(QCoreApplication::translate("MainWindow", "Copier", nullptr));
        buttonSeePassword_3->setText(QCoreApplication::translate("MainWindow", "Voir", nullptr));
        buttonCopyPassword_3->setText(QCoreApplication::translate("MainWindow", "Copier", nullptr));
        buttonSeeUserName_3->setText(QCoreApplication::translate("MainWindow", "Voir", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Vide", nullptr));
        labelUserName_2->setText(QCoreApplication::translate("MainWindow", "Nom d'utilisateur :", nullptr));
        labelPassword_2->setText(QCoreApplication::translate("MainWindow", "Mot de passe :", nullptr));
        buttonCopyUserName_2->setText(QCoreApplication::translate("MainWindow", "Copier", nullptr));
        buttonSeePassword_2->setText(QCoreApplication::translate("MainWindow", "Voir", nullptr));
        buttonCopyPassword_2->setText(QCoreApplication::translate("MainWindow", "Copier", nullptr));
        buttonSeeUserName_2->setText(QCoreApplication::translate("MainWindow", "Voir", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Vide", nullptr));
        labelUserName_4->setText(QCoreApplication::translate("MainWindow", "Nom d'utilisateur :", nullptr));
        labelPassword_4->setText(QCoreApplication::translate("MainWindow", "Mot de passe :", nullptr));
        buttonCopyUserName_4->setText(QCoreApplication::translate("MainWindow", "Copier", nullptr));
        buttonSeePassword_4->setText(QCoreApplication::translate("MainWindow", "Voir", nullptr));
        buttonCopyPassword_4->setText(QCoreApplication::translate("MainWindow", "Copier", nullptr));
        buttonSeeUserName_4->setText(QCoreApplication::translate("MainWindow", "Voir", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        menu_propos->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
