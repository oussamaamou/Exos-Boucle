#include<stdio.h>

int main(){
    int x,i,S;
    printf("Veuillez entrer un nombre :");
    scanf("%d",&x);
    S = 0;
    for(i=0;i<=10;i++){
        printf("%d*%d = %d\n",x,i,x*i);
        S = S + (x*i);
    }
    printf("La somme des produits de %d est : %d",x,S);
    
    
    return 0;
}
