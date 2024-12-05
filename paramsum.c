#include <unistd.h>

void ft_putnbr(int ar)
{
	char c;
	if(ar<10)
	{
		c=ar+'0';
		write(1, &c, 1);
	}
	else if(ar>9)
	{
		ft_putnbr(ar/10);
		ft_putnbr(ar%10);
	}
}

int main(int argc, char *argv[])
{
	(void)argv;
	if(argc<2)
		write(1, "0", 1);
	else
		ft_putnbr(argc-1);
	write(1, "\n", 1);
	return 0;
}