#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "addremoveform.h"
#include "chiffrage.h"
#include "keydialog.h"

#include <QClipboard>
#include <fstream>
#include <iostream>
#include <QList>
#include <QListIterator>
#include <QAction>
#include <QProcess>
#include <QMessageBox>
#include <QFileInfo>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(QCoreApplication::applicationDirPath() + "/icons/MyPasswordIcon"));
    ui->actionAjouter->setIcon(QIcon(QCoreApplication::applicationDirPath() + "/icons/editIcon.png"));
    ui->actionRestart->setIcon(QIcon(QCoreApplication::applicationDirPath() + "/icons/restartIcon.png"));
    ui->action_propos->setIcon(QIcon(QCoreApplication::applicationDirPath() + "/icons/MyPasswordIcon.png"));
    ui->action_propos_de_Qt->setIcon(QIcon(QCoreApplication::applicationDirPath() + "/icons/qt.png"));

    y = new KeyDialog();
    y->setWindowFlags(Qt::WindowStaysOnTopHint);
    y->setWindowIcon(QIcon(QCoreApplication::applicationDirPath() + "/icons/MyPasswordIcon"));

    QFileInfo checkFile(QCoreApplication::applicationDirPath() + "/mdp");
    if(checkFile.exists() && checkFile.isFile())
    {
        y->setWindowTitle("Decryption");
        connect(y, 	SIGNAL(accepted()), SLOT(launch()));
    }
    else
    {
        y->setWindowTitle("Define a key");
        connect(y, 	SIGNAL(accepted()), SLOT(setKey()));
    }

    y->show();

    connect(y, 	SIGNAL(rejected()), SLOT(cancelKey()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::launch()
{
    key = y->keyToShare;
    d = new Chiffrage(key);

    refresh();
    changeCategory();
}

void MainWindow::setKey()
{
    key = y->keyToShare;
    QFile file(QCoreApplication::applicationDirPath() + "/nomdp");
    file.rename("mdp");

    QString hiddenKey = key[0];
    int i;
    for(i = 1 ; i < key.length()-1 ; i++)
        hiddenKey += "*";
    hiddenKey += key[key.length()-1];
    QMessageBox::information(this, "Registered key", "The key has been registered as : " + hiddenKey + "\nUse this key to decrypt at each launch\n"
                             "/!\WARNING/!\If you make a mistake while typing at launch, do not add or delete any element at the risk of losing your data. Simply restart the software.");
}

void MainWindow::cancelKey()
{
    QMessageBox::warning(this, "", "You can't use this software without a encryption key to protect you datas.\nThis software will quit");
    this->close();
}

void MainWindow::refresh()
{
    categoriesName.clear();
    ui->categoriesNameComboBox->clear();

    bool isThereACategory = false;

    string a = QCoreApplication::applicationDirPath().toStdString() + "/categories.txt";
    ifstream fileToOpen(a.c_str());

    if(fileToOpen)
    {
        string line;
        int counter = 1;

        while(std::getline(fileToOpen, line)) // Pour récupérer tout le fichier
        {
            if(d->Decrypt(QString::fromStdString(line)) != "")
            {
                content.append(d->Decrypt(QString::fromStdString(line)));
                if(counter == 1)
                {
                    if(line != "")
                    {
                        categoriesName.append(d->Decrypt(QString::fromStdString(line)));
                        ui->categoriesNameComboBox->addItem(d->Decrypt(QString::fromStdString(line)));
                        isThereACategory = true;
                    }
                }
                else if(counter == 20)
                    counter = 0;
                counter++;
            }
        }

        if(isThereACategory)
            currentCategory = categoriesName[0];
        else
            currentCategory = "EMPTY";
    }
}

void MainWindow::prepareGroupBox(int groupBoxNameIndex, int userNameIndex, int passwordIndex, QGroupBox &groupBox, QLineEdit &userNameLineEdit, QLineEdit &passwordLineEdit)
{
    if(contentToFill[groupBoxNameIndex] != "null")
    {
        groupBoxNames.append(contentToFill[groupBoxNameIndex]);
        groupBox.setTitle(contentToFill[groupBoxNameIndex]);
        groupBox.setEnabled(true);
        userNameLineEdit.setText(contentToFill[userNameIndex]);
        userNameLineEdit.setEnabled(true);
        passwordLineEdit.setText(contentToFill[passwordIndex]);
        passwordLineEdit.setEnabled(true);
    }
    else
    {
        groupBox.setTitle("Empty");
        groupBox.setEnabled(false);
        userNameLineEdit.clear();
        passwordLineEdit.clear();
    }
    userNameLineEdit.setEchoMode(QLineEdit::Password);
    passwordLineEdit.setEchoMode(QLineEdit::Password);
}

void MainWindow::changeCategory()
{
    groupBoxNames.clear();

    if(!content.isEmpty())
    {
        string a = QCoreApplication::applicationDirPath().toStdString() + "/categories.txt";
        ifstream fileToOpen(a.c_str());

        if(fileToOpen)
        {
            string line;
            bool canFillList = false;
            int counter = 0;

            while(std::getline(fileToOpen, line)) // Pour récupérer tout le fichier
            {
                if(line != "")
                {
                    if(d->Decrypt(QString::fromStdString(line)) == currentCategory && !canFillList)
                    {
                        contentToFill.append(d->Decrypt(QString::fromStdString(line)));
                        canFillList = true;
                    }
                    else if(canFillList && counter <= 18)
                    {
                        contentToFill.append(d->Decrypt(QString::fromStdString(line)));
                        counter++;
                    }
                }
            }
        }

        ui->categorieName->setText(currentCategory);
        ui->categorieName->setEnabled(true);
        prepareGroupBox(2, 3, 4, *ui->groupBox, *ui->lineEditUserName, *ui->lineEditPassword);
        prepareGroupBox(5, 6, 7, *ui->groupBox_2, *ui->lineEditUserName_2, *ui->lineEditPassword_2);
        prepareGroupBox(8, 9, 10, *ui->groupBox_3, *ui->lineEditUserName_3, *ui->lineEditPassword_3);
        prepareGroupBox(11, 12, 13, *ui->groupBox_4, *ui->lineEditUserName_4, *ui->lineEditPassword_4);
        prepareGroupBox(14, 15, 16, *ui->groupBox_5, *ui->lineEditUserName_5, *ui->lineEditPassword_5);
        prepareGroupBox(17, 18, 19, *ui->groupBox_6, *ui->lineEditUserName_6, *ui->lineEditPassword_6);
        contentToFill.clear();
    }
}

void MainWindow::on_categoriesNameComboBox_currentTextChanged(const QString &arg1)
{
    currentCategory = arg1;
    changeCategory();
}

void MainWindow::changeEchoMode(QLineEdit *qLineEdit)
{
    if(qLineEdit->echoMode() == QLineEdit::Password)
        qLineEdit->setEchoMode(QLineEdit::Normal);
    else
        qLineEdit->setEchoMode(QLineEdit::Password);
}

void MainWindow::on_buttonCopyUserName_clicked()
{
    c->setText(ui->lineEditUserName->text());
}

void MainWindow::on_buttonCopyPassword_clicked()
{
    c->setText(ui->lineEditPassword->text());
}

void MainWindow::on_buttonCopyUserName_2_clicked()
{
    c->setText(ui->lineEditUserName_2->text());
}

void MainWindow::on_buttonCopyPassword_2_clicked()
{
    c->setText(ui->lineEditPassword_2->text());
}

void MainWindow::on_buttonCopyUserName_3_clicked()
{
    c->setText(ui->lineEditUserName_3->text());
}

void MainWindow::on_buttonCopyPassword_3_clicked()
{
    c->setText(ui->lineEditPassword_3->text());
}

void MainWindow::on_buttonCopyUserName_4_clicked()
{
    c->setText(ui->lineEditUserName_4->text());
}

void MainWindow::on_buttonCopyPassword_4_clicked()
{
    c->setText(ui->lineEditPassword_4->text());
}

void MainWindow::on_buttonCopyUserName_5_clicked()
{
    c->setText(ui->lineEditUserName_5->text());
}

void MainWindow::on_buttonCopyPassword_5_clicked()
{
    c->setText(ui->lineEditPassword_5->text());
}

void MainWindow::on_buttonCopyUserName_6_clicked()
{
    c->setText(ui->lineEditUserName_6->text());
}

void MainWindow::on_buttonCopyPassword_6_clicked()
{
    c->setText(ui->lineEditPassword_6->text());
}

void MainWindow::on_buttonSeeUserName_clicked()
{
    changeEchoMode(ui->lineEditUserName);
}

void MainWindow::on_buttonSeePassword_clicked()
{
    changeEchoMode(ui->lineEditPassword);
}

void MainWindow::on_buttonSeeUserName_2_clicked()
{
    changeEchoMode(ui->lineEditUserName_2);
}

void MainWindow::on_buttonSeePassword_2_clicked()
{
    changeEchoMode(ui->lineEditPassword_2);
}

void MainWindow::on_buttonSeeUserName_3_clicked()
{
    changeEchoMode(ui->lineEditUserName_3);
}

void MainWindow::on_buttonSeePassword_3_clicked()
{
    changeEchoMode(ui->lineEditPassword_3);
}

void MainWindow::on_buttonSeeUserName_4_clicked()
{
    changeEchoMode(ui->lineEditUserName_4);
}

void MainWindow::on_buttonSeePassword_4_clicked()
{
    changeEchoMode(ui->lineEditPassword_4);
}

void MainWindow::on_buttonSeeUserName_5_clicked()
{
    changeEchoMode(ui->lineEditUserName_5);
}

void MainWindow::on_buttonSeePassword_5_clicked()
{
    changeEchoMode(ui->lineEditPassword_5);
}

void MainWindow::on_buttonSeeUserName_6_clicked()
{
    changeEchoMode(ui->lineEditUserName_6);
}

void MainWindow::on_buttonSeePassword_6_clicked()
{
    changeEchoMode(ui->lineEditPassword_6);
}


void MainWindow::on_actionAjouter_triggered()
{
    AddRemoveForm *y = new AddRemoveForm(categoriesName, groupBoxNames, currentCategory, key);
    y->setWindowTitle("Add/Remove");
    y->show();
}


void MainWindow::on_actionRestart_triggered()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}


void MainWindow::on_action_propos_de_Qt_triggered()
{
    QMessageBox::aboutQt(this, "About Qt");
}


void MainWindow::on_action_propos_triggered()
{
    QMessageBox::about(this, "About", "This software was developed by Antoine NEBOUT with the open-source version of Qt 6.4.2.\nIt is an encrypted password manager.\nThis project is available on GitHub : ");
}

