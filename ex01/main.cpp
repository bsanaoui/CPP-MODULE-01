#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(){

    // allocate zombie on heap
    Zombie *zombies = zombieHorde(10, "Retcher");
    for (int i = 0; i < 5; i++)
        zombies[i].announce();
    
    // Free zombies
    delete[] zombies;

}