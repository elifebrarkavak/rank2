#include <unistd.h>

int check1(char *s, char c, int i)
{
	int j=0;
	while(j<i)
	{
		if(s[j] == c)
			return 0;
		j++;
	}
	return 1;
}

int check2(char *s, char c)
{
	int i=0;
	while(s[i])
	{
		if(s[i] == c)
			return 0;
		i++;
	}
	return 1;
}

void ft_union(char *s1, char *s2)
{
	int i=0;
	while(s1[i])
	{
		if(check1(s1,s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	i=0;
	while(s2[i])
	{
		if(check1(s2, s2[i], i) == 1)
		{
			if(check2(s1, s2[i])==1)
			{
				write(1, &s2[i], 1);
			}
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if(argc==3)
		ft_union(argv[1],argv[2]);
	write(1, "\n", 1);
}