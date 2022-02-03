#include <stdio.h>
int main(){
    int a[10],b[10],c[10],n,m,i;
    printf("elements in first array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("elements in second array:");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    if(n==m){
        for(i=0;i<m;i++){
            c[i]=a[i]+b[i];
        }
        printf("sum of given array elements\n");
        for(i=0;i<m;i++){
            printf("element %d - %d\n",i,c[i]);
        }
    } 
}