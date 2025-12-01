#include <stdio.h>
 
int main() {
 float s,t;
 scanf("%f",&s);
    if(0< s && s<=2000){
        printf("Isento\n");
    }
 else if(2000<s && s <=3000){
     t=(s-2000)*.08;
     printf("R$ %.2f\n",t);
 }
 else if(3000< s && s <=4500){
     t=(1000*.08)+(s-3000)*.18;
     printf("R$ %.2f\n",t);
 }
 else if(4500< s){
     t=(1000*.08)+1500*.18+(s-4500)*.28;
     printf("R$ %.2f\n",t);
 }
    return 0;
}