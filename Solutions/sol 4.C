/* wap to enetr any number to check amstrong or not.
Date:24/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,sum=0,b,c=0,d;
	clrscr();
	printf(" Enter an int:");
	scanf("%d",&a);
	b=a;
	while (a!=0)
	{
		d=a%10;
		c=d*d*d;
		a=a/10;
		sum=sum+c;
	}
	if(b==sum)
	{
		printf(" Number is a amstrong no:");
	}
	else
		printf(" Number is not an amstrong no:");
	getch();
}