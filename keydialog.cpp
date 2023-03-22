#include "keydialog.h"
#include "ui_keydialog.h"

KeyDialog::KeyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KeyDialog)
{
    ui->setupUi(this);
    int i;
    for(i = 0 ; i < 10 ; i++)
        num.append(QString::number(i));

    ui->buttonBox->setEnabled(false);
}

KeyDialog::~KeyDialog()
{
    delete ui;
}

void KeyDialog::on_lineEdit_textChanged(const QString &arg1)
{
    bool withoutNum = true;
    int i;
    for(i = 0 ; i < arg1.length() ; i++)
        if(!num.contains(arg1[i]))
            withoutNum = false;

    if(withoutNum && arg1 != "")
    {
        keyToShare = arg1;
        ui->buttonBox->setEnabled(true);
    }
    else
        ui->buttonBox->setEnabled(false);
}

