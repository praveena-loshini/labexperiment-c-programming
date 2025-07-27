#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the three sides of a triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        if(a<b+c){
            printf("The given triangle with sides %d,%d and %d is a valid triangle.",a,b,c);
        }
        else{
            printf("The given triangle with sides %d,%d and %d is not a valid triangle.",a,b,c);
        }
    }
    else if(b>c && b>a){
        if(b<c+a){
            printf("The given triangle with sides %d,%d and %d is a valid triangle.",a,b,c);
        }else{
            printf("The given triangle with sides %d,%d and %d is not a valid trianlgle.",a,b,c);
        }
    }
    else{
        if(c<a+b){
            printf("The given triangle with sides %d,%d and %d is a valid triangle.",a,b,c);
        }
        else{
            printf("The given triangle with sides %d,%d and %d is not a valid triangle.",a,b,c);
        }
    }
}