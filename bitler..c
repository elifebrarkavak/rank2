unsigned char	swap_bits(unsigned char octet) // swap
{
	return ((octet>>4) | (octet<<4));
}

void	print_bits(unsigned char octet) //print
{
	int i=8;
	unsigned char bit;
	while(i--)
	{
		bit=((octet>>i &1) + '0');
		write(1, &bit, 1);
	}
}

unsigned char	reverse_bits(unsigned char octet) // rev
{
	int i=8;
	unsigned char bit=0;
	while(i--)
	{
		bit=(octet*2) + (octet%2);
		octet /= 2;
	}
	return bit;
}