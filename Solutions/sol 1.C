/* write a program to enetr any number and print sum of its digits.
Date:24/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum=0;
	clrscr();
	printf(" Enter any number:");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
		printf("\n Sum of digits is %d :",sum);
	getch();
}



