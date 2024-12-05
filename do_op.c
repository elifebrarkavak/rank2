#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc==4)
	{
		int a=atoi(argv[1]);
		int b=atoi(argv[3]);
		int res;
		if(argv[2][0] ==  '+')
			res = a+b;
		else if(argv[2][0] ==  '-')
			res=a-b;
		else if(argv[2][0] == '*')
			res=a*b;
		else if(argv[2][0] == '/')
			res=a/b;
		else if(argv[2][0] == '%')
			res=a%b;
		printf("%d", res);
	}
	printf("\n");
	return 0;
}