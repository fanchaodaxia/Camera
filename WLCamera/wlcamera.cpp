#include "wlcamera.h"
#include "ui_wlcamera.h"

WLCamera::WLCamera(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WLCamera)
{
    ui->setupUi(this);
}

WLCamera::~WLCamera()
{
    delete ui;
}
