#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	Weapon	club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setTtpe("some other type of club");
	bob.attack();
}