#include <stdio.h>
 
int main() {
    int s,e,d;
    scanf("%d %d",&s,&e);
    if(s>e){
        d=(24-s)+e;
        printf("O JOGO DUROU %d HORA(S)\n",d);
    }
    else if(e>s){
      d=e-s;
        printf("O JOGO DUROU %d HORA(S)\n",d);
        }
        else if(s == e){
            printf("O JOGO DUROU 24 HORA(S)\n");
        }  
    return 0;
}