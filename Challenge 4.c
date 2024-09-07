#include <stdio.h>

int main(){
    int  n, Inver;
    printf("Veillez entrer votre nombre:");
    scanf("%d",&n);
    Inver = 0;
    while(n!=0){
        Inver = (Inver*10) + (n % 10);
        n = n/10;
        
    }
    printf("L'inverse de ce nombre est : %d ",Inver);
    return 0;
}
