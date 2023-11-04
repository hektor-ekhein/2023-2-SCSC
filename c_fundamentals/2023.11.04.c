#include <stdio.h>


// Chapter 8 - Type casting Problem 1
/*
int main(){
    double f;
    printf("Input a real number: ");
    scanf("%lf", &f);
    int i = (int)f;
    printf("i=%d\n", i);
    return 0;
}
*/

// Chapter 9 - Arrays
// int arr[3]={1}; - initializes other values as zero
// Problem 1
/*
int main(){
    int arr[10];
    int sum=0;
    for (int i=0;i<10;++i){
        printf("Input score of Student %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<10;++i){
        sum+=arr[i];
    }
    double avg=sum/10;
    printf("Average score: %lf\n", avg);
    for (int i=0;i<10;++i){
        printf("Student %d: ", i+1);
        if (arr[i]>avg){
            printf("Pass\n");
        } else {
            printf("Fail\n");
        }
    }
    return 0;
}
*/
// Problem 2
int main(){
    int arr[10];
    int sum=0;
    for (int i=0;i<10;++i){
        printf("Input score of Student %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<10;++i){
        sum+=arr[i];
    }
    double avg=sum/10;
    printf("Average score: %lf\n", avg);
    for (int i=0;i<10;++i){
        printf("Student %d: ", i+1);
        for (int j=0;j<arr[i];++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}