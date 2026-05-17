#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name)
{
    this->_name = name;
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
    std::cout << this->_name << " attacks with their " << (*(this->_weapon)).getType() << std::endl;
}