#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int diff;
    diff=x-y;
    if(x<y)
    {
        printf("0");
    }
    else
    {
        printf("%d",diff);
    }
}
