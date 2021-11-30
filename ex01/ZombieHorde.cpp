#include "Zombie.hpp"
#include <cstdlib>

// std::string getRandomName(){
//     std::string names[10] = {"Fleshy", "Hefty", "Hurler", "Mute", "Chum", "Gaunt",
//                             "Bambino", "Curious", "Partial", "Retcher"};
//     return (names[(rand() % 9)]);
// }

Zombie* zombieHorde( int N, std::string name ){
    Zombie  *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return (zombies);
}
