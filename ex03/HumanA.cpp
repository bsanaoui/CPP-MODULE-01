#include "HumanA.hpp"

    //************ Constructors & Destructors ***************//

HumanA::HumanA( std::string name, Weapon &weapon) : _weapon(weapon) {
    this->_name = name;
}

HumanA::~HumanA(){}

    //************ Getters & Setters ***************//

std::string HumanA::getName( void ) const{
    return (this->_name);
}

void    HumanA::setName(std::string name){
    this->_name = name;
}

Weapon HumanA::getWeapon( void ) const{
    return (this->_weapon);
}

void    HumanA::setWeapon(Weapon weapon){
    this->_weapon = weapon;
}
    //-------------- Member Funcitons ----------------//

void   HumanA::attack( void ){
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}