#include <stdio.h>
//作用域与生命周期
int a=8;
int main(){
    printf("a的全局变量在此时的值%d\n",a);
    {
        int b=5;
        a=b;
        printf("a在小周期的值%d\n",a);
    }
    printf("最终a的值%d\n",a);
    // 作用域  一个量在哪里起作用这个地方就是这个量的作用域
    return 0;
}