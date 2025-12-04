#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p,q;
    p=pow(2,n);
    q=pow(n,2);
    if(p>q)
    {printf("Yes");}
    else{printf("No");}
}
