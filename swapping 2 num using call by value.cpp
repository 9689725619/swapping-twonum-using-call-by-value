#include<stdio.h>
int  swap(int,int);
int main()
{
	int a,b;
	printf("enter value a&b");
	scanf("%d%d",&a,&b);
	printf("before swapping");
	printf("a=%d& b=%d",a,b);
	swap(a,b);
	return 0;
}
int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swapping");
	printf("a=%d & b=%d",a,b);
}
