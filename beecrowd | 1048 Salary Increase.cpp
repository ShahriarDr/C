#include <stdio.h>
 
int main() {
 float s,inc;
 scanf("%f",&s);
 if(0<s && s<=400){
     inc=s*.15;
     printf("Novo salario: %.2f\n",s+inc);
     printf("Reajuste ganho: %.2f\n",inc);
     printf("Em percentual: 15 %%\n");
 }
  else if(400<s && s<=800){
       inc=s*.12;
     printf("Novo salario: %.2f\n",s=s+inc);
     printf("Reajuste ganho: %.2f\n",inc);
     printf("Em percentual: 12 %%\n");
 }
 else if(800<s && s<=1200){
      inc=s*.10;
     printf("Novo salario: %.2f\n",s=s+inc);
     printf("Reajuste ganho: %.2f\n",inc);
     printf("Em percentual: 10 %%\n");
 }
 else if(1200<s && s<=2000){
      inc=s*.07;
     printf("Novo salario: %.2f\n",s=s+inc);
     printf("Reajuste ganho: %.2f\n",inc);
     printf("Em percentual: 7 %%\n");
 }
 else if(s>2000){
      inc=s*.04;
     printf("Novo salario: %.2f\n",s=s+inc);
     printf("Reajuste ganho: %.2f\n",inc);
     printf("Em percentual: 4 %%\n");
 }
    return 0;
}