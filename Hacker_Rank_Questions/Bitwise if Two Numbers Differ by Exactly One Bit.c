#include <stdio.h>

int diff_by_one_bit(int num1,int num2);
int main()
{
    int numm1,numm2;
    scanf("%d",&numm1);
    scanf("%d",&numm2);
    diff_by_one_bit(numm1,numm2);

    return 0;
}
int diff_by_one_bit(int num1,int num2){
    int temp=num1^num2;
    
    if(temp!=0 && (temp&(temp-1))==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
