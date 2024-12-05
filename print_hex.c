#include <unistd.h>

int ft_atoi(char *str)
{
	int i=0;
	int res=0;
	while(str[i])
	{
		res = (res*10) + (str[i]-'0');
		i++;
	}
	return res;
}

void ft_hex(int res)
{
	char hex[]="0123456789abcdef";
	if(res>16)
	{
		ft_hex(res/16);
		ft_hex(res%16);
	}
	else
	{
		write(1, &hex[res], 1);
	}
}

int main(int argc, char *argv[])
{
	if(argc==2)
	{
		int res=ft_atoi(argv[1]);
		ft_hex(res);
	}
	write(1, "\n", 1);
	return 0;
}