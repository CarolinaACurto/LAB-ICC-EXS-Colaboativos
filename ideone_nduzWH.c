#include<stdio.h>

int main(){
    
 int M [100][100];
 int N[100][100];
 int soma[100][100];
 int i, j, n;
    
     
 printf ("\nEscreva o numero de linhas e colunas das matrizes:\n");
 scanf ("%d", &n);
    
    printf ("\nEscreva a primeira matriz:\n");
    
    for (i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            scanf("%d", &M[i][j]);
        }
    }
        
    
    printf ("\nEscreva a segunda matriz:\n"); 
    
    for (i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            scanf("%d", &N[i][j]);
        }
    }
       
    for (i=0;i<=n;i++){
        for(j=0;j<=n;j++){
    
            soma[i][j] = M[i][j] + N[i][j];
        }
    }
            
    for (i=0;i<=n;i++){
        for(j=0;j<=n;j++){
    
            printf("%d", soma[i][j]);
        }
    }
        
            
            
  return 0;
}
    
    