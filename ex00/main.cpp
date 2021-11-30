#include "Zombie.hpp"

Zombie* newZombie( std::string );
void randomChump( std::string );

int main(){

    // allocate zombie on stack
    Zombie  zombie1("Hurler");
    zombie1.announce();

    randomChump("Bambino") ;

    // allocate zombies on heap
     Zombie *zombie3 = newZombie("Chum");
     zombie3->announce();
     delete zombie3;
}