#pragma once

#include <ctre/Phoenix.h>

class Barrel {
    public:

    Barrel();

    void StateMachine();

    enum States {
        INIT, UP, DOWN,
        STOP
    };

    States current_state;

    private:

    WPI_TalonSRX *m_barrel_talon;

    void Init();
    void Up();
    void Down();
    void Stop();

};