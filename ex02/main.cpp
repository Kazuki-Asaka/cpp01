#include <iostream>
#include <string>

void	changeValue(std::string& str)
{
	str = "newvalue";
}

int main() {
	std::string str;
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";
	std::cout << str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << "ref;" << &stringREF << std::endl;

	std::cout << "------------------------------------------" << std::endl;
	std::string str1;
	str1 = "hi";
	std::cout << str1 << std::endl;
	stringPTR = &str1;
	std::cout << stringPTR << std::endl;
	stringREF = str1;
	changeValue(str);
	std::cout << "ref;" << &stringREF << std::endl;
	std::cout << "refstr;" << stringREF << std::endl;
}