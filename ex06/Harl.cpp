#include "Harl.hpp"
#include <iostream>

static lvl get_level(const std::string& level)
{
    if(level == "DEBUG")
        return DEBUG;
    else if(level == "INFO")
        return INFO;
    else if (level == "WARNING")
        return WARNING;
    else if (level == "ERROR")
        return ERROR;
    return NONE;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
    lvl l = get_level(level);
    switch (l)
    {
        case DEBUG:
            this->_debug();
             std::cout << std::endl;
            // fall through
        case INFO:
            this->_info();
            std::cout << std::endl;
            // fall through
        case WARNING:
            this->_warning();
            std::cout << std::endl;
            // fall through
        case ERROR:
            this->_error();
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}

void Harl::_debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::_info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout 
    << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" 
    << " If you did, I wouldn’t be asking for more!"
    << std::endl;
}

void Harl::_warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout 
    << "I think I deserve to have some extra bacon for free."
    << std::endl
    <<"I’ve been coming for years"
    <<", whereas you started working here just last month."
    << std::endl;
}

void Harl::_error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}