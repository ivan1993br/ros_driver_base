#ifndef ROS_DRIVER_BASE_STATUS_HPP
#define ROS_DRIVER_BASE_STATUS_HPP

#include <ros/time.h>

namespace ros_driver_base {
    /** This structure holds IO statistics */
    struct Status
    {
        ros::Time stamp;

	unsigned int tx; //! count of bytes received
	unsigned int good_rx; //! count of bytes received and accepted
	unsigned int bad_rx; //! count of bytes received and rejected
        unsigned int queued_bytes; //! count of bytes currently queued in the driver's internal buffer

	Status()
	    : tx(0), good_rx(0), bad_rx(0), queued_bytes(0) {}
    };
}

#endif

