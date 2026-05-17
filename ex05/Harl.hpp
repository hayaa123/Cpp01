#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
    private:
        std::string _levels[4];
        void (Harl::*_functions[4])(void);
        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );
};

#endif