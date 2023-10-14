// Chapter 3
#include <stdio.h>

/*
// Basic calculations
int main(){
    int a, b;
    a=10;
    b=3;
    printf("a+b = %d \n", a+b);
    printf("a-b = %d \n", a-b);
    printf("a*b = %d \n", a*b);
    printf("a/b = %d \n", a/b);
    printf("a%%b = %d \n", a%b);

    float c, d;
    c=10;
    d=3;
    printf("c/d = %f \n", c/d);
    printf("d/c = %f \n", d/c);

    a = a+3;
    printf("a = %d \n", a);
    ++b;
    printf("b = %d \n", b);

    return 0;
}
*/

/*
// Bit operations
int main(){
    int a=0xAF;
    int b=0xB5;

    printf("a&b = %x \n", a&b);
    printf("a|b = %x \n", a|b);
    printf("a^b = %x \n", a^b);
    printf("~a = %x \n", ~a);
    printf("a<<2 = %x \n", a<<2);
    printf("b>>3 = %x \n", b>>3);
    return 0;
}
*/

/*
// scanf
int main(){
    double celsius;
    printf("Celsius to Fahrenheit \n");
    printf("Input Celsius: ");
    scanf("%lf", &celsius);
    printf("Celsius: %.2f = Fahrenheit: %.2f \n", celsius, 9*celsius/5+32);
    return 0;
}
*/

/*
// scanf 2
int main()
{
    char ch;  // 문자
    short sh; // 정수
    int i;
    long lo;
    float fl; // 실수
    double du;
    printf("char 형 변수 입력 : ");
    scanf("%c", &ch);
    printf("short 형 변수 입력 : ");
    scanf("%hd", &sh);
    printf("int 형 변수 입력 : ");
    scanf("%d", &i);
    printf("long 형 변수 입력 : ");
    scanf("%ld", &lo);
    printf("float 형 변수 입력 : ");
    scanf("%f", &fl);
    printf("double 형 변수 입력 : ");
    scanf("%lf", &du);
    printf("char : %c , short : %d , int : %d ", ch, sh, i);
    printf("long : %ld , float : %f, double : %f \n", lo, fl, du);
    return 0;
}
*/