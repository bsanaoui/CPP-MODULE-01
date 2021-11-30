#ifndef __HumanA__
#define __HumanA__

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon &_weapon;
    std::string _name;
public:
    //************ Constructors & Destructors ***************//

    HumanA( std::string , Weapon &weapon);
    ~HumanA();

    //************ Getters & Setters ***************//

    std::string getName( void ) const;
    void    setName(std::string);
    Weapon getWeapon( void ) const;
    void    setWeapon(Weapon);

     //************ Member Funcitons ***************//
     
     void   attack( void );
};

#endif