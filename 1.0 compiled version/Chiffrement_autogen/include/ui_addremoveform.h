/********************************************************************************
** Form generated from reading UI file 'addremoveform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDREMOVEFORM_H
#define UI_ADDREMOVEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddRemoveForm
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *addGroupBox;
    QHBoxLayout *horizontalLayout;
    QGroupBox *categoryAddGroupBox;
    QGridLayout *gridLayout;
    QLineEdit *categoryNameAddLineEdit;
    QPushButton *iconCategoryAddPushButton;
    QComboBox *previewCategoryAddComboBox;
    QPushButton *validateCategoryAddPushButton;
    QGroupBox *accountAddGroupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *accountNameAddLineEdit;
    QLineEdit *accountUserNameAddLineEdit;
    QLineEdit *accountPasswordAddLineEdit;
    QPushButton *validateAccountAddPushButton;
    QLabel *label;
    QPushButton *generatePasswordPushButton;
    QGroupBox *removeGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *categoryRemoveGroupBox;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *selectCategoryRemoveComboBox;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *validateCategoryRemovePushButton;
    QCheckBox *sureCategoryRemoveCheckBox;
    QGroupBox *accountRemoveGroupBox;
    QGridLayout *gridLayout_4;
    QComboBox *selectAccountRemoveComboBox;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *validateAccountRemovePushButton;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *sureAccountRemoveCheckBox;

    void setupUi(QWidget *AddRemoveForm)
    {
        if (AddRemoveForm->objectName().isEmpty())
            AddRemoveForm->setObjectName("AddRemoveForm");
        AddRemoveForm->resize(516, 367);
        AddRemoveForm->setMinimumSize(QSize(516, 367));
        AddRemoveForm->setMaximumSize(QSize(516, 367));
        verticalLayout = new QVBoxLayout(AddRemoveForm);
        verticalLayout->setObjectName("verticalLayout");
        addGroupBox = new QGroupBox(AddRemoveForm);
        addGroupBox->setObjectName("addGroupBox");
        addGroupBox->setFlat(true);
        addGroupBox->setCheckable(true);
        horizontalLayout = new QHBoxLayout(addGroupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        categoryAddGroupBox = new QGroupBox(addGroupBox);
        categoryAddGroupBox->setObjectName("categoryAddGroupBox");
        categoryAddGroupBox->setFlat(true);
        categoryAddGroupBox->setCheckable(true);
        categoryAddGroupBox->setChecked(true);
        gridLayout = new QGridLayout(categoryAddGroupBox);
        gridLayout->setObjectName("gridLayout");
        categoryNameAddLineEdit = new QLineEdit(categoryAddGroupBox);
        categoryNameAddLineEdit->setObjectName("categoryNameAddLineEdit");
        categoryNameAddLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(categoryNameAddLineEdit, 0, 0, 1, 1);

        iconCategoryAddPushButton = new QPushButton(categoryAddGroupBox);
        iconCategoryAddPushButton->setObjectName("iconCategoryAddPushButton");

        gridLayout->addWidget(iconCategoryAddPushButton, 0, 1, 1, 1);

        previewCategoryAddComboBox = new QComboBox(categoryAddGroupBox);
        previewCategoryAddComboBox->setObjectName("previewCategoryAddComboBox");

        gridLayout->addWidget(previewCategoryAddComboBox, 1, 0, 1, 2);

        validateCategoryAddPushButton = new QPushButton(categoryAddGroupBox);
        validateCategoryAddPushButton->setObjectName("validateCategoryAddPushButton");

        gridLayout->addWidget(validateCategoryAddPushButton, 2, 0, 1, 1);


        horizontalLayout->addWidget(categoryAddGroupBox);

        accountAddGroupBox = new QGroupBox(addGroupBox);
        accountAddGroupBox->setObjectName("accountAddGroupBox");
        accountAddGroupBox->setFlat(true);
        accountAddGroupBox->setCheckable(true);
        accountAddGroupBox->setChecked(false);
        gridLayout_2 = new QGridLayout(accountAddGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        accountNameAddLineEdit = new QLineEdit(accountAddGroupBox);
        accountNameAddLineEdit->setObjectName("accountNameAddLineEdit");
        accountNameAddLineEdit->setClearButtonEnabled(true);

        gridLayout_2->addWidget(accountNameAddLineEdit, 0, 0, 1, 1);

        accountUserNameAddLineEdit = new QLineEdit(accountAddGroupBox);
        accountUserNameAddLineEdit->setObjectName("accountUserNameAddLineEdit");
        accountUserNameAddLineEdit->setClearButtonEnabled(true);

        gridLayout_2->addWidget(accountUserNameAddLineEdit, 1, 0, 1, 1);

        accountPasswordAddLineEdit = new QLineEdit(accountAddGroupBox);
        accountPasswordAddLineEdit->setObjectName("accountPasswordAddLineEdit");
        accountPasswordAddLineEdit->setClearButtonEnabled(true);

        gridLayout_2->addWidget(accountPasswordAddLineEdit, 1, 1, 1, 1);

        validateAccountAddPushButton = new QPushButton(accountAddGroupBox);
        validateAccountAddPushButton->setObjectName("validateAccountAddPushButton");

        gridLayout_2->addWidget(validateAccountAddPushButton, 2, 0, 1, 1);

        label = new QLabel(accountAddGroupBox);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        generatePasswordPushButton = new QPushButton(accountAddGroupBox);
        generatePasswordPushButton->setObjectName("generatePasswordPushButton");

        gridLayout_2->addWidget(generatePasswordPushButton, 2, 1, 1, 1);


        horizontalLayout->addWidget(accountAddGroupBox);


        verticalLayout->addWidget(addGroupBox);

        removeGroupBox = new QGroupBox(AddRemoveForm);
        removeGroupBox->setObjectName("removeGroupBox");
        removeGroupBox->setFlat(true);
        removeGroupBox->setCheckable(true);
        removeGroupBox->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(removeGroupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        categoryRemoveGroupBox = new QGroupBox(removeGroupBox);
        categoryRemoveGroupBox->setObjectName("categoryRemoveGroupBox");
        categoryRemoveGroupBox->setFlat(true);
        categoryRemoveGroupBox->setCheckable(true);
        categoryRemoveGroupBox->setChecked(true);
        gridLayout_3 = new QGridLayout(categoryRemoveGroupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalSpacer_2 = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        selectCategoryRemoveComboBox = new QComboBox(categoryRemoveGroupBox);
        selectCategoryRemoveComboBox->setObjectName("selectCategoryRemoveComboBox");
        selectCategoryRemoveComboBox->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(selectCategoryRemoveComboBox, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 3, 1, 1, 1);

        validateCategoryRemovePushButton = new QPushButton(categoryRemoveGroupBox);
        validateCategoryRemovePushButton->setObjectName("validateCategoryRemovePushButton");
        validateCategoryRemovePushButton->setMinimumSize(QSize(90, 0));
        validateCategoryRemovePushButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(validateCategoryRemovePushButton, 3, 0, 1, 1);

        sureCategoryRemoveCheckBox = new QCheckBox(categoryRemoveGroupBox);
        sureCategoryRemoveCheckBox->setObjectName("sureCategoryRemoveCheckBox");

        gridLayout_3->addWidget(sureCategoryRemoveCheckBox, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(categoryRemoveGroupBox);

        accountRemoveGroupBox = new QGroupBox(removeGroupBox);
        accountRemoveGroupBox->setObjectName("accountRemoveGroupBox");
        accountRemoveGroupBox->setFlat(true);
        accountRemoveGroupBox->setCheckable(true);
        accountRemoveGroupBox->setChecked(false);
        gridLayout_4 = new QGridLayout(accountRemoveGroupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        selectAccountRemoveComboBox = new QComboBox(accountRemoveGroupBox);
        selectAccountRemoveComboBox->setObjectName("selectAccountRemoveComboBox");
        selectAccountRemoveComboBox->setMinimumSize(QSize(150, 0));

        gridLayout_4->addWidget(selectAccountRemoveComboBox, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        validateAccountRemovePushButton = new QPushButton(accountRemoveGroupBox);
        validateAccountRemovePushButton->setObjectName("validateAccountRemovePushButton");
        validateAccountRemovePushButton->setMinimumSize(QSize(90, 0));
        validateAccountRemovePushButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_4->addWidget(validateAccountRemovePushButton, 2, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 2, 1, 1, 1);

        sureAccountRemoveCheckBox = new QCheckBox(accountRemoveGroupBox);
        sureAccountRemoveCheckBox->setObjectName("sureAccountRemoveCheckBox");

        gridLayout_4->addWidget(sureAccountRemoveCheckBox, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(accountRemoveGroupBox);


        verticalLayout->addWidget(removeGroupBox);


        retranslateUi(AddRemoveForm);

        QMetaObject::connectSlotsByName(AddRemoveForm);
    } // setupUi

    void retranslateUi(QWidget *AddRemoveForm)
    {
        AddRemoveForm->setWindowTitle(QCoreApplication::translate("AddRemoveForm", "Form", nullptr));
        addGroupBox->setTitle(QCoreApplication::translate("AddRemoveForm", "Add", nullptr));
        categoryAddGroupBox->setTitle(QCoreApplication::translate("AddRemoveForm", "Category", nullptr));
        categoryNameAddLineEdit->setInputMask(QString());
        categoryNameAddLineEdit->setText(QString());
        categoryNameAddLineEdit->setPlaceholderText(QCoreApplication::translate("AddRemoveForm", "Name", nullptr));
        iconCategoryAddPushButton->setText(QCoreApplication::translate("AddRemoveForm", "Icon", nullptr));
        validateCategoryAddPushButton->setText(QCoreApplication::translate("AddRemoveForm", "Validate", nullptr));
        accountAddGroupBox->setTitle(QCoreApplication::translate("AddRemoveForm", "Account", nullptr));
        accountNameAddLineEdit->setPlaceholderText(QCoreApplication::translate("AddRemoveForm", "Account name", nullptr));
        accountUserNameAddLineEdit->setPlaceholderText(QCoreApplication::translate("AddRemoveForm", "Username", nullptr));
        accountPasswordAddLineEdit->setPlaceholderText(QCoreApplication::translate("AddRemoveForm", "Password", nullptr));
        validateAccountAddPushButton->setText(QCoreApplication::translate("AddRemoveForm", "Validate", nullptr));
        label->setText(QCoreApplication::translate("AddRemoveForm", "(In the current category)", nullptr));
        generatePasswordPushButton->setText(QCoreApplication::translate("AddRemoveForm", "Generate Password", nullptr));
        removeGroupBox->setTitle(QCoreApplication::translate("AddRemoveForm", "Remove", nullptr));
        categoryRemoveGroupBox->setTitle(QCoreApplication::translate("AddRemoveForm", "Category", nullptr));
        selectCategoryRemoveComboBox->setPlaceholderText(QString());
        validateCategoryRemovePushButton->setText(QCoreApplication::translate("AddRemoveForm", "Validate", nullptr));
        sureCategoryRemoveCheckBox->setText(QCoreApplication::translate("AddRemoveForm", "Are you sure ?", nullptr));
        accountRemoveGroupBox->setTitle(QCoreApplication::translate("AddRemoveForm", "Account", nullptr));
        selectAccountRemoveComboBox->setPlaceholderText(QString());
        validateAccountRemovePushButton->setText(QCoreApplication::translate("AddRemoveForm", "Validate", nullptr));
        sureAccountRemoveCheckBox->setText(QCoreApplication::translate("AddRemoveForm", "Are you sure ?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddRemoveForm: public Ui_AddRemoveForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDREMOVEFORM_H
