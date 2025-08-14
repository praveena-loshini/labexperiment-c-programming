#include<stdio.h>
int main(){
    int n,i,zero,pos,nega,even,odd;
    printf("give the n");
    scanf("%d",&n);
    int a[n];
    printf("enter the numbers");
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);
     if(a[i]==0){
            zero=zero+1;
        }
     else if(a[i]>0){
            pos=pos+1;
        }
     else{
            nega=nega+1;
        }
        
     if(a[i]%2==0){
            even=even+1;
        }
     else{
            odd=odd+1;
        }
    }
    printf("odd=%d,even=%d,zero=%d,pos=%d,nega=%d",odd,even,zero,pos,nega);
}