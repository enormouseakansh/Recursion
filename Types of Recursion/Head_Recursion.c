#include <stdio.h>
#include <stdlib.h>
void fun (int n);
int main()
{
 int n;
   //n is a variable that would store the value of printing
   printf("Enter the Value of the Number till which you want to print : ");
   scanf("%d",&n);
   fun(n);
}
void fun (int n)
{
    if(n>0)
    {
        fun(n-1);
        printf("%d\n",n);
        //In Head Recursion the first line of function must be "function calling itself" .
        //All The Values are printed in the Returning Time Only.
    }

}
