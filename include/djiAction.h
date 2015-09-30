#ifndef DJI_SDK_DJI_ACTIONS_H
#define DJI_SDK_DJI_ACTIONS_H

#include <ros/ros.h>
#include "SDK.h"
#include "djiVariable.h"
#include <actionlib/server/simple_action_server.h>

typedef actionlib::SimpleActionServer<dji_ros::taskAction> task_action_type;
typedef actionlib::SimpleActionServer<dji_ros::local_navigationAction> local_navigation_action_type;
typedef actionlib::SimpleActionServer<dji_ros::gps_navigationAction> gps_navigation_action_type;
typedef actionlib::SimpleActionServer<dji_ros::waypoint_navigationAction> waypoint_navigation_action_type;

namespace action_handler
{

		/*

	what the hell happened in the coding style!
	
	I followed the documents and it says the file name should be in `under scored` style, 
	then all the action files should be xxx_xxx.action,
	However, the action file name is the same as its corresponding action type name, 
	then it should be `camel cased`
	
	Therefore, we have a mixed coding style here.
		
	such stupid!

	*/
	extern task_action_type* task_action_ptr;
	extern local_navigation_action_type* local_navigation_action_ptr;
	extern gps_navigation_action_type* gps_navigation_action_ptr;
	extern waypoint_navigation_action_type* waypoint_navigation_action_ptr;

	int init_actions(ros::NodeHandle & n);
}
#endif