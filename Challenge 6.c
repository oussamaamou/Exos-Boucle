#include <stdio.h>

int main() {
    int n,i;
    printf("Veuillez entrer un nombre:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        while ( n % i == 0){
            printf("%d\n",i);
        
            break;
        }
    }
    
    return 0;
}
