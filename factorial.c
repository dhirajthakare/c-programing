#include <stdio.h>
#include <conio.h>
int factorial(int n);
int main()
{
	int n,fact,i;
    printf("\n Enter a number for find factorial");
	printf("Factorial  ");
	scanf("%d",&n);
	fact=factorial(n);
	printf("Factorial of no is:  ");
	printf("%d",fact);
 return 0;
}
factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
			fact=fact*i;
	 } 
return fact;
}
