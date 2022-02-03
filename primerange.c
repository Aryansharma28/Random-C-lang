#include <stdio.h>
int main(){
    int n1,n2,fac,i,j;
    printf("enter number 1: ");
    scanf("%d",&n1);
    printf("enter number 2: ");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++){
        fac=0;
        for(j=1;j<=i;j++){
            if ((i%j)==0){
                fac++;
            } 
        }  
    if (fac<3){
                printf("%d is a prime no\n",i );
            }    
    }
}