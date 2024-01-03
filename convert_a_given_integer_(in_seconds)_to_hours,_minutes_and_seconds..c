#include<stdio.h>
int main(){
    int h,m,s;
    scanf("%d",&h);
    m=h%3600;
    s=m%60;
    printf("H:M:S-%d:%d:%d",h/3600,m/60,s);
}