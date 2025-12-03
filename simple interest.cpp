#include<stdio.h>
int main()
{
	int p,t,r;
	float si;
	printf("Enter p t r values:");
	scanf("%f%f%f",&p,&t,&r);
	si=(p*t*r)/100;
	printf("Simple interest is:%f\n",si);
	return 0;
}
