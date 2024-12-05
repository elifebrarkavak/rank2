#include <unistd.h>

int check1(char c, char *str)
{
	int i=0;
	while(str[i])
	{
		if(str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int check2(char *str, char c, int i)
{
	int j=0;
	while(j<i)
	{
		if(str[j] == c)
			return 0;
		j++;
	}
	return 1;
}

void ft_inter(char *s1, char *s2)
{
	int i=0;
	while(s1[i])
	{
		if(check1(s1[i], s2) == 1)
		{
			if(check2(s1, s1[i], i) == 1)
			{
				write(1, &s1[i], 1);
			}
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if(argc==3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}