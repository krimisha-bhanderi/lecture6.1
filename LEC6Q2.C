#include<stdio.h>
#include<conio.h>
void main()
{
	int number,i=1;
	clrscr();

	printf("Enter any value:");
	scanf("%d",&number);

	while(i<=number)
	{
		printf("%d\n",i);
		i++;
	}
getch();
}
