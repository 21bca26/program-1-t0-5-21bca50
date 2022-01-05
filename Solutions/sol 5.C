/* write a program to enter ande check wheter it is a prime number or not
Date22/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=2,no,c=0;
	clrscr();
	printf("\n\t Enter any value:");
	scanf("%d",&no);
	while(i<no)
	{
		if(no%i==0)
		{
			printf("\n\t true");
			c++;
		}
		 break;

	}
	 if(c==0)
		printf("%d is prime",no);
	 else
		printf("%d is not prime",no);
	 getch();
}