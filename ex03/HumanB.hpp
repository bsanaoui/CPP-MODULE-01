#ifndef __HumanB__
#define __HumanB__

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *_weapon;
    std::string _name;
public:
    //************ Constructors & Destructors ***************//

    HumanB( std::string );
    ~HumanB();

    //************ Getters & Setters ***************//

    std::string getName( void ) const;
    void    setName(std::string);
    Weapon *getWeapon( void ) const;
    void    setWeapon(Weapon &);

     //************ Member Funcitons ***************//
     
     void   attack( void );
};

#endif