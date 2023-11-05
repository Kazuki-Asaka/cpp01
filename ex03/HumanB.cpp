#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this -> name = name;
	weapon = NULL;
}

HumanB::~HumanB() {

}

void HumanB::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon s_weapon) {
	this -> weapon = &s_weapon;
}