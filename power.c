#include <stdio.h>
int pow (int m, int n);
int main()
{
	int m,n,value;
	//m is the number whose power will be calculated
	//n is the number that much times m would be multiplied by itself 
	// m^n

	printf("Enter the value of number Whose power needs to be calculated:");
	scanf("%d",&m);
	printf("Enter the value of power: ");
	scanf("%d",&n);
	value = pow(m,n);
	printf("\nThe Value is %d",value);
}
int pow (int m, int n)
{
	if n==0
	{
		return 1;
	}
	return pow(m,n-1)*m;
}