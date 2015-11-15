#include <stdio.h>

int main()
{
	/* only by replacing missing condition in if statement 
           marked by (...), bring output as "Hello world!" */ 
<<<<<<< HEAD
	if (printf("Hello ") == 0)
=======
<<<<<<< HEAD
	if (fork())
=======
	if (printf("Hello ") == 0)
>>>>>>> dc5d02aa216cc67225656798bb80c689fafed2de
>>>>>>> 57bd0b9f5caa02a040dc31191095794465793977
		printf("Hello ");
	else
		printf("world!\n");

	return 0;
}
