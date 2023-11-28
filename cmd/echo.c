#include <u.h>
#include <libc.h>

#include <bitmap.h>

void
echo_main(int argc, char **argv, char *cwd)
{
	int i;

	i = 1;
	if(argc >= 1 && !strcmp(argv[1], "-b"))
	{
		i = 2;
		while(i < argc)
		{
			bitputs(argv[i]);
			i++;
		}
	}
	
	while(i < argc)
	{
		printf("%s ", argv[i]);
		i++;
	}
	
	printf("\n");
}
