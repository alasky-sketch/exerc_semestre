

#include <stdio.h>

int main()
{
    int i, soma, n[6];
    
    printf("Digite seis números:");
    for(i=0;i<6;i++){
        scanf("%d", &n[i]);
        soma= n[0]+n[1]+n[2]+n[3]+n[4]+n[5]+n[6];
      
    }
    printf("A soma de todos os números: %d\n", soma);
    return 0;
}