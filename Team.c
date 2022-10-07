#include<stdio.h>

int main(){

    int x,i,a,b,c,count=0;
    scanf("%d",&x);

    for(i=0;i<x;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c >= 2){
            count = count + 1;
        }
    }
    printf("%d",count);

    return 0;
}
