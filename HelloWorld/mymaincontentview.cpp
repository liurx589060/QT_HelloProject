#include "mymaincontentview.h"
#include <QDebug>

MyMainContentView::MyMainContentView():IMainPluginMg()
{
    init();
}

void MyMainContentView::init()
{
    qDebug()<<"MyMainContentView init";
    setCallback(this);
}

QWidget* MyMainContentView::createMainWidget(QWidget *parent)
{
    QWidget *widget = new QWidget();
    widget->setFixedSize(200,400);
    widget->setStyleSheet("background-color: rgb(85, 255, 0);");
    if(callback != NULL) {
        callback->onWidgetCreated(true);
    }
    return widget;
}

QToolBar* MyMainContentView::createToolBar(QWidget *parent)
{
    QToolBar *toolbar = new QToolBar();
    toolbar->addAction("移动");
    toolbar->addAction("旋转");
    if(callback != NULL) {
        callback->onToolBarCreated(true);
    }
    return toolbar;
}

void MyMainContentView::onWidgetCreated(bool flag)
{
    qDebug()<<"onWidgetCreated=" + flag;
}

void MyMainContentView::onToolBarCreated(bool flag)
{
    qDebug()<<"onToolBarCreated=" + flag;
}
