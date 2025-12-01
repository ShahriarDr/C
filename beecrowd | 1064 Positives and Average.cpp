#include <stdio.h>
 
int main() {
 float num[6],s=0;
 int i,c=0;
    for(i=0; i<6; i++){
        scanf("%f",&num[i]);
    }
    for(i=0; i<6; i++){
        if(num[i]>0){
            c++;
            s=s+num[i];
        }
    }
 printf("%d valores positivos\n",c);
 printf("%.1f\n",s/c);
    return 0;
}