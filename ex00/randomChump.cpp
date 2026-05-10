#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie zombie1 = Zombie(name);
    zombie1.announce();
}