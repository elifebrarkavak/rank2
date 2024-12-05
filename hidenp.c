#include <unistd.h>

int ft_strlen(char *str)
{
	int i=0;
	while(str[i])
		i++;
	return i;
}
int main(int argc,char *argv[])
{
	if(argc==3)
	{
		int i=0;
		int j;
		if(!argv[1][i])
		{
			write(1, "1\n", 2);
			return 0;
		}
		else
		{
			int len=ft_strlen(argv[1]);
			int cont=0;
			j=0;
			while(argv[2][j] && argv[1][i])
			{
				if(argv[1][i] == argv[2][j])
				{
					cont++;
					i++;
				}
				j++;
			}
			if(cont != len)
				write(1, "0", 1);
			else
				write(1, "1", 1);	
		}

	}
	write(1, "\n", 1);
	return 0;
}