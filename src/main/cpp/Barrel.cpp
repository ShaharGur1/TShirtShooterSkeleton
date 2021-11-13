#include "Barrel.h"
#include <frc/smartdashboard/SmartDashboard.h>

Barrel::Barrel(){
    elevation_talon = new WPI_TalonSRX(0);
}

void Barrel::Init(){
    elevation_talon->Set(0.0);
}

void Barrel::Down(){
    elevation_talon->Set(-0.4);
}

void Barrel::Up(){
    elevation_talon->Set(0.4);
}

void Barrel::Stop(){
    elevation_talon->Set(0.1);
}

void Barrel::Slow(){
    elevation_talon->Set(0.2);
}

void Barrel::StateMachine(){
    switch (current_state)
    {
    case states::INIT:
        Init();
    break;

    case states::Down:
        Down();
    break;

    case states::Up:
        Up();
    break;

    case states::Stop:
        Stop();
    break;

    case states::Slow:
        Slow();
    break;
    }
}