#ifndef WLCAMERA_H
#define WLCAMERA_H

#include <QMainWindow>

namespace Ui {
class WLCamera;
}

class WLCamera : public QMainWindow
{
    Q_OBJECT

public:
    explicit WLCamera(QWidget *parent = 0);
    ~WLCamera();

private:
    Ui::WLCamera *ui;
};

#endif // WLCAMERA_H
