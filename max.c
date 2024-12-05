int max(int *tab, unsigned int len)
{
	unsigned int i=0;
	int tmp;
	len--;
	if(!tab)
		return 0;
	while(i<len)
	{
		if(tab[i] > tab[len])
		{
			tmp=tab[i];
			tab[i]=tab[len];
			tab[len]=tmp;
		}
		i++;
	}
	return tab[len];
}

#include <stdio.h>

int main()
{
	int tab[]={1,645,43657890,76,5432,33,0};
	unsigned int len=7;
	printf("%d\n", max(tab,len));
}