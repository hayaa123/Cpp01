#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void )
{
    std::cout << "A zombie has been created!" << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{
    std::cout << this->_name << " has been created!" << std::endl;
}

std::string Zombie::get_name( void )
{
    return (this->_name);
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie( void )
{
    std::cout << this->_name << " has been deleted!" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}