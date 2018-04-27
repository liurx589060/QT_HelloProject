#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mymaincontentview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void init();
    void initMenuBar();
    void initToolBar();
    void initCentralView();

private:
    Ui::MainWindow *ui;
    MyMainContentView mainContentView;
};

#endif // MAINWINDOW_H
