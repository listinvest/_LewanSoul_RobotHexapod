#ifndef DEF_CMDSERVO
#define DEF_CMDSERVO

#include <iostream>
#include "communication.hpp"
#include "board.hpp"

class Servo {

public:

    Servo(int id);
    int READ_id();
    void WRITE_Servo_Angle(float angle, float time);
    void WRITE_Servo_Move_Time_Wait(float angle, float timeWait);
    void WRITE_Servo_Move_Start();
    void WRITE_Servo_OFFSET_ADJUST(float angle);
    int READ_Servo_Angle();

private:

    int a_id;
};

#endif