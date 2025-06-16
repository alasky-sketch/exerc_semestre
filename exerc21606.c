
#include <stdio.h>

int main()
{
    int i, A[5], maior;
    
    for(i=0; i<5;i++){
        scanf("%d", &A[i]);
        
    }
    maior = A[0];
     
     for(i=0; i<5; i++){
         if(A[i]>maior){
             maior = A[i];
         }
     }
         printf("O maior é %d\n", maior);
     

    return 0;
}