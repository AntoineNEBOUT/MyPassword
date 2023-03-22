#ifndef KEYDIALOG_H
#define KEYDIALOG_H

#include <QDialog>
#include <QList>

namespace Ui {
class KeyDialog;
}

class KeyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit KeyDialog(QWidget *parent = nullptr);
    ~KeyDialog();
    QString keyToShare;

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::KeyDialog *ui;
    QList<QString> num;
};

#endif // KEYDIALOG_H
