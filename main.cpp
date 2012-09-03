#include <QApplication>
#include "brkdpencere.h"

int main(int argc, char *argv[])
{
    qDebug() << "DENEMEEE";
    QApplication a(argc, argv);
    brkdpencere w;
    w.show();
    
    return a.exec();
}
