#pragma once
#include <ctre/Phoenix.h>
#include <frc/WPILib.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include <chrono>

class Shooter
{
private:
     WPI_TalonSRX *compressor1;
     WPI_TalonSRX *compressor2;

     frc::Solenoid *firing_valve;


public:

    enum States {
        INIT, STOP, GO,
        SHOOT
    };

    States current_state;
    States last_state;

    Shooter();
    void Init();
    void Stop();
    void Go();
    void Shoot();
    void ResetCounter();
    void StateMachine();

};