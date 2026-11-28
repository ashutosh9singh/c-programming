#include <stdio.h>

void Bitwise_AND(int n1, int n2);
int main()
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    Bitwise_AND(num1, num2);

    return 0;
}
void Bitwise_AND(int n1, int n2){
    printf("%d",(~((~n1)|(~n2))));//You can mimic bitwise AND (&) without using the & operator by using De Morgan's Law (~(~a | ~b)), or by using bit shifts (>> and <<) when checking for multiples of 4.
    return;
}
