// 2023.10.14 C Fundamentals Worksheet
// Chapter 5,6,7

#include <stdio.h>

/*
// if-statement
int main(){
    int i;
    printf("Enter an integer: ");
    scanf("%d", &i);

    if(i==7){
        printf("Lucky number seven!\n");
    }
    return 0;
}
*/

/*
//if-else statement
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num==7){
        printf("Lucky number seven!\n");
    } else {
        printf("Any old number %d...\n",num);
    }
    return 0;
}
*/

/*
// if-else if-else statement
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num==7){
        printf("Lucky number seven!\n");
    } else if(num==13){
        printf("Unlucky number thirteen!\n");
    } else {
        printf("Any old number %d...\n",num);
    }
    return 0;
}
*/

// We also did logical operators && and ||
/* Chapter 6 - For, While loops
break - exit loop (current loop only!)
continue - skip to next iteration
do-while vs while: do-while does it at least once, while checks first.
*/

// Chapter 6 Problems


/*
// Problem 1
int main(){
    int N;
    scanf("%d", &N);
    for(int i=1;i<=N;++i){
        for (int j=1;j<=(2*i-1);++j){
            printf("*");
        }
        printf(" ");
    }
    return 0;
}
*/

// Problem 2
/*
int main(){
    int N;
    scanf("%d", &N);
    for(int i=N;i>0;--i){
        for (int j=1;j<=(2*i-1);++j){
            printf("*");
        }
        printf(" ");
    }
    return 0;
}
*/

/*
// Problem 3
int main(){
    int sum=0;
    for(int i=1;i<=1000;++i){
        if (i%3==0 || i%5==0){
            sum+=i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
*/


/*
// Problem 4 - 1089154
int main(){
    int val1=1, val2=1, sum=0;
    do {
        val2=val1+val2;
        if (val2%2==0){
            sum+=val2;
        }
        val1=val2-val1;
    } while (val2<1000000);
    printf("%d\n", sum);
    return 0;
}
*/


/*
// Problem 6 - 332334
int main(){
    int cnt=0;
    for(int c=1;c<=667;++c){
        for (int b=c+1;b<=999;++b){
            for (int a=b+1;a<=2000;++a){
                if (a+b+c==2000){
                    ++cnt;
                }
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
*/


/*
// Problem 7
#include <math.h>
int main()
{
    int N;
    printf("Enter an integer: ");
    scanf("%d", &N);
    printf("%d = ", N);
    for (int i = 2; i <= sqrt(N); ++i)
    {
        int isPrime = 1;
        for (int j = 2; j < sqrt(i); ++j)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            while (N % i == 0)
            {
                printf("%d ", i);
                N/=i;
                if (N!=1){
                    printf("* ");
                } else {
                    return 0;
                }
            }
        }
    }
    return 0;
}
*/

// Chapter 7 - Switch
