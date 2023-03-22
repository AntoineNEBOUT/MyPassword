#ifndef ADDREMOVEDIALOG_H
#define ADDREMOVEDIALOG_H

#include <QDialog>

namespace Ui {
class AddRemoveDialog;
}

class AddRemoveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddRemoveDialog(QWidget *parent = nullptr);
    ~AddRemoveDialog();

private:
    Ui::AddRemoveDialog *ui;
};

#endif // ADDREMOVEDIALOG_H
