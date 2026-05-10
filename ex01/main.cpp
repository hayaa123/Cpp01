#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name );

int main()
{
    int n = 3;
    Zombie *z =  zombieHorde(n, "zombie~_~");

    for (int i = 0; i < n; i++)
    {
        z->announce();
    }
    delete[] z; 
}