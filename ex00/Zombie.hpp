#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
public:
  Zombie(std::string name);
  ~Zombie();
  void  announce();
private:
  std::string name;
};

void    randomChamp(std::string name);
Zombie *newZombie(std::string name);

#endif