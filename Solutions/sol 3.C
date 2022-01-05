/* wap to check a palindrom number or not
Date 29/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0,b;
	clrscr();
	printf("Enetr a number to reverse:");
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(b==sum)
		printf("%d is palindrom number",sum);
	else
		printf(" %d is not palindrom number",sum);
	getch();
}


