#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PROGRAMM_NAME "test"

int
main(int argc, char *argv[])
{
	static const char *hello_message = "Hello, World!" " concat";

	printf("%s\n", hello_message);

	return 0;
}
