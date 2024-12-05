#include <unistd.h>
#include <stdio.h>

void rstr_cp(char **ar)
{
	int i=1;
	int j=0;
	while(ar[i])
	{
		j=0;
		while(ar[i][j])
		{
			if(ar[i][j] >= 'A' && ar[i][j] <= 'Z')
				ar[i][j] += 32;
			j++;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if(argc>1)
	{
		int i=1;
		int j=0;
		rstr_cp(argv);
		while(argv[i])
		{
			j=0;
			while(argv[i][j])
			{
				if(argv[i][j+1] == 32 || (argv[i][j+1] >= 9 && argv[i][j+1] <= 13))
				{
					if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
						argv[i][j] -= 32;
					write(1, &argv[i][j], 1);
					j++;
					while(argv[i][j] == 32 || (argv[i][j] >= 9 && argv[i][j] <= 13))
					{
						write(1, &argv[i][j], 1);
						j++;
					}
					j--;
				}
				if(argv[i][j+1] == '\0')
				{
					if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
						argv[i][j] -= 32;
				}
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}