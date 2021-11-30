#ifndef _ZOMBIE_
#define _ZOMBIE_

#include <iostream>

class Zombie{
    private:
    std::string name;

    public:
    // Constructors and destructors
    Zombie ( std:: string );
    ~Zombie ( void );

    // Getters & Setters
    std::string getName( void );
    void        setName ( std::string );
    
    // Member Functions
    void announce( void );

    // Static Finctions


};

#endif