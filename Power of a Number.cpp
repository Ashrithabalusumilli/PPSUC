#include<stdio.h>
#include<stdio.h>
int main()
{
    int x,y,m;
    scanf("%d%d%d",&x,&y,&m);
    int p,d;
    p=pow(x,y);
    d=p%m;
    printf("%d",d);

}
