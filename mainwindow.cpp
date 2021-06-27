#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
}

void MainWindow::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(filename);
    currentFile = filename;
    if(!file.open(QIODevice::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot open file :" + file.errorString());
        return;
    }
    setWindowTitle(filename);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void MainWindow::on_actionSave_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "Save as");
    QFile file(filename);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot save file :" + file.errorString());
        return;
    }
    currentFile = filename;
    setWindowTitle(filename);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionBold_toggled(bool bSelectState)
{
    QTextCharFormat format;
    if (!bSelectState) {
        format.setFontWeight(QFont::Normal);
        ui->textEdit->textCursor().mergeCharFormat(format);
    }else {
        format.setFontWeight(QFont::Bold);
        ui->textEdit->textCursor().mergeCharFormat(format);
    }
}

void MainWindow::on_textEdit_selectionChanged()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionItalic_toggled(bool bSelectState)
{
    QTextCharFormat format;
    if (!bSelectState) {
        format.setFontItalic(QFont::StyleNormal);
        ui->textEdit->textCursor().mergeCharFormat(format);
    }else {
        format.setFontItalic(QFont::StyleItalic);
        ui->textEdit->textCursor().mergeCharFormat(format);
    }
}

void MainWindow::on_actionUnderline_toggled(bool bSelectState)
{
    QTextCharFormat format;
    if (!bSelectState) {
        format.setFontUnderline(QFont::StyleNormal);
        ui->textEdit->textCursor().mergeCharFormat(format);
    }else {
        format.setFontUnderline(QFont::UnderlineResolved);
        ui->textEdit->textCursor().mergeCharFormat(format);
    }
}

void MainWindow::on_actionSubscript_toggled(bool arg1)
{
    QTextCharFormat format;
    if(!arg1){
        format.setVerticalAlignment(QTextCharFormat::AlignNormal);
    }else {
        format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
    }
    if(ui->textEdit->hasFocus())
       ui->textEdit->mergeCurrentCharFormat(format);
}

void MainWindow::on_actionSuperscript_toggled(bool arg1)
{
    QTextCharFormat format;
    if(!arg1){
        format.setVerticalAlignment(QTextCharFormat::AlignNormal);
    }else {
        format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    }
    if(ui->textEdit->hasFocus())
       ui->textEdit->mergeCurrentCharFormat(format);
}

void MainWindow::on_textEdit_cursorPositionChanged()
{

}

void MainWindow::on_actionAbout_triggered()
{
   aboutDialog = new AboutDialog(this);
   aboutDialog->show();
}
