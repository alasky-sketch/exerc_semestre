
#include <stdio.h>

int main()
{
    int i, n[5], media, acc;
    acc = 0;
    for(i=0; i<5;i++){
        scanf("%d", &n[i]);
        acc = acc + n[i];
    }
     media = acc/5;
     printf("media = %d\n", media);
     for(i=0; i<5; i++){
         if(n[i]>=media);
         printf("n[%d]=%d\n", i, n[i]);
     }

    return 0;
}