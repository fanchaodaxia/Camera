// C++ include files
//#include <iostream>
//#include <stdint.h>
// Qt include files
#include "wlcamera.h"
#include <QApplication>
#include <QDebug>
// Basler camera include files
#include "../Samples/C++/include/SampleImageCreator.h"
#include <conio.h>
#include <pylon/PylonGUI.h>
#include <pylon/PylonIncludes.h>
#include <pylon/usb/BaslerUsbInstantCamera.h>


using namespace Pylon;
using namespace std;
// Number of images to be grabbed.
static const uint32_t c_countOfImagesToGrab = 1;

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    WLCamera w;
    w.show();

    // Before using any pylon methods, the pylon runtime must be initialized.
    PylonInitialize();

    CBaslerUsbInstantCamera camera(CTlFactory::GetInstance().CreateFirstDevice());

    // print the model name of the camera
    qDebug() << "using device: " << camera.GetDeviceInfo().GetModelName() << endl;

    // Start the grabbing of c_countOfImagesToGrab images.
    // The camera device is parameterized with a default configuration which
    // sets up free-running continuous acquisition.
    camera.StartGrabbing(c_countOfImagesToGrab, GrabStrategy_LatestImageOnly); // start grab the specified number of images
    // This smart pointer will receive the grab result data.
    CGrabResultPtr ptrGrabResult;
    CPylonImageWindow imageWindow;

    while (camera.IsGrabbing())
    {
        //wait for an iamge and then retrive it, a timeout of 5000ms is used
        camera.RetrieveResult(5000, ptrGrabResult, TimeoutHandling_ThrowException);
        if (ptrGrabResult->GrabSucceeded())
        {

            qDebug() << "Grab OK!" <<endl;
            CPylonImage image;
            image.AttachGrabResultBuffer(ptrGrabResult); // attach grab result to a pylon image
            //compute the iamge size
            uint32_t imageWidth = image.GetWidth();
            uint32_t imageHeight = image.GetHeight();
            // creat the window and display the image
            bool windowCreated = false;

            if (!imageWindow.IsValid())
            {
                imageWindow.Create(1, 400, 400, imageWidth, imageHeight);
                imageWindow.SetImage(image);
                //imageWindow.Show();
                qDebug() << "image window is shown" << endl;
            }
            windowCreated = true;


        }
    }

    while(1)
    {

       // keep display the image
        imageWindow.Show();

    }




    // Releases all pylon resources.
    PylonTerminate();

    return a.exec();
}
