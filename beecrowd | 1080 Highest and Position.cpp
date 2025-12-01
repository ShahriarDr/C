#include <stdio.h>
 
int main() {
    int i,n[100],max=0,p=0;
    for(i=0; i<100; i++){
        scanf("%d",&n[i]);
    }
 for(i=0; i<100; i++){
     if(n[i]>max){
         max=n[i];
         p=i+1;
     }
 }
 printf("%d\n",max);
 printf("%d\n",p);
   
    return 0;
}