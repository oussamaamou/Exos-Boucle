#include <stdio.h>

int main() {
    int n,i,S;
    printf("Veuillez entrer un nombre:");
    scanf("%d",&n);
    S = 0;
    for(i=1;i<=n;i++){
        S = S + i;
        
    }
    printf("La somme de %d premiers nombres naturels est : %d",n,S);
    return 0;
}
