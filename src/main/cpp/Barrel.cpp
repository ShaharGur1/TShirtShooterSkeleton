#include "Barrel.h"

Barrel::Barrel() {
    m_barrel_talon = new WPI_TalonSRX(28);

}

void Barrel::Init() { }

void Barrel::Up() {
    m_barrel_talon->Set(ControlMode::PercentOutput, -0.4);
}

void Barrel::Down() {
    m_barrel_talon->Set(ControlMode::PercentOutput, 0.2);
}

void Barrel::Stop() {
    m_barrel_talon->Set(ControlMode::PercentOutput, 0);
}

void Barrel::StateMachine() {
    switch (current_state)
    {
    case States::INIT:
        Init();
        break;
    
    case States::UP:
        Up();
        break;

    case States::DOWN:
        Down();
        break;
    
    case States::STOP:
        Stop();
        break;
    
    }
}