
#include<stdio.h>
int main(){
    // 普通的选择算法
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int k ;
    printf("请输入要查找的数字:\n");
    scanf("",&k);
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for ( i = 0; i < 10; i++)
    {
        /* code */
        if(k==arr[i]){
            printf("找到了,角标为%d\n",i);
        }
    }
    


    return 0;
}