#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc==2)
	{
		int i=0;
		int j;
		while((argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13)) && argv[1][i])
			i++;
		while(argv[1][i])
		{
			j=0;
			while(!(argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13)) && argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			while((argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13)) && argv[1][i])
				i++;
			if(argv[1][i] == '\0')
				break ;
			while(j<3)
			{
				write(1, " ", 1);
				j++;
			}
		
		}
	}
	write(1, "\n", 1);
	return 0;
}