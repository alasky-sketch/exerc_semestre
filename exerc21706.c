

#include <stdio.h>

int main()
{
    int i, media, n[6], valor;
    
    printf("Digite seis números:");
    for(i=0;i<6;i++){
        scanf("%d", &n[i]);
        valor= valor +n[i];
      
    }
    media = valor/6;
    printf("A média de todos os números: %d\n", media);
    return 0;
}