#include<stdio.h>
#include<math.h>
int main(){
    int x,y,h;
    scanf("%d",&x);
    h=x/60;
    y=x%60;
    printf("%d Hour(s) %d Minute(s)",h,y);
}