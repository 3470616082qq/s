#include <stdio.h>

int main(){
    int input=0;
    printf("以下是条件判断运用scanf来调用输入输入不同的选择会出现不同的结果\n");
    printf("1+1=？>:\n");
    scanf("%d",&input);
    if (input==2)
    {
        printf("答对\n");
        input=5;
    }
    else
    {
        printf("答错\n");
    }
    return 0;
}