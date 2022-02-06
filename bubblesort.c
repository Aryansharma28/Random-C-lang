#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char string[30][30],temp[30];
    int n,i,j;
    printf("enter the number of strings: \n");
    scanf("%d",&n);
    printf("Enter the strings: ");
    for(i=0;i<=n;i++){
        gets(string[i]);
    }
    for (i=0;i<n-1;i++){
        for (j=0;j<n;j++){
            if (strcmp(string[j],string[j+1])>0){
                strcpy(temp,string[j]);
                strcpy(string[j],string[j+1]);
                strcpy(string[j+1],temp);
            }
        }
    }
    printf("sorted array: \n");
    for (i=0;i<=n;i++){
        puts(string[i]);
    }
    return 0;
}