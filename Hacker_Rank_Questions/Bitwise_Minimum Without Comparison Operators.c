#include <stdio.h>

void Bitwise_Minimum(int n1,int n2);
int main()
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    Bitwise_Minimum(num1,num2);

    return 0;
}
void Bitwise_Minimum(int n1,int n2){
    int diff=n1-n2;
    int k=(diff>>31) & 1;
    int big_num;
    int small_num;
    if(k==1){
        big_num=n2;
        small_num=n1;
    }
    else{
        big_num=n1;
        small_num=n2;
    }
    printf("%d",small_num);
    return;
}
