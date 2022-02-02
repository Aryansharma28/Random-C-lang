#include <stdio.h>
#include <math.h>
int main(){
    int n,p=0,k,sum=0;
    printf("eneter a binary digit: ");
    scanf("%d",&n);
    do
    {
        k=n%10;
        sum=sum+k* pow(2,p);
        p++;
        n/=10;

    } while (n!=0);
    printf("the numer is %d",sum);

}