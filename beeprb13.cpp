#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,maior;
    scanf("%d %d %d",&a,&b,&d);
    c=(a+b+abs(a-b))/2;
        maior = (c + d + abs(c - d)) / 2;
    printf("%d eh o maior\n",maior);
    return 0;
}