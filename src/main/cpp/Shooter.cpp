#include "Shooter.h"

Shooter::Shooter()
{
    m_compressor1 = new WPI_TalonSRX(1);
    m_compressor2 = new WPI_TalonSRX(11);
    m_firing_valve = new frc::Solenoid(0, 2); // Solenoid
}

void Shooter::Init()
{
    m_compressor1->Set(0.0);
    m_compressor2->Set(0.0);

}

void Shooter::Stop()
{
    m_compressor1->Set(0.0);
    m_compressor2->Set(0.0);    
    m_firing_valve->Set(false);
}

void Shooter::Go()
{
    m_compressor1->Set(0.0);
    m_compressor2->Set(0.0);
    m_firing_valve->Set(false);
}

void Shooter::Shoot()
{
    m_firing_valve->Set(true);
}

void Shooter::ResetCounter()
{
    
}

void Shooter::StateMachine()
{

}