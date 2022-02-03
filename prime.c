#include <stdio.h>
int main(){
    int n,fac=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if (n%i==0){
            fac++;
        }
    }
        if (fac>=3){
            printf("%d not a prime number",n);
        }
        else{printf("%d is a prime number",n);}
}