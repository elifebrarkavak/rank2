#include <unistd.h>

int ft_atoi(const char *str)
{
	int i=0;
	int sign=1;
	int res=0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

void ft_putnbr(int res)
{
	char a;

	if(res<10)
	{
		a = res + '0';
		write(1, &a, 1);
	}
	else if(res>=10)
	{
		ft_putnbr(res/10);
		ft_putnbr(res%10);
	}
}
int ft_prime(int num)
{
	int i=2;
	int cont=0;
	if(num==2)
		return num;
	while(i<num)
	{
		if(num%i == 0)
			cont=1;
		i++;
	}
	if(cont==0)
		return num;
	else
		return 0;
}
int main(int argc, char *argv[])
{
	if(argc==2)
	{
		int i=2;
		int num=ft_atoi(argv[1]);
		if (num < 0)
		{
			write(1, "0\n", 2);
			return 0;
		}
		int res=0;
		while(i<=num)
		{
			res += ft_prime(i);
			i++;
		}
		ft_putnbr(res);
		write(1, "\n", 1);
	}
	else 
		write(1, "0\n", 1);
	return 0;
}

