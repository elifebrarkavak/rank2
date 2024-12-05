char *ft_strrev(char *str)
{
	int i=0;
	int len=0;
	int j;
	char tmp;
	while(str[len])
		len++;
	j=len-1;
	while(i<(len/2))
	{
		tmp=str[i];
		str[i]=str[j];
		str[j]=tmp;
		i++;
		j--;
	}
	return str;
}
