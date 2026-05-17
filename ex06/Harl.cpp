#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
    this->_levels[0] = "DEBUG";
    this->_levels[1] = "INFO";
    this->_levels[2] = "WARNING";
    this->_levels[3] = "ERROR";

    this->_functions[0] = &Harl::_debug;
    this->_functions[1] = &Harl::_info;
    this->_functions[2] = &Harl::_warning;
    this->_functions[3] = &Harl::_error;
}

Harl::~Harl()
{
}
void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        if(level == this->_levels[i])
        {
            while(i < 4)
            {
                (this->*(_functions[i]))();
                i++;
            }
            return;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

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
    << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger!" 
    << " If you did, I wouldn’t be asking for more!"
    << std::endl;
}

void Harl::_warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout 
    << "I think I deserve to have some extra bacon for free."
    <<" I’ve been coming for years"
    <<", whereas you started working here just last month."
    << std::endl;
}

void Harl::_error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}