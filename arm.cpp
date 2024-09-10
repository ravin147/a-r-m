#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("enter the value of n:");
	scanf("%d",&n);
	temp = n;
while(n>0)
{
	r=n%10;
	sum=sum+(r*r*r);
	n=n/10;
}if(temp==sum){
printf("its armstrong number");
}
else{
	printf("its not arm number");
}
}
