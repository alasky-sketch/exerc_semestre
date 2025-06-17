

#include <stdio.h>

int main()
{
    int n;
    
    printf("Digite n números:");
    scanf("%d", &n);
    int v[n];
    for(i=0;i < n; n++){
        printf("v[%d] =", i);
        scanf("%d", &v[i]);
        
      
    }
    
    for(i=0;i<n;i++){
        if(v[i]%2==0){
            printf("pares = %d\n", v[i]);
        }
    }
    return 0;
}