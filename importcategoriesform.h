#ifndef IMPORTCATEGORIESFORM_H
#define IMPORTCATEGORIESFORM_H

#include <QDialog>

namespace Ui {
class ImportCategoriesForm;
}

class ImportCategoriesForm : public QDialog
{
    Q_OBJECT

public:
    explicit ImportCategoriesForm(QWidget *parent = nullptr);
    ~ImportCategoriesForm();

private:
    Ui::ImportCategoriesForm *ui;
};

#endif // IMPORTCATEGORIESFORM_H
