#ifndef IMAINPLUGINMG_H
#define IMAINPLUGINMG_H

#include "ipluginmg.h"
#include <QWidget>
#include <QToolBar>

namespace GYCALLBACK {
class IMainCallback
{
public:
    IMainCallback() {}
    ~IMainCallback() {}

    virtual void onWidgetCreated(bool flag) = 0;
    virtual void onToolBarCreated(bool flag) = 0;
};
}

using namespace GYPLUGIN;
using namespace GYCALLBACK;
namespace GYPLUGIN {
class IMainPluginMg:public IPluginMg<IMainCallback>
{
public:
    IMainPluginMg():IPluginMg() {}
    ~IMainPluginMg() {}

    virtual QWidget* createMainWidget(QWidget* parent=0) = 0;
    virtual QToolBar* createToolBar(QWidget* parent=0) = 0;
};
}

#endif // IMAINPLUGINMG_H
