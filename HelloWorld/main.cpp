#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QPixmap>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("荡水");

    QPixmap pixmap(":Resource/image/splash.jpg");
    QSplashScreen *splash = new QSplashScreen(pixmap);
    splash->show();

    MainWindow w;
    w.showMaximized();
    w.show();

    int ret = a.exec();
    delete splash;
    return ret;
}
