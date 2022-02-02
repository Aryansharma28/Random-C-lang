#include <stdio.h>
int main(){
    int n, r=0, right;
    printf("enter n: ");
    scanf("%i",&n);
    while (n!=0){
        right=n%10;
        r= r*10+right;
        n=n/10;
}
printf("reversed no is %d\n",r);

}

