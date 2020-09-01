//This is an Example of Fibonacci Series Using Recursion
//The Default Value taken for first term is 0 and all the values will be Calculated by that only
#include <stdio.h>
#include <stdlib.h>
int fib (int n);
int main()
{
    int value,n;
    printf("Till Which Element You Want to Print Fibonacci: ");
    scanf("%d",&n);
    value = fib(n-1);
    printf("%d", value);
}
int fib (int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib(n-2) + fib (n-1);
}
