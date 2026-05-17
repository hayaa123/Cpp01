#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
    public:
        Zombie( void );
        Zombie( std::string name );
        ~Zombie( void );
        std::string get_name( void ) const;
        void set_name( std::string name );
        void announce( void );
    private:
        std::string _name;
};

#endif