#include "Zombie.hpp"

int main() {
    Zombie *zombie_group;
    Zombie *zombie_group1;

    zombie_group = zombieHorde(5, "akazuki");
    zombie_group1 = zombieHorde(0, "akazuki");

    delete[] zombie_group;
}