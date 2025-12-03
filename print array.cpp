#include<stdio.h>
int main()
{
	int n;
	scanf("%d ",&n);
	int A[n],i;
	for(i = 0; i < n;i++)
	{
		scanf("%d",&A[i]);
	}
	int sum=0;
	for(i=0;i<n;i++){
	  sum = sum + A[i];
}
	  printf("%d ",sum);
	

}
