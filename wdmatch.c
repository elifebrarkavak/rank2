#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc==3)
	{
		int i=0;
		int cont=0;
		int len=0;
		while(argv[1][len])
			len++;
		while(argv[2][i])
		{
			if(argv[2][i] == argv[1][cont])
				cont++;
			i++;
		}
		if(argv[1][cont] != '\0')
		{
			write(1, "\n", 1);
			return 0;
		}
		else 
		{
			i=0;
			while(argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}