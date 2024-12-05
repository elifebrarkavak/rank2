#include <stdio.h>
#include <stdlib.h>

int ft_ebob(int a, int b)
{
	int i=1;
	int ebob=1;
	int cont;
	if((a==0 || b==0) && (a==1 || b==1))
		return 1;
	else
	{
		if(a>b)
			cont = a;
		else if(a>=b)
			cont = b;
		while(i<cont)
		{
			if(a%i == 0 && b%i == 0)
				ebob=i;
			i++;
		}
		return ebob;
	}
}

int main(int argc, char *argv[])
{
	if(argc==3)
	{
		int a=atoi(argv[1]);
		int b=atoi(argv[2]);
		printf("%d", ft_ebob(a,b));
	}
	printf("\n");
	return 0;
}
