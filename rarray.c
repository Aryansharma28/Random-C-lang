#include <stdio.h>
int main(){
    int arr[50],n;
    printf("enter the value of n\n");
    scanf("%d",&n); 
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<n;j++){
        printf("%d",arr[j]);
        printf("\t");
    }
    return 0;1
}