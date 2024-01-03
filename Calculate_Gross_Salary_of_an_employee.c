#include<stdio.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("%.2f
%.2f",a*0.12,a+(a*0.12)+b+c);
}