#include<stdio.h>
int main(){
    int Array[10],i,n,number_of_subjects_passed,number_of_subjects_failed;
    printf("Enter the no of subjects");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&Array[i]);
    }
    for(i=0;i<n;i++){
        if(Array[i]>=45){
          number_of_subjects_passed+=1;
        }else{
            number_of_subjects_failed+=1;
        }
        
    }
    if(n==number_of_subjects_passed){
        printf("Qualified.");
    }
    else{
        printf("Not qualified for the exam.Failed in %d subjects.",number_of_subjects_failed);
    }

}