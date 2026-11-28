#include <stdio.h>

int multiply_by_7(int n);
int main()
{
    int num;
    scanf("%d",&num);
    int mul7=multiply_by_7(num);
    printf("%d",mul7);

    return 0;
}
int multiply_by_7(int n){
    int temp=n;
    temp=(n<<3)-n;
    return temp;
}
