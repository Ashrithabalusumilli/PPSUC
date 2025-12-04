#include<stdio.h>
int main()
{
    int avg,w1,w2;
    scanf("%d%d%d",&avg,&w1,&w2);
    int total=avg*3;
    int w3=total-(w1+w2);
    printf("%d",w3);
}
