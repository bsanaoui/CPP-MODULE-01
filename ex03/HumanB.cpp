#include "HumanB.hpp"

    //************ Constructors & Destructors ***************//

HumanB::HumanB( std::string name){
    this->_name = name;
}

HumanB::~HumanB(){}

    //************ Getters & Setters ***************//

std::string HumanB::getName( void ) const{
    return (this->_name);
}

void    HumanB::setName(std::string name){
    this->_name = name;
}

Weapon *HumanB::getWeapon( void ) const{
    return (this->_weapon);
}

void    HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
}
    //-------------- Member Funcitons ----------------//

void   HumanB::attack( void ){
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}