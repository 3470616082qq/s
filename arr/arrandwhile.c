#include <stdio.h>
//数组 一组相同元素的集合
int main(){
    //以下是数组的搭建
    int arr[10]={0,1,2,3,4,5,6,7,9,10};
    char ch[5]={'a','b','c'};
    //以下是while循环
    //先定义一个类型以便后面进行打印
    int i=0;
    //while()括号里进行条件判断
        while (i<10)//如果条件不达到i<10则执行“{}”里的代码然后重复循环这个while直到达到条件跳出循环
        {
            // printf("第%d\n",arr[i]);
            printf("第%d次循环arr=%d\n",i+1,arr[i]);
            i++;
        }
        printf("循环完毕循环已跳出\n");
    return 0;
}

