#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_actioninfo_triggered();

    void on_actionNew_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionRedo_triggered();

    void on_actionUndo_triggered();

    void on_actionconsistansy_triggered();

    void on_actionminify_triggered();

    void on_actionJson_triggered();

    void on_actionPretiffy_triggered();

    void on_actionhighleight_triggered();

    void on_actioncompress_triggered();

    void on_actiondecompress_triggered();

    void on_actionFix_Xml_triggered();

    void on_actionGraph_triggered();

private:
    Ui::MainWindow *ui;
     QString fpath = "";
};
#endif // MAINWINDOW_H
