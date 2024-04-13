#include <stdio.h>

int main(){
    char ch='b';  //字符类型
    short num=10;//短整型
    int age=20;//整形
    printf("%d\n",100);//打印整数
    // sizeof关键字，操作符，计算机或者变量所占空间的大小 单位为字节 计算机的单位为bit-比特位 byte-字节   1byte=8bit kb-1024byte=1kb
    printf("%d\n",sizeof(char));//1个char=1bit 
    printf("%d\n",sizeof(short));//1个short=2bit
    printf("%d\n",sizeof(int));//1个int=4bit
    printf("%d\n",sizeof(long));//1个long=4bit
    printf("%d\n",sizeof(long long));//1个longlong=8bit
    printf("%d\n",sizeof(float));//1个float=4bit
    printf("%d\n",sizeof(double));//1个double=8bit
    return 0;
    }