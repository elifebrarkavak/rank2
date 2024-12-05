#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *res;
	int i=0;
	int size;

	if(start>end)
		size=(start-end)+1;
	else if(end>start)
		size=(end-start)+1;
	else
		size=1;
	res=(int *)malloc(sizeof(int) * size);
	if(!res)
		return NULL;
	if(start>end)
	{
		while(i<size)
		{
			res[i] = end;
			end++;
			i++;
		}
	}
	else if(end>start)
	{
		while(i<size)
		{
			res[i] = end;
			end--;
			i++;
		}
	}
	else
		res[0]=start;
	return res;
}

#include <stdio.h>

int main()
{
	int start = 1;
	int end=3;

	int *res=ft_rrange(start,end);
	int i=0;
	while(i<3)
	{
		printf("%d ",res[i]);
		i++;
	}
	free(res);
}