#ifndef __Weapon__
#define __Weapon__
#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    //************ Constructors & Destructors ***************//
    Weapon( std::string );
    Weapon();
    ~Weapon();
    //************ Getters & Setters ***************//
    std::string getType( void ) const;
    void    setType(std::string );
};

#endif