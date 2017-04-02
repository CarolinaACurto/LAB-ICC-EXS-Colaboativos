# LAB-ICC-EXS-Colaboativos


Os exercicios estao como main.c nesse repositorio abaixo do READ.ME e LICENSE.






#include<stdio.h>

int main()
{
  int n1, n2, n3;
  scanf ("%d %d %d", &n1,&n2,&n3);
  
  if (n1>n2) {
        if (n2>n3) {
          printf("%d",n3);
        }   
        else {
            if (n1>n3) {
                printf("%d",n2);
            } 
        }
    }
  else {
        if (n2>n3) {
            if (n1>n3){
                printf("%d",n3);
            }
            else {
                printf("%d",n1);
            }
        }
    }
  if (n1=n2=n3) {
      printf ("%d",n1);
  }
  
  return 0;
}

