#pragma once

#include <frc/WPILib.h>
#include <ctre/Phoenix.h>

class DriveController {
public:


	WPI_TalonSRX *canTalonFrontLeft, *canTalonFrontRight, *canTalonBackLeft,
				*canTalonBackRight;

    double x_input;
    double y_input;

    const int CAN_TALON_FRONT_LEFT = 24;  
    const int CAN_TALON_BACK_LEFT = 21;
    const int CAN_TALON_FRONT_RIGHT = 27;
    const int CAN_TALON_BACK_RIGHT = 26;

	DriveController();
	void Drive(frc::Joystick *joyThrottle);

};