#include <stdio.h>
void unset_bit(int num, int bit);
int main()
{
    int numm;
    int bitt;
    scanf("%d",&numm);
    scanf("%d",&bitt);
    unset_bit(numm,bitt);

    return 0;
}
void unset_bit(int num, int bit){
    int n=1;
    n=~(n<<bit);
    num=num&n;
    printf("%d",num);
}
