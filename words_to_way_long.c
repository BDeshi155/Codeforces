#include<stdio.h>
#include<string.h>

int main(){

    int n,i,x;

    scanf("%d",&n);
    char word[n][100];

    for(i=0;i<n;i++){
        printf("please Enter a word.\n");
        scanf("%s",&word[i]);
        x = strlen(word[i]);
        if(strlen(word[i])>10){
            printf("%c%d%c\n",word[i][0],x-2,word[i][x-1]);
        }
        else
            printf("%s",word[i]);
    }


    return 0;
}
