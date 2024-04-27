#include <stdio.h>
//以下是c语言中常见的关键字
//关键字不能做变量名字

//typedef的用法
typedef unsigned int u_int;//这里我们用typedef来声明unsigned int=u_int在以后我们需要用到unsigned int的时候我们直接输入u_int就代表了unsigned int
int main(){
    // typedef是用来类型定义的为了方便使用长串代码而生的
    //以下是我们需要经常用到的固定长串代码
    unsigned int num=100;// unsiged是用来修饰变量的但是太长了我们就可以用到typedef需要在main外部声明
    printf("%d是unsigned int num的值\n",num);
    u_int num2=200;
    printf("%d是缩减的unsigned int后变成u_int后方便使用的用法所定义并且得到的值",num2);
   return 0;//return为这个main函数执行结束后返回什么
}