#include "importform.h"
#include "ui_importform.h"

#include "chiffrage.h"

#include <fstream>
#include <iostream>
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QDirIterator>

using namespace std;

ImportForm::ImportForm(QWidget *parent, QString *importFolderPath) :
    QWidget(parent),
    ui(new Ui::importForm)
{
    ui->setupUi(this);

    mImportPath = *importFolderPath;

    encryptor = new Chiffrage();

    int i;
    for(i = 0 ; i < 10 ; i++)
        mNum.append(QString::number(i));

    mSize = 20;

    ui->keyOfCurrentCategoriesCheckLabel->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/Icons/notOkIcon.png").scaled(mSize, mSize));
    ui->keyOfCurrentCategoriesCheckLabel->setFixedSize(mSize, mSize);
    ui->keyOfImportedCategoriesCheckLabel->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/Icons/notOkIcon.png").scaled(mSize, mSize));
    ui->keyOfImportedCategoriesCheckLabel->setFixedSize(mSize, mSize);
    ui->newKeyCheckLabel->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/Icons/notOkIcon.png").scaled(mSize, mSize));
    ui->newKeyCheckLabel->setFixedSize(mSize, mSize);
    ui->validateNewKeyCheckLabel->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/Icons/notOkIcon.png").scaled(mSize, mSize));
    ui->validateNewKeyCheckLabel->setFixedSize(mSize, mSize);

    this->setFixedHeight(267);
}

ImportForm::~ImportForm()
{
    delete ui;
}

void ImportForm::on_addToolButton_clicked()
{
    QMessageBox::information(this, "Add import folder content to others categories",
                             "This option will add the data you wish to import "
                             "to those already entered in the program, thereby "
                             "extending your saved passwords.");
}


void ImportForm::on_replaceToolButton_clicked()
{
    QMessageBox::information(this, "Replace others categories by the content of the import folder",
                             "This option will replace the data already entered "
                             "in the program with the data you wish to import.");
}


void ImportForm::on_keyOfCurrentCategoriesLineEdit_textChanged(const QString &arg1)
{
    bool withoutNum = true;
    int i;
    for(i = 0 ; i < arg1.length() ; i++)
        if(!mNum.contains(arg1[i]))
            withoutNum = false;

    if(withoutNum && arg1 != "")
    {
        ui->keyOfCurrentCategoriesCheckLabel->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/Icons/okIcon.png").scaled(mSize, mSize));
        ui->keyOfCurrentCategoriesCheckLabel->setFixedSize(mSize, mSize);
        mIsCurrentCategoriesKeyIsOk = 1;
    }
    else
    {
        ui->keyOfCurrentCategoriesCheckLabel->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/Icons/notOkIcon.png").scaled(mSize, mSize));
        ui->keyOfCurrentCategoriesCheckLabel->setFixedSize(mSize, mSize);
        mIsCurrentCategoriesKeyIsOk = 0;
    }
}


void ImportForm::on_keyOfImportCategoriesLineEdit_textChanged(const QString &arg1)
{
    bool withoutNum = true;
    int i;
    for(i = 0 ; i < arg1.length() ; i++)
        if(!mNum.contains(arg1[i]))
            withoutNum = false;

    if(withoutNum && arg1 != "")
    {
        ui->keyOfImportedCategoriesCheckLabel->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/Icons/okIcon.png").scaled(mSize, mSize));
        ui->keyOfImportedCategoriesCheckLabel->setFixedSize(mSize, mSize);
        mIsCurrentImportCategoriesKeyIsOk = 1;
    }
    else
    {
        ui->keyOfImportedCategoriesCheckLabel->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/Icons/notOkIcon.png").scaled(mSize, mSize));
        ui->keyOfImportedCategoriesCheckLabel->setFixedSize(mSize, mSize);
        mIsCurrentImportCategoriesKeyIsOk = 0;
    }
}


void ImportForm::on_newKeyOfCategoriesLineEdit_textChanged(const QString &arg1)
{
    bool withoutNum = true;
    int i;
    for(i = 0 ; i < arg1.length() ; i++)
        if(!mNum.contains(arg1[i]))
            withoutNum = false;

    if(withoutNum && arg1 != "")
    {
        ui->newKeyCheckLabel->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/Icons/okIcon.png").scaled(mSize, mSize));
        ui->newKeyCheckLabel->setFixedSize(mSize, mSize);
        mIsNewKeyIsOk = 1;
    }
    else
    {
        ui->newKeyCheckLabel->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/Icons/notOkIcon.png").scaled(mSize, mSize));
        ui->newKeyCheckLabel->setFixedSize(mSize, mSize);
        mIsNewKeyIsOk = 0;
    }

    ImportForm::on_validateNewKeyOfCategoriesLineEdit_textChanged(ui->validateNewKeyOfCategoriesLineEdit->text());
}


void ImportForm::on_validateNewKeyOfCategoriesLineEdit_textChanged(const QString &arg1)
{
    bool withoutNum = true;
    int i;
    for(i = 0 ; i < arg1.length() ; i++)
        if(!mNum.contains(arg1[i]))
            withoutNum = false;

    if(withoutNum && arg1 != "" && arg1 == ui->newKeyOfCategoriesLineEdit->text())
    {
        ui->validateNewKeyCheckLabel->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/Icons/okIcon.png").scaled(mSize, mSize));
        ui->validateNewKeyCheckLabel->setFixedSize(mSize, mSize);
        mIsValidateNewKeyIsOk = 1;
    }
    else
    {
        ui->validateNewKeyCheckLabel->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "/Icons/notOkIcon.png").scaled(mSize, mSize));
        ui->validateNewKeyCheckLabel->setFixedSize(mSize, mSize);
        mIsValidateNewKeyIsOk = 0;
    }
}

void ImportForm::on_addRadioButton_toggled(bool checked)
{
    ui->keyOfCurrentCategoriesLineEdit->setVisible(checked);
    ui->keyOfCurrentCategoriesCheckLabel->setVisible(checked);
    this->setFixedHeight(267);
}


void ImportForm::on_replaceRadioButton_toggled(bool checked)
{
    ui->keyOfCurrentCategoriesLineEdit->setVisible(!checked);
    ui->keyOfCurrentCategoriesCheckLabel->setVisible(!checked);
    this->setFixedHeight(230);
}


void ImportForm::on_acceptButtonBox_rejected()
{
    this->close();
}


void ImportForm::on_acceptButtonBox_accepted()
{
    if(ui->addRadioButton->isChecked())
    {
        if(mIsCurrentCategoriesKeyIsOk && mIsCurrentImportCategoriesKeyIsOk && mIsNewKeyIsOk && mIsValidateNewKeyIsOk)
        {
            QFile::remove(QCoreApplication::applicationDirPath() + "/categories.txt.old");
            QFile::copy(QCoreApplication::applicationDirPath() + "/categories.txt", QCoreApplication::applicationDirPath() + "/categories.txt.old");

            QDirIterator iconDirIterator(mImportPath, QDirIterator::Subdirectories);
            while(iconDirIterator.hasNext())
            {
                QString temp = iconDirIterator.next();
                if(QFileInfo(temp).fileName() != "." && QFileInfo(temp).fileName() != ".." && QFileInfo(temp).fileName() != "categories.txt")
                {
                    QFile::copy(temp, QCoreApplication::applicationDirPath() + "/CategoriesIcons/" + QFileInfo(temp).fileName());
                }
            }

            bool openedFile = 0;
            bool savedFile = 0;
            QString contentToSave;

            //Get content of the current categories text file (re-encrypted)
            string path = (QCoreApplication::applicationDirPath() + "/categories.txt").toStdString();

            ifstream fileToOpen(path.c_str());

            if(fileToOpen)
            {
                string line;

                while(std::getline(fileToOpen, line)) // Pour récupérer tout le fichier
                {
                    if(line != "")
                    {
                        QString temp = encryptor->Decrypt(QString::fromStdString(line), ui->keyOfCurrentCategoriesLineEdit->text());
                        cout << temp.toStdString() << endl;
                        contentToSave += encryptor->Encrypt(temp, ui->newKeyOfCategoriesLineEdit->text()) + "\n";
                    }
                }
                openedFile = 1;
            }
            else
                openedFile = 0;

            fileToOpen.close();


            //Get content of the import categories text file (re-encrypted)
            path = mImportPath.toStdString() + "/categories.txt";

            ifstream fileToOpen2(path.c_str());
            if(fileToOpen2)
            {
                string line;

                while(std::getline(fileToOpen2, line)) // Pour récupérer tout le fichier
                {
                    if(line != "")
                    {
                        QString temp = encryptor->Decrypt(QString::fromStdString(line), ui->keyOfImportCategoriesLineEdit->text());
                        cout << temp.toStdString() << endl;
                        contentToSave += encryptor->Encrypt(temp, ui->newKeyOfCategoriesLineEdit->text()) + "\n";
                    }
                }
            }
            else
                openedFile = 0;

            fileToOpen2.close();

            path = (QCoreApplication::applicationDirPath() + "/categories.txt").toStdString();
            ofstream monFlux(path.c_str());

            if(monFlux)
            {

                monFlux << contentToSave.toStdString();
                savedFile = 1;
            }
            else
                savedFile = 0;

            monFlux.close();

            if(openedFile && savedFile)
                QMessageBox::information(this, "Import categories", "Importing categories was a success!\nA restart is required for the import to take effect.");
            else
                QMessageBox::critical(this, "Import categories", "Importing categories was a failure!");

            this->close();
        }
        else
        {
            QMessageBox::warning(this, "Warning", "You can't import categories without filling in all the necessary keys!");
        }
    }
    else
    {
        if(mIsCurrentImportCategoriesKeyIsOk && mIsNewKeyIsOk && mIsValidateNewKeyIsOk)
        {
            QFile::remove(QCoreApplication::applicationDirPath() + "/categories.txt.old");
            QFile::rename(QCoreApplication::applicationDirPath() + "/categories.txt", QCoreApplication::applicationDirPath() + "/categories.txt.old");
            QFile::copy(mImportPath + "/categories.txt", QCoreApplication::applicationDirPath() + "/categories.txt");

            QDirIterator iconDirIterator(mImportPath, QDirIterator::Subdirectories);
            while(iconDirIterator.hasNext())
            {
                QString temp = iconDirIterator.next();
                if(QFileInfo(temp).fileName() != "." && QFileInfo(temp).fileName() != ".." && QFileInfo(temp).fileName() != "categories.txt")
                {
                    QFile::copy(temp, QCoreApplication::applicationDirPath() + "/CategoriesIcons/" + QFileInfo(temp).fileName());
                }
            }

            string path = QCoreApplication::applicationDirPath().toStdString() + "/categories.txt";
            QString content;

            ifstream fileToOpen(path.c_str());

            bool openedFile = 0;
            bool savedFile = 0;

            if(fileToOpen)
            {
                string line;

                while(std::getline(fileToOpen, line)) // Pour récupérer tout le fichier
                {
                    if(line != "")
                    {
                        QString temp = encryptor->Decrypt(QString::fromStdString(line), ui->keyOfImportCategoriesLineEdit->text());
                        cout << temp.toStdString() << endl;
                        content += encryptor->Encrypt(temp, ui->newKeyOfCategoriesLineEdit->text()) + "\n";
                    }
                }
                openedFile = 1;
            }
            else
                openedFile = 0;

            fileToOpen.close();

            ofstream monFlux(path.c_str());

            if(monFlux)
            {

                monFlux << content.toStdString();
                savedFile = 1;
            }
            else
                savedFile = 0;

            monFlux.close();

            if(openedFile && savedFile)
                QMessageBox::information(this, "Import categories", "Importing categories was a success!\nA restart is required for the import to take effect.");
            else
                QMessageBox::critical(this, "Import categories", "Importing categories was a failure!");

            this->close();
        }
        else
        {
            QMessageBox::warning(this, "Warning", "You can't import categories without filling in all the necessary keys!");
        }
    }
}
