#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <QMainWindow>

namespace Ui {
class userinterface;
}

class userinterface : public QMainWindow
{
    Q_OBJECT

public:
    explicit userinterface(QWidget *parent = nullptr);
    ~userinterface();

private:
    Ui::userinterface *ui;
};

#endif // USERINTERFACE_H
