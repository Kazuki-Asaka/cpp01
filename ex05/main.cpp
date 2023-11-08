#include "Harl.hpp"

int main() {
	Harl harl;

	// harl.complain("error");
	harl.complain("debug");
	std::cout << "---------------------------" << std::endl;
	harl.complain("info");
	std::cout << "---------------------------" << std::endl;
	harl.complain("warning");
	std::cout << "---------------------------" << std::endl;
	harl.complain("error");
	std::cout << "---------------------------" << std::endl;
}