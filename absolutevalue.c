#include <stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if (n<0){
        n=-n;
        printf("absolute value=%d\n",n);
    }
    else{
         printf("absolute value=%d\n",n);
    }
    }