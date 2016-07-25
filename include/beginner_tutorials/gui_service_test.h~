#ifndef GUI_SERVICE_TEST_H
#define GUI_SERVICE_TEST_H

#include <QWidget>

#include <ros/ros.h>

namespace Ui {
class gui_service_test;
}

class gui_service_test : public QWidget
{
    Q_OBJECT

public:
    explicit gui_service_test(QWidget *parent = 0);
    ~gui_service_test();

//bool add(beginner_tutorials::AddTwoInts::Request  &req,
   //      beginner_tutorials::AddTwoInts::Response &res)

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::gui_service_test *ui;
    bool enable;
    int argc;
    char *argv[];
};

#endif // GUI_SERVICE_TEST_H
