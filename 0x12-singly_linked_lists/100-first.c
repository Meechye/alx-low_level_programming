#include <stdio.h>

/**
 * first - prints out the given function
 * before the main function
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
