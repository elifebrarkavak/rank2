#include <stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
	int i=0;
	int j=0;
	while(s[i])
	{
		while(accept[i] && s[i] != accept[i])
			i++;
		if(accept[i] != '\0')
			return j;
		i=0;
		j++;
	}
}
