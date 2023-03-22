#include "addremovedialog.h"
#include "ui_addremovedialog.h"

AddRemoveDialog::AddRemoveDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddRemoveDialog)
{
    ui->setupUi(this);
}

AddRemoveDialog::~AddRemoveDialog()
{
    delete ui;
}
