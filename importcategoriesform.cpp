#include "importcategoriesform.h"
#include "ui_importcategoriesform.h"

ImportCategoriesForm::ImportCategoriesForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImportCategoriesForm)
{
    ui->setupUi(this);
}

ImportCategoriesForm::~ImportCategoriesForm()
{
    delete ui;
}
