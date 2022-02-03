#include <stdio.h>
int main(){
    int a[100],n,i,pos,ele;
    printf("enter no of elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
        printf("\n enter element and postion");
        scanf("%d %d",&ele,&pos);
        for(i=n;i>=pos;i--){
            a[i]=a[i-1];
            a[pos-1]=ele;
            n=n+1;
        }
        printf("the new array is:\n");
        for(i=0;i<n;i++){
            printf("%d\t",a[i]);
        }
    }
