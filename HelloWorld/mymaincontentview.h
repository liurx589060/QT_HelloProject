#ifndef MYMAINCONTENTVIEW_H
#define MYMAINCONTENTVIEW_H

#include "imainpluginmg.h"

using namespace GYPLUGIN;
using namespace GYCALLBACK;
class MyMainContentView:public IMainPluginMg,IMainCallback
{
public:
    MyMainContentView();
    ~MyMainContentView(){}

public://IMainPluginMg
    QWidget* createMainWidget(QWidget* parent=0);
    QToolBar* createToolBar(QWidget* parent=0);

public://IMainCallback
    void onWidgetCreated(bool flag);
    void onToolBarCreated(bool flag);

private:
    void init();

};

#endif // MYMAINCONTENTVIEW_H
