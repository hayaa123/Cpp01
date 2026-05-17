#ifndef HARL_HPP
# define HARL_HPP

#include <string>

enum lvl{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    NONE
};

class Harl
{
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
    private:
        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );
};

#endif