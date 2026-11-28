#include <stdio.h>

void Complementary_check(int n1 , int n2);
int main()
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    Complementary_check(num1, num2);

    return 0;
}
void Complementary_check(int n1,int n2){
    if(n1==(~n2)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return;
}
