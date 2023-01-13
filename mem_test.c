#include <stdio.h>
#include <stdlib.h>

int a;
int b=1;


void main(void){

    int n = 0;
    char *p1 = NULL;
    char *p2 = NULL;
    const int s = 10;
    p1 = (char*)malloc(200);
    p2 = "hello";
    static int static_v = 0;

    printf("main %p\n", main);
    printf("未初始化全局 a	%p\n", &a);
    printf("初始化全局   b	%p\n", &b);
    printf("局部变量 n	%p\n", &n);
    printf("指向动态内存地址的指针 p1	%p  动态内存物理地址 %p\n", &p1, p1);
    printf("动态内存 p1	%p\n", p1);
    printf("常量     s	%p\n", &s);
    printf("常字符串 p2	%p\n", &p2);
    printf("静态变量 static_v %p\n", &static_v);

    while(1){;}



    return;
}
