#include <stdio.h>

int main(int argc, char *argv[])

{
	printf("%d\n", argc);
	int i;
	for (i=0;i<argc;i++)
	{
		printf("argv index %d is = %s\n", i, argv[i]);
	}
	printf("argv index is %d is = %s", argc, argv[argc]);
	return (0);
}
