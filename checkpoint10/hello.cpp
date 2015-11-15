#include <iostream>
#include <unistd.h>

int main()
{
        // only by replacing missing condition in if statement
        // marked by (...), bring output as "Hello world!"
<<<<<<< HEAD
	if (!(std::cout << "Hello "))
		std::cout << "Hello";
=======
	if (!(std::cout<<"Hello "))
		std::cout << "Hello ";
>>>>>>> 8d3ef5ee1a34b0f43114de202e30f27ce8e385d3
	else
		std::cout << "world!\n";

}
