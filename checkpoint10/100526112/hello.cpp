#include <iostream>

int main()
{
        // only by replacing missing condition in if statement
        // marked by (...), bring output as "Hello world!"
	if (!(std::cout << "Hello "))
		std::cout << "Hello ";
	else
		std::cout << "world!\n";
}
