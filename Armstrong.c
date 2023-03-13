//Check if a number is armstrong using for loop
#include<stdio.h>
int main()
{
	int n,rem,sum=0,m;
	printf("Enter n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(sum==m)
	printf("Armstrong no");
	else
	printf("Not Armstrong");
	
}
