#include <stdio.h>
int main(){
    int a[10],i,j,n,temp;
    printf("enter n\n");
    scanf("%d",&n);
    printf("enter values for array \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0,j=n-1;i<n/2;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("reversed array: \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
        
    }
}