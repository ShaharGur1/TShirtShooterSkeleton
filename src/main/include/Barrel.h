#pragma once
#include <ctre/Phoenix.h>
#include <frc/Joystick.h>

class Barrel{
    private:
        WPI_TalonSRX *elevation_talon;
    public:
        enum States{
            INIT, DOWN, UP,
            STOP, SLOW
        };
    States current_state;

    Barrel();
        void Init();
        void Down();
        void Up(); 
        void Stop();
        void Slow();

}