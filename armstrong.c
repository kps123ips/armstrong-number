#include<stdio.h>
int main()
{
	int n,num,digit,c,sum=0;
	printf("Enter a Number");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		digit=n%10;
		sum+=digit*digit*digit;
		n=n/10;
	}
	if(sum==num)
	printf("It is a Armstrong Number");
	else
	printf("It is not an Armstrong Number");
	getch();
}
