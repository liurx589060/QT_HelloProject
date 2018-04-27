#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    mainContentView = new MyMainContentView();
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
//    delete mainContentView;
}

void MainWindow::init()
{
    //初始化菜单栏
    initMenuBar();
    //初始化工具栏
    initToolBar();
    //初始化主视图
    initCentralView();
}

void MainWindow::initMenuBar()
{
    QMenu *fileMenu = new QMenu(tr("文件"));
    fileMenu->addAction(tr("新建"));
    fileMenu->addAction(tr("打开"));

    QMenu *editMenu = new QMenu(tr("编辑"));
    editMenu->addAction(tr("Undo"));
    editMenu->addAction(tr("Redo"));
    QMenu *advanceChildMenu = new QMenu(tr("Advance"));
    advanceChildMenu->addAction(tr("Cut Line"));
    advanceChildMenu->addAction(tr("Copy Line"));
    editMenu->addMenu(advanceChildMenu);

    ui->menuBar->addMenu(fileMenu);
    ui->menuBar->addMenu(editMenu);
}

void MainWindow::initToolBar()
{
    ui->mainToolBar->addAction(tr("第一页"));
    ui->mainToolBar->addAction(tr("第二页"));
}

void MainWindow::initCentralView()
{
    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(mainContentView.createMainWidget());
    ui->centralWidget->setLayout(layout);
}
