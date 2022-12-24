#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,y,x;
    scanf("%d %d %d", &a, &b, &c);
    y=(a+b+abs(a-b))/2;
    x=(y+c+abs(y-c))/2;
    printf("%d eh o maior\n", x);

    return 0;
}