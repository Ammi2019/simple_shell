#include <stdio.h>


/**
  */


int main(int ac, char **av)
{
	int arg_count;
	arg_count = 0;

	for(arg_count = 0; av[arg_count] != NULL; ++arg_count)
		printf("%s\n", av[arg_count]);
		return (0);
}
