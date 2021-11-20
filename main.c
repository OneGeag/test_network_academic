#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	static const char *hello_message = "Hello, World!";

	printf("%s\n", hello_message);
	printf("%s\n", hello_message " concat");

	return 0;
}
