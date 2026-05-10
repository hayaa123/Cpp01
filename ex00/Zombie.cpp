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

Zombie::~Zombie( void )
{
    std::cout << this->_name << " has been deleted!" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}