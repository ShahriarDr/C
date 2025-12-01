#include <stdio.h>
 
int main() {
    int sh,sm,eh,em,dh,dm;
    scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    if(sh>eh && em<sm){
        dh=(24-sh)+eh;
        dm=sm-em;
        if(sm>em){
            dm=sm-em;
        }
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dm);
    }
    else if(eh>sh && em>sm){
      dh=eh-sh;
       dm=em-sm;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dm);
        }
        else if(sh == eh && sm==em){
            printf("O JOGO DUROU 24 HORA(S)\n");
        }  
    return 0;
}