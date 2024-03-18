 #include <stdio.h>

 int main()
 {
    int i;  // int형 변수 i 선언
    int *ptr; // int형 포인터 ptr 선언
    int **dptr; // int형 이중 포인터 dptr 선언
    i = 1234; // 변수 i를 1234로 초기화
    printf("------ 2021041002 Oh WonSeok, HW2-DATA STRUCTURE------\n");
    printf("--- 1 --- \n[checking values before ptr = &i] \n"); // checking values before ptr = &i 출력
    printf("value of i == %d\n", i); // i의 값을 %d형으로 출력
    printf("address of i == %p\n", &i); // i의 주소를 %p형으로 출력
    printf("value of ptr == %p\n", ptr); // ptr의 값을 %p형으로 출력
    printf("address of ptr == %p\n", &ptr); // ptr의 주소를 %p형으로 출력

    ptr = &i; /* ptr is now holding the address of i */ // ptr에 i의 주소를 저장
    printf("\n--- 2 --- \n[checking values after ptr = &i] \n"); // checking values after ptr = &i 출력
    printf("value of i == %d\n", i); // i의 값을 %d형으로 출력
    printf("address of i == %p\n", &i); // i의 주소를 %p형으로 출력
    printf("value of ptr == %p\n", ptr); // ptr의 값을 %p형으로 출력
    printf("address of ptr == %p\n", &ptr); // ptr의 주소를 %p형으로 출력
    printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 값을 %d형으로 출력
    
    dptr = &ptr; /* dptr is now holding the address of ptr */ // dptr에 ptr의 주소를 저장   
    printf("\n--- 3 --- \n[checking values after dptr = &ptr] \n"); // checking values after dptr = &ptr 출력
    printf("value of i == %d\n", i); // i의 값을 %d형으로 출력
    printf("address of i == %p\n", &i); // i의 주소를 %p형으로 출력
    printf("value of ptr == %p\n", ptr); // ptr의 값을 %p형으로 출력
    printf("address of ptr == %p\n", &ptr); // ptr의 주소를 %p형으로 출력
    printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 값을 %d형으로 출력
    printf("value of dptr == %p\n", dptr); // dptr의 값을 %p형으로 출력
    printf("address of dptr == %p\n", &dptr); // dptr의 주소를 %p형으로 출력
    printf("value of *dptr == %p\n", *dptr); // dptr이 가리키는 값을 %p형으로 출력
    printf("value of **dptr == %d\n", **dptr); // dptr이 가리키는 값이 가리키는 값을 %d형으로 출력

    *ptr = 7777;  /* changing the value of *ptr */ // ptr이 가리키는 값을 7777로 변경

    printf("\n--- 4 --- \n[after *ptr = 7777] \n"); // after *ptr = 7777 출력
    printf("value of i == %d\n", i); // i의 값을 %d형으로 출력
    printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 값을 %d형으로 출력
    printf("value of **dptr == %d\n", **dptr); // dptr이 가리키는 값이 가리키는 값을 %d형으로 출력

    **dptr = 8888; /* changing the value of **dptr */ // dptr이 가리키는 값이 가리키는 값을 8888로 변경

    printf("\n--- 5 ---\n[after **dptr = 8888] \n"); // after **dptr = 8888 출력
    printf("value of i == %d\n", i); // i의 값을 %d형으로 출력
    printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 값을 %d형으로 출력
    printf("value of **dptr == %d\n", **dptr); // dptr이 가리키는 값이 가리키는 값을 %d형으로 출력

    return 0;
}