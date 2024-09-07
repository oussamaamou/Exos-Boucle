#include <stdio.h>

int main(){
    int i, n, Premier;
    printf("Veillez entrer votre nombre:");
    scanf("%d",&n);
    
    for(i=2;i<n/2;i++){
        Premier = 1;
        if (n % i == 0){
            Premier = 0;
        break;
        }
    }
    if (Premier == 1){
        printf("Le nombre est premier");
    }
    else{
        printf("Le nombre n'est pas premier");
    }
    return 0;
}
