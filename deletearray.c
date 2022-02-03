#include <stdio.h>
int main(){
    int a[100],i,pos,n;
    printf("enter no of elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n enter postion");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
        n=n-1;
    }
    printf("the new array is:\n");
        for(i=0;i<n;i++){
            printf("%d\t",a[i]);
        }
}        
