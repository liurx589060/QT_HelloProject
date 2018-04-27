#ifndef IPLUGINMG_H
#define IPLUGINMG_H

namespace GYPLUGIN {
template<typename T>
class IPluginMg
{
public:
    IPluginMg() {}
    virtual ~IPluginMg(){}

protected:
    void setCallback(T *ICallback)
    {
        callback = ICallback;
    }

protected:
    T *callback;

};
}

#endif // IPLUGINMG_H
