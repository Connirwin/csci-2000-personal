#include <stdio.h>

int main()
{
	/* only by replacing missing condition in if statement 
           marked by (...), bring output as "Hello world!" */ 
<<<<<<< HEAD:checkpoint9/hello.c
	if (!printf("Hello") == 0)
=======
	if (fork())
>>>>>>> df6885ab045474a7ee755925a8d11063b76b0012:checkpoint9/100558261/hello.c
		printf("Hello ");
	else
		printf("world!\n");

	return 0;
}
