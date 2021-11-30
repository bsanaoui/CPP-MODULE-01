#ifndef __KAREN__
#define __KAREN__
#include <iostream>

class Karen{

    private:
    // ------------------ Private Member Functions ------------------- //
    
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );

    // ------------------ Public Member Function ------------------- //

    public:
    void    complain( std::string level );

};

enum level_enum {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    NON_OF_THEM
};

#endif