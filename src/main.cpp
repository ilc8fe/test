#include "beginner_tutorials/gui_service_test.h"
#include <QApplication>
#include <QtGui>
#include <QtCore>
#include "beginner_tutorials/AddTwoInts.h"

#include <QWidget>

#include <QMainWindow>

#include "ros/ros.h"
#include "beginner_tutorials/AddTwoInts.h"
#include <cstdlib>


#include "std_msgs/String.h"

#include<sstream>

int main(int argc, char *argv[])
{
  // ros::init(argc, argv, "Enable or disable");

   //ros::NodeHandle n;
   //ros::ServiceClient client = n.serviceClient<beginner_tutorials::AddTwoInts>("add_two_ints");
   //beginner_tutorials::AddTwoInts srv;

    QApplication a(argc, argv);
    gui_service_test w;
    w.show();


    return a.exec();


       //ros::NodeHandle n;
       //ros::ServiceClient client = n.serviceClient<beginner_tutorials::AddTwoInts>("add_two_ints");
       //beginner_tutorials::AddTwoInts srv;

}
