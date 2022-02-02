/* write a program any number and print it in reverse
Date:22/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,reverse=0;
	clrscr();
	printf("Enter a reverse number:");
	scanf("%d",&a);
	while(a!=0)
	{
		reverse=reverse*10;
		//reverse=reverse+a%10;
		a=a/10;
	}

		printf("reverse of eneter number is=%d",reverse);

	getch();

}
