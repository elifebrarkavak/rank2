#include <stdlib.h>

int *ft_range(int start, int end)
{
	int plc;

	if(end>start)
		plc=(end - start) + 1;
	else if(start>end)
		plc=(start-end)+1;
	else 
		plc=1;

	int *res;
	res=(int *)malloc(sizeof(int) * plc);
	if(!res)
		return NULL;

	int i=0;

	if(end>start)
	{
		while(i<plc)
		{
			res[i] = start;
			i++;
			start++;
		}
	}
	else if(start > end)
	{
		while(i<plc)
		{
			res[i] = start;
			i++;
			start--;
		}
	}
	else
		res[0]=start;

	return res;
}

#include <stdio.h>

int main()
{
	int start = 0;
	int end=0;

	int *res=ft_range(start,end);
	int i=0;
	while(i<1)
	{
		printf("%d ",res[i]);
		i++;
	}
	free(res);
}