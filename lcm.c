unsigned int    lcm(unsigned int a, unsigned int b)
{
	int ebob=1;
	int ekok;
	unsigned int i=1;
    unsigned int cont;
	if(a==1 || b == 1)
		return (a*b);
	else if(a==0 || b==0)
		return 0;
    if(a>b)
		cont = a;
	else if(a>=b)
		cont = b;
	while(i<cont)
	{
		if((a%i) == 0 && b%i == 0)
			ebob = i;
		i++;
	}
	ekok = (a*b)/ebob;
	return ekok;
}

#include <stdio.h>

int main()
{
    // 10 farklı test durumu
    unsigned int test_cases[10][2] = {
        {12, 18},   // Test 1
        {7, 5},     // Test 2
        {15, 25},   // Test 3
        {8, 4},     // Test 4
        {21, 14},   // Test 5
        {0, 10},    // Test 6 (biri sıfır)
        {1, 100},   // Test 7 (biri 1)
        {13, 17},   // Test 8 (asal sayılar)
        {6, 9},     // Test 9
        {50, 100}   // Test 10
    };

    // Testlerin çalıştırılması ve sonuçların yazdırılması
    for (int i = 0; i < 10; i++) {
        unsigned int a = test_cases[i][0];
        unsigned int b = test_cases[i][1];
        unsigned int result = lcm(a, b);
        printf("EKOK(%u, %u) = %u\n", a, b, result);
    }

    return 0;
}