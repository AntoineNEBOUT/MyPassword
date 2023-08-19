/********************************************************************************
** Form generated from reading UI file 'keydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYDIALOG_H
#define UI_KEYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_KeyDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *KeyDialog)
    {
        if (KeyDialog->objectName().isEmpty())
            KeyDialog->setObjectName("KeyDialog");
        KeyDialog->resize(400, 80);
        KeyDialog->setMinimumSize(QSize(400, 80));
        KeyDialog->setMaximumSize(QSize(400, 80));
        gridLayout = new QGridLayout(KeyDialog);
        gridLayout->setObjectName("gridLayout");
        lineEdit = new QLineEdit(KeyDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(KeyDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(KeyDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, KeyDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, KeyDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(KeyDialog);
    } // setupUi

    void retranslateUi(QDialog *KeyDialog)
    {
        KeyDialog->setWindowTitle(QCoreApplication::translate("KeyDialog", "Dialog", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("KeyDialog", "Enter the key (only numbers)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KeyDialog: public Ui_KeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYDIALOG_H
