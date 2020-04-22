#include <iostream>
#include <limits>

int main()
{
	std::cout << "Hello World" << std::endl;

	std::cin.clear(); // resets any error flags
	// ignore any characters in the input buffer until we find a newline
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get(); // get one more char from the user

	std::cout << "end of file" << std::endl;

	// system("pause"); // only works on certain os

	return 0;
}