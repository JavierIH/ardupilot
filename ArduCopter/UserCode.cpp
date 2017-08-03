#include "Copter.h"

#ifdef USERHOOK_INIT
void Copter::userhook_init()
{
    //init
}
#endif

#ifdef USERHOOK_FASTLOOP
void Copter::userhook_FastLoop()
{
    // put your 100Hz code here
}
#endif

#ifdef USERHOOK_50HZLOOP
void Copter::userhook_50Hz()
{
    // put your 50Hz code here
}
#endif

#ifdef USERHOOK_MEDIUMLOOP
void Copter::userhook_MediumLoop()
{
    // put your 10Hz code here
}
#endif

#ifdef USERHOOK_SLOWLOOP
void Copter::userhook_SlowLoop()
{
    // put your 3.3Hz code here
}
#endif

#ifdef USERHOOK_SUPERSLOWLOOP
void Copter::userhook_SuperSlowLoop()
{
    //mavlink_javi_msg_t my_msg;
    mavlink_msg_javi_msg_send(MAVLINK_COMM_1, 12345);
    //gcs_send_text(MAV_SEVERITY_CRITICAL,"HOLA GCS");

}
#endif
