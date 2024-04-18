#include <stdio.h>
//定义函数/方法
//使用x y分别表示接收的值
int Add(int x,int y){
    // 这里面是方法
    //先把要返回的值“z”给定义了
    int z=0;
    //然后这里是这个方法
    z=x+y;
    // 最后返回最终值
    return z;
}
int main(){ 
    //在一般情况下我们想让两数相加我们可以使用定义后相加
    int a=0;
    int b=0;
    // //“&”操作符中代表取地址
    // scanf("%d%d",&a,&b);
    // int sum=a+b;
    //再进行sum值的输出
    // printf("%d\n",sum);
    //这样太麻烦我们需要定义一个方法/函数以便以后我们要重复使用一个类似的法则就直接调用
    printf("第一次的值\n");
    scanf("%d",&a);
    printf("第二次的值\n");
    scanf("%d",&b);
    //先把值传到方法然后在main函数外定义这个方法
    int sum=Add(a,b);
    //这里用来输出sum
    printf("最终值%d\n\n",sum);
    return 0;
} 