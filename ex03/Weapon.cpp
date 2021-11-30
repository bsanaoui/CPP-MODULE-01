#include "Weapon.hpp"

    //************ Constructors & Destructors ***************//

Weapon::Weapon(){}

Weapon::Weapon( std::string type){
    this->type = type;
}

Weapon::~Weapon(){}

    //************ Getters & Setters ***************//

std::string Weapon::getType( void ) const{
    return (this->type);
}

void    Weapon::setType(std::string type){
    this->type = type;
}

    //************ ************* ***************//