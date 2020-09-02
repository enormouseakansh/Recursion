//The problem with Normal Taylor Series Recursion was that it has time Complexity O(n^2) which is much Greater than Iterative loop Version
//Using Homer's Rule Taylor Series can also have the Time Complexity of O(n) Since number of multiplications are Reduced.
#include <stdio.h>
#include <stdlib.h>
double e (int x, int n);
int main()
{
    int x,n;
    double value;
    printf("Enter the Value of x: ");
    scanf("%d",&x);
    printf("Enter the Value till what Accuracy you want to print the Series: ");
    scanf("%d",&n);
    value  = e(x,n);
    printf("Value is : %lf",value);
}
double e (int x, int n)
{
    static double s = 1;
    if(n==0)
    {
        return s;
    }
    s = 1 + x*s/n;
    return e(x,n-1);
}
