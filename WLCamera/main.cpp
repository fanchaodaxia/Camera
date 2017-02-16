// Qt include files
#include "wlcamera.h"
#include <QApplication>

// Basler camera include files

#include <pylon/PylonIncludes.h>
using namespace Pylon;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WLCamera w;
    w.show();
    Pylon::PylonAutoInitTerm autoInitTerm;  // PylonInitialize() will be called now


    return a.exec();
}
