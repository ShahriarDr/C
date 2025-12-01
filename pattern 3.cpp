#include<stdio.h>
int main()
{
    int row,col, i;
    printf("Enter the value of row: ");
    scanf("%d", &i);
    
    for( row=1 ; row<=i ; row++)
    {
        for (col=1; col<=row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }
    return 0;
}