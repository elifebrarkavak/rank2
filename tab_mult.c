#include <unistd.h>

int ft_atoi(char *ar)
{
	int i=0;
	int res=0;
	while(ar[i])
	{
		res = (res*10) + (ar[i] - '0');
		i++;
	}
	return res;
}
void ft_putnbr(int cont)
{
	char c;
	if(cont>9)
	{
		ft_putnbr(cont/10);
		ft_putnbr(cont%10);
	}
	else if(cont<=9)
	{
		c=cont+'0';
		write(1, &c, 1);
	}
}

int main(int argc, char *argv[])
{
	if(argc==2)
	{
		int res=ft_atoi(argv[1]);
		int i=1;
		int cont=0;
		char a;
		while(i<=9)
		{
			cont=i*res;
			a = i + '0';
			write(1, &a, 1);
			write(1, " ", 1);
			write(1, "x", 1);
			write(1, " ", 1);
			ft_putnbr(res);
			write(1, " ", 1);
			write(1, "=", 1);
			write(1, " ", 1);
			ft_putnbr(cont);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}