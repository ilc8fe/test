#include "beginner_tutorials/gui_service_test.h"
#include "ui_gui_service_test.h"
#include "beginner_tutorials/AddTwoInts.h"
#include <QtGui>
#include <QtCore>

#include <QWidget>

#include <QMainWindow>

#include "ros/ros.h"

#include "std_msgs/String.h"

#include<sstream>
#include <cstdlib>
#include <QMessageBox>

gui_service_test::gui_service_test(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gui_service_test)
{
    ui->setupUi(this);

    //disable
    enable =false;
}

gui_service_test::~gui_service_test()
{
    delete ui;
}

void gui_service_test::on_pushButton_clicked()
{

    // enable
    enable=true;

    ros::init(argc, argv, "add_two_ints_client");
    ros::NodeHandle n;
    ros::ServiceClient client = n.serviceClient<beginner_tutorials::AddTwoInts>("add_two_ints");
    beginner_tutorials::AddTwoInts srv;
    srv.request.a = 1;
    //srv.request.b = 1;
    if (client.call(srv))
    {
      ROS_INFO("Sum: %ld", (long int)srv.response.sum);
    }
    else
    {
      ROS_ERROR("Failed to call service add_two_ints");

    }

}

void gui_service_test::on_pushButton_2_clicked()
{
    //disable
    enable =false;

    ros::init(argc, argv, "add_two_ints_client");

    ros::NodeHandle n;
    ros::ServiceClient client = n.serviceClient<beginner_tutorials::AddTwoInts>("add_two_ints");
    beginner_tutorials::AddTwoInts srv;
    srv.request.a = 0;
    //srv.request.b = 2;
    if (client.call(srv))
    {
      ROS_INFO("Sum: %ld", (long int)srv.response.sum);
    }
    else
    {
      ROS_ERROR("Failed to call service add_two_ints");

    }

}

