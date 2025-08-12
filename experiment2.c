#include<stdio.h>
int main(){
    int Array[10],i,n;
    int number_of_subjects_passed=0,number_of_subjects_failed=0;
    printf("Enter the no of subjects");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&Array[i]);
    }
    for(i=0;i<n;i++){
        if(Array[i]>=45){
          number_of_subjects_passed+=1;
        }else{
          number_of_subjects_failed=number_of_subjects_failed+1;
        }
        
    }
    if(n==number_of_subjects_passed){
        printf("Qualified.");
    }
    else{
        printf("Not qualified.Failed in %d subjects.",number_of_subjects_failed);
    }

}p