#include<stdio.h>
int main(){
    int i,a,c=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        c=c*i;
    }
    printf("%d",c);
}