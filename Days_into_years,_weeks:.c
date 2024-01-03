#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    b=a%365;
    printf("%d
%d",a/365,b/7);
}