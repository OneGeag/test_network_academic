#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	static const char *hello_message = "Hello, World!";

	printf("%s\n", hello_message);

	return 0;
}
