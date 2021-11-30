#include "Zombie.hpp"

//******************  Constructors and destructors************//

Zombie::Zombie( void ){}

Zombie::Zombie( std::string name ){
    this->name = name;
}

Zombie::~Zombie( void ){
    std::cout << "<" << this->name << ">" << " is dead !!!" << std::endl;
}

//******************  Getter and Setter ************//

std::string Zombie::getName( void ){
    return (this->name);
}

void    Zombie::setName( std::string name){
    this->name = name;
}

//******************  Methods  *********************//

void    Zombie::announce( void ){
    std::cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

