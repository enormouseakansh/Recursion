#include <stdio.h>
#include <stdlib.h>
void fun (int n);
int main()
{
   int n;
   //n is a variable that would store the value of printing
   printf("Enter the Value of the Number from which you want to start printing : ");
   scanf("%d",&n);
   fun(n);
}
void fun (int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        fun(n-1);
        //In Tail Recursion the last line of function must be "function calling itself" .
        //All The Values are printed in the Calling Time Only.
    }

}
