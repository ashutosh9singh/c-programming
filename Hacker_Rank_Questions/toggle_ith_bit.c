#include <stdio.h>
void toggle_bit(int num, int bit);
int main()
{
    int numm;
    int bitt;
    scanf("%d",&numm);
    scanf("%d",&bitt);
    toggle_bit(numm,bitt);

    return 0;
}
void toggle_bit(int num, int bit){
    int n=1;
    n=(n<<bit);
    num=num^n;
    printf("%d",num);
}
