#include <iostream>
#include <unistd.h>

int main()
{
        // only by replacing missing condition in if statement
        // marked by (...), bring output as "Hello world!"
	if (fork())
		std::cout << "Hello ";
	else
		std::cout << "world!\n";
}
