#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter values of a and b");
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("Bitwise AND is:%d\n",c);
	c=a|b;
	printf("Bitwise OR is:%d\n",c);
	c=a^b;
	printf("Bitwise EX-OR is:%d",c);
	return 0; 
}
