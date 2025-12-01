#include <stdio.h>
 
int main() {
 int num[3],n=3,num1[3];
 for(int i=0; i<3; i++){
     scanf("%d",&num[i] );
     num1[i]=num[i];
 }
   for(int i=0; i<n-1; i++){
       for(int j=0; j<n-1-i; j++){
           if(num[j]> num[j+1]){
               int temp=num[j];
               num[j]=num[j+1];
               num[j+1]=temp;
           }
       }
   }
   for(i=0; i<n; i++){
       printf("%d\n",num[i]);
   }
      printf("\n");
    for(i=0; i<n; i++){
       printf("%d\n",num1[i]);
   }
    return 0;
}