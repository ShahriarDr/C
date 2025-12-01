#include <stdio.h>
 
int main() {
 int N,n,i;
 scanf("%d",&n);
 for(i=0; i<n; i++){
     scanf("%d",&N);
     
     if(N>0 && N%2==0){
     printf("EVEN POSITIVE\n");
 }
 else if(N>0 && N%2!=0){
       printf("ODD POSITIVE\n");
 }
else if(N<0 && N%2==0){
     printf("EVEN NEGATIVE\n");
 }
   else if(N<0 && N%2!=0){
     printf("ODD NEGATIVE\n");
 }
 else{
   printf("NULL\n");  
 }
 }
 
 
    return 0;
}