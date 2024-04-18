#include <stdio.h>

//全局变量
//在main函数外围的被定义的变量被称为全局变量
int a=10;

int main(){ 
    int a=20;
    printf("%d\n",a);//当局部变量和全局变量名字相同时打印会优先打印局部变量否则打印全局变量
    return 0;
}
