#include <stdio.h>
//枚举常量
enum day 
{
    Monday,
    tuesday,
    wednesday,
    thursday,   
};
int main(){
    enum day s=Monday;//枚举常量不可改变 一般用来做固定选项、
    //以下是枚举数组常量的值 从0开始
    printf("%d\n",Monday);
    printf("%d\n",tuesday);
    printf("%d\n",wednesday);
    printf("%d\n",thursday);
    return 0;
}