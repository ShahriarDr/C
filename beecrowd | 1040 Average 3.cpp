#include<stdio.h>
int main()
{ float N1,N2,N3,N4,avg,n;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    avg=(N1*2+N2*3+N3*4+N4*1)/10;
    if(avg>7){
        printf("Media: %.1f\n",avg);
        printf("Aluno aprovado.\n");
    }
    else if(avg<5){
        printf("Media: %.1f\n",avg);
        printf("Aluno reprovado.\n");
    }
    else if(5<= avg <=6.9){
        printf("Media: %.1f\n",avg);
        printf("Aluno em exame.\n");
        scanf("%f",&n);
        printf("Nota do exame: %.1f\n",n);
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n",(avg+n)/2);
    }
    return 0;
}