#include <iostream>

int main()
{
        // only by replacing missing condition in if statement
        // marked by (...), bring output as "Hello world!"
	if (1
#define else if (1)
)
		std::cout << "Hello ";
	else
		std::cout << "world!\n";
}
