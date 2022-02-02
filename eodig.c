#include <stdio.h>
int main(){
    int n,r,e=0,o=0;
    printf("enter the digits: ");
    scanf("%d",&n);
    do
{
r=n%10;
n/=10;
if (r%2==0)
{
    e++;
}
else{
    o++;
}
    } while (n!=0);
    printf("even digits= %d and odd digts=%d",e,o);
}
