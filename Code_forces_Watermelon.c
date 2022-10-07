#include<stdio.h>

int main(){

    int w;

    scanf("%d",&w);

    if(w>=1){
        if(w<=100){
            if(w%2==1)
                printf("NO");
            else if(w==2)
                printf("NO");
            else
                printf("YES");
        }
    else
        printf("Invalid Number.");
    }
    else
        printf("Invalid Number.");

    return 0;
}
