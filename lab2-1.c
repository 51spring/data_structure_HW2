#include <stdio.h>

int main()
{
    char charType; // char형 변수 charType 선언
    int integerType; // int형 변수 integerType 선언
    float floatType; // float형 변수 floatType 선언
    double doubleType; // double형 변수 doubleType 선언

    printf("------ 2021041002 Oh WonSeok, HW2-DATA STRUCTURE------\n");

    printf("---------- 1 ----------\n");

    printf("Size of char: %ld byte\n",sizeof(charType)); // longcharType의 크기를 long형으로 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType)); // integerType의 크기를 long형으로  출력
    printf("Size of float: %ld bytes\n",sizeof(floatType)); // floatType의 크기를 long형으로 출력
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); // doubleType의 크기를 long형으로 출력

    printf("---------- 2 ----------\n");

    printf("Size of char: %ld byte\n",sizeof(char)); // char형의 크기 출력
    printf("Size of int: %ld bytes\n",sizeof(int)); // int형의 크기 출력
    printf("Size of float: %ld bytes\n",sizeof(float)); // float형의 크기 출력
    printf("Size of double: %ld bytes\n",sizeof(double)); // double형의 크기 출력

    printf("---------- 3 ----------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*)); // char형 포인터의 크기 출력
    printf("Size of int*: %ld bytes\n",sizeof(int*)); // int형 포인터의 크기 출력
    printf("Size of float*: %ld bytes\n",sizeof(float*)); // float형 포인터의 크기 출력
    printf("Size of double*: %ld bytes\n",sizeof(double*)); // double형 포인터의 크기 출력

    return 0;
}