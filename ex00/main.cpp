
#include "Zombie.hpp"
Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
    Zombie *zombie1 = new Zombie("hal1");
    delete zombie1;

    randomChump("hal2");
    return(0);
}