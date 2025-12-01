#include<stdio.h>
int main()
{
    double A,B,C,media;
    int wa=2,wb=3,cw=5;
    scanf("%lf %lf %lf",&A,&B,&C);
    media=((A*wa+B*wb+C*cw)/A+B+C);
    printf("MEADIA = %.1lf",media);
    return 0;
}