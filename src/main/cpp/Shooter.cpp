#include "Shooter.h"

Shooter::Shooter()
{
    
    compressor1 = new WPI_TalonSRX(1);
    compressor2 = new WPI_TalonSRX(11);

    firing_valve = frc::Solenoid(0,2);
}

void Shooter::Init()
{
    compressor1->Set(0);
    compressor2->Set(0);
}

void Shooter::Stop()
{
    firing_valve->Set(false);
}

void Shooter::Go()
{
    compressor1->Set(1);
    compressor2->Set(1);

    firing_valve->Set(false);
}

void Shooter::Shoot()
{
    firing_valve->Set(true);
}

void Shooter::StateMachine()
{
    switch(current_state)
    {
        case States::INIT:
            Init();
            break;
        case States::STOP:
            Stop();
            break;
        case States::GO:
            Go();
            break;
        case States::SHOOT:
            Go();
            break;
    }
}
