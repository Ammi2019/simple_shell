#include <stdio.h>
#include <unistd.h>

/**
  */

int main(void)
{
	pid_t p_id;

	p_id = getppid();

	printf("%d\n", p_id);
	return(p_id);
}

