#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name)
{
    this->_name = name;
    this->_weapon = NULL;
}
HumanB::~HumanB()
{
}

void HumanB::setWeapon(const Weapon& weapon)
{
    this->_weapon = &weapon;
}
void HumanB::attack()
{
    if(this->_weapon)
    {
        std::cout 
        << this->_name 
        << " attacks with their " 
        << this->_weapon->getType() 
        << std::endl;
    }
    else 
    {
        std::cout 
        << this->_name
        << "does not have a weapon"
        << std::endl;
    }
}
