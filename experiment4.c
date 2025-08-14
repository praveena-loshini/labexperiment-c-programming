#include<stdio.h>
#include<string.h>
int main(){
    char source[30];
    int i,pos,len,start=0;
    printf("give string");
    scanf("%s",&source);
    printf("give position and length");
    scanf("%d,%d",&pos,&len);
    if(len==0){
        for(i=start;i<strlen(source);i++){
            printf("%c",source[i]);
        }
    }else{
        for(i=start;i<(start+len);i++){
            printf("%c",source[i]);
        }
    }

}