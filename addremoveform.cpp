#include "addremoveform.h"
#include "ui_addremoveform.h"
#include "chiffrage.h"

#include <QList>
#include <QListIterator>
#include <QMessageBox>
#include <fstream>
#include <iostream>

using namespace std;

AddRemoveForm::AddRemoveForm(QList<QString> categoriesNames, QList<QString> groupBoxNames, QString currentCategory, QString key, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddRemoveForm)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(QCoreApplication::applicationDirPath() + "/icons/editIcon.png"));

    ui->selectCategoryRemoveComboBox->addItems(categoriesNames);
    ui->selectCategoryRemoveComboBox->setCurrentText(currentCategory);
    ui->selectAccountRemoveComboBox->addItems(groupBoxNames);
    m_currentCategory = currentCategory;

    ui->validateAccountRemovePushButton->setEnabled(false);
    ui->validateCategoryRemovePushButton->setEnabled(false);
    ui->previewCategoryAddComboBox->addItem("Preview");

    ui->label->setText("In '"+m_currentCategory+"'");

    QString key2 = "1234";
    dTwo = new Chiffrage(key2);

    nullEncrypted = dTwo->Encrypt("null").toStdString();
}


AddRemoveForm::~AddRemoveForm()
{
    delete ui;
}

void AddRemoveForm::on_addGroupBox_toggled(bool arg1)
{
    if(arg1)
        ui->removeGroupBox->setChecked(false);
}


void AddRemoveForm::on_removeGroupBox_toggled(bool arg1)
{
    if(arg1)
        ui->addGroupBox->setChecked(false);
}


void AddRemoveForm::on_categoryAddGroupBox_toggled(bool arg1)
{
    if(arg1)
        ui->accountAddGroupBox->setChecked(false);
}


void AddRemoveForm::on_accountAddGroupBox_toggled(bool arg1)
{
    if(arg1)
        ui->categoryAddGroupBox->setChecked(false);
}


void AddRemoveForm::on_categoryRemoveGroupBox_toggled(bool arg1)
{
    if(arg1)
        ui->accountRemoveGroupBox->setChecked(false);
}


void AddRemoveForm::on_accountRemoveGroupBox_toggled(bool arg1)
{
    if(arg1)
        ui->categoryRemoveGroupBox->setChecked(false);
}


void AddRemoveForm::on_validateCategoryRemovePushButton_clicked()
{
    string text;

    ifstream fileToOpen(path.c_str());

    if(fileToOpen)
    {
        string line;
        bool erase = false;
        int counter = 0;

        while(std::getline(fileToOpen, line)) // Pour récupérer tout le fichier
        {
            if(dTwo->Decrypt(QString::fromStdString(line)) == ui->selectCategoryRemoveComboBox->currentText())
            {
                erase = true;
                counter++;
            }
            else if(erase)
                counter++;
            else
                text += line + "\n";

            if(counter == 20)
            {
                counter = 0;
                erase = false;
            }
        }
    }

    ofstream monFlux(path.c_str());

    if(monFlux)
    {
        monFlux << text;
    }

    ui->sureCategoryRemoveCheckBox->setChecked(false);
    ui->validateCategoryRemovePushButton->setEnabled(false);
    ui->selectCategoryRemoveComboBox->removeItem(ui->selectCategoryRemoveComboBox->currentIndex());
    QMessageBox::information(this, "Succès", "The category '" + ui->selectCategoryRemoveComboBox->currentText() + "' has been removed.");
}


void AddRemoveForm::on_sureCategoryRemoveCheckBox_toggled(bool checked)
{
    ui->validateCategoryRemovePushButton->setEnabled(checked);
}


void AddRemoveForm::on_sureAccountRemoveCheckBox_toggled(bool checked)
{
    ui->validateAccountRemovePushButton->setEnabled(checked);
}


void AddRemoveForm::on_validateAccountRemovePushButton_clicked()
{
   string text;

    ifstream fileToOpen(path.c_str());

    if(fileToOpen)
    {
        string line;
        bool erase = false;
        int counter = 0;

        while(std::getline(fileToOpen, line)) // Pour récupérer tout le fichier
        {
            if(dTwo->Decrypt(QString::fromStdString(line)) == ui->selectAccountRemoveComboBox->currentText() || erase)
            {
                erase = true;
                counter++;
                text += nullEncrypted + "\n";
            }
            else if(line != nullEncrypted)
                text += dTwo->Encrypt(QString::fromStdString(line)).toStdString() + "\n";
            else
                text += line;

            if(counter == 3)
            {
                counter = 0;
                erase = false;
            }
        }
    }

    ofstream monFlux(path.c_str());

    if(monFlux)
    {
        monFlux << text;
    }

    ui->sureAccountRemoveCheckBox->setChecked(false);
    ui->validateAccountRemovePushButton->setEnabled(false);
    ui->selectAccountRemoveComboBox->removeItem(ui->selectAccountRemoveComboBox->currentIndex());
    QMessageBox::information(this, "Succès", "The account '" + ui->selectAccountRemoveComboBox->currentText() + "' has been removed.");
}


void AddRemoveForm::on_categoryNameAddLineEdit_textChanged(const QString &arg1)
{
    ui->previewCategoryAddComboBox->clear();

    if(arg1 == "")
        ui->previewCategoryAddComboBox->addItem("Preview");
    else
        ui->previewCategoryAddComboBox->addItem(arg1);
}


void AddRemoveForm::on_validateCategoryAddPushButton_clicked()
{
    string text;

    ifstream fileToOpen(path.c_str());

    if(fileToOpen)
    {
        string line;

        while(std::getline(fileToOpen, line)) // Pour récupérer tout le fichier
        {
            text += line + "\n";
        }
    }

    ofstream monFlux(path.c_str());

    if(monFlux)
    {
        monFlux << text + dTwo->Encrypt(ui->categoryNameAddLineEdit->text()).toStdString() + "\nIcon" + dTwo->Encrypt(ui->categoryNameAddLineEdit->text()).toStdString() + "\n";

        int i;
        for(i = 0 ; i < 18 ; i++)
        {
            monFlux << nullEncrypted + "\n";
        }
    }
    ui->categoryNameAddLineEdit->clear();
    QMessageBox::information(this, "Succès", "The category '" + ui->categoryNameAddLineEdit->text() + "' has been added.");
}


void AddRemoveForm::on_validateAccountAddPushButton_clicked()
{
    string text;

    ifstream fileToOpen(path.c_str());

    if(fileToOpen)
    {
        string line;
        int counter = 0;
        bool category = false;

        while(std::getline(fileToOpen, line)) // Pour récupérer tout le fichier
        {
            if(dTwo->Decrypt(QString::fromStdString(line)) == m_currentCategory)
            {
                category = true;
                text += line + "\n";
            }
            else if(line == nullEncrypted && category && counter < 3)
            {
                if(counter == 0)
                    text += dTwo->Encrypt(ui->accountNameAddLineEdit->text()).toStdString() + "\n";
                else if(counter == 1)
                    text += dTwo->Encrypt(ui->accountUserNameAddLineEdit->text()).toStdString() + "\n";
                else if(counter == 2)
                {
                    text += dTwo->Encrypt(ui->accountPasswordAddLineEdit->text()).toStdString() + "\n";
                    category = false;
                }

                counter++;
            }
            else
            {
                text += line + "\n";
            }
        }
    }

    ofstream monFlux(path.c_str());

    if(monFlux)
    {
        monFlux << text;
    }
    ui->accountNameAddLineEdit->clear();
    ui->accountUserNameAddLineEdit->clear();
    ui->accountPasswordAddLineEdit->clear();
    QMessageBox::information(this, "Succès", "The account '" + ui->accountNameAddLineEdit->text() + "' has been added.");
}


void AddRemoveForm::on_generatePasswordPushButton_clicked()
{
    ui->accountPasswordAddLineEdit->setText(dTwo->GeneratePassword(8));
}

