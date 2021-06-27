#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QClipboard>
#include <QtDebug>
#include "aboutdialog.h"

class QTextCharFormat;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionExit_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionBold_toggled(bool arg1);

    void on_textEdit_selectionChanged();

    void on_actionItalic_toggled(bool arg1);

    void on_actionUnderline_toggled(bool arg1);

    void on_actionSubscript_toggled(bool arg1);

    void on_actionSuperscript_toggled(bool arg1);

    void on_textEdit_cursorPositionChanged();

    void on_actionAbout_triggered();

private:

    void mergeFormatOnWordOrSelection(const QTextCharFormat &format);

    Ui::MainWindow *ui;
    AboutDialog *aboutDialog;
    QString currentFile = "";
    QString selectedText;
};

#endif // MAINWINDOW_H
