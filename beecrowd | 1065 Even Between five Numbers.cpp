#include <stdio.h>
 
int main() {
 int num[5],i=0,c=0;
 
    for(i=0; i<5; i++){
        scanf("%d",&num[i]);
    }
    for(i=0; i<5; i++){
        if(num[i]%2==0){
            c++;
        }
    }
 printf("%d valores pares\n",c);
    return 0;
}