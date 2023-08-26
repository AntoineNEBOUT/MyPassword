#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGuiApplication>
#include <QLineEdit>
#include <QList>
#include <QAction>
#include <QGroupBox>
#include "chiffrage.h"
#include "fileclass.h"
#include "keydialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void restart();

private slots:
    void on_buttonCopyUserName_clicked();

    void on_buttonSeeUserName_clicked();

    void on_buttonCopyPassword_clicked();

    void on_buttonCopyUserName_2_clicked();

    void on_buttonCopyPassword_2_clicked();

    void on_buttonCopyUserName_3_clicked();

    void on_buttonCopyPassword_3_clicked();

    void on_buttonCopyUserName_4_clicked();

    void on_buttonCopyPassword_4_clicked();

    void on_buttonCopyUserName_5_clicked();

    void on_buttonCopyPassword_5_clicked();

    void on_buttonCopyUserName_6_clicked();

    void on_buttonCopyPassword_6_clicked();

    void on_buttonSeePassword_clicked();

    void on_buttonSeeUserName_2_clicked();

    void on_buttonSeePassword_2_clicked();

    void on_buttonSeeUserName_3_clicked();

    void on_buttonSeePassword_3_clicked();

    void on_buttonSeeUserName_4_clicked();

    void on_buttonSeePassword_4_clicked();

    void on_buttonSeeUserName_5_clicked();

    void on_buttonSeePassword_5_clicked();

    void on_buttonSeeUserName_6_clicked();

    void on_buttonSeePassword_6_clicked();

    void on_categoriesNameComboBox_currentTextChanged(const QString &arg1);

    void on_actionAjouter_triggered();
    void on_actionRestart_triggered();

    void on_action_propos_de_Qt_triggered();

    void on_action_propos_triggered();
    void launch();
    void setKey();
    void cancelKey();

    void on_actionQuit_triggered();

    void on_actionExport_triggered();

    void on_actionImport_triggered();

private:
    Ui::MainWindow *ui;
    QClipboard *c = QGuiApplication::clipboard();
    void changeEchoMode(QLineEdit *qLineEdit);
    void refresh();
    FileClass *fc;
    void changeCategory();
    void prepareGroupBox(int groupBoxNameIndex, int userNameIndex, int passwordIndex, QGroupBox &groupBox, QLineEdit &userNameLineEdit, QLineEdit &passwordLineEdit);
    Chiffrage *d;
    KeyDialog *y;

    QList<QString> content;
    QList<QString> contentToFill;
    QList<QString> categoriesName;
    QList<QString> categoriesIcon;
    QList<QString> groupBoxNames;
    QString currentCategory;
    QString key;
};
#endif // MAINWINDOW_H
