#include <stdio.h>
int main(){
    int m;
    printf("enter marks");
    scanf("%d",&m);
    char g;
    switch(m){
        case 100:
        case 90:
        case 80: g='A'; break;
        case 70:
        case 60: g='B';break;
        default: g='F';break;
    }
        printf("%c",g);
        return 0;
}

