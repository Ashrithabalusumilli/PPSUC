#include<stdio.h>
int main()
{
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    int c=2*t*s*b*512;
    int c2=c/1024;
    printf("%d",c2);
    printf(" KB ");
}
