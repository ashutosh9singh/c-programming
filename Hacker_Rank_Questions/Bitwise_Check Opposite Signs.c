#include <stdio.h>

void Bitwise_Check_Opp_Signs(int n1,int n2);
int main()
{
	int num1,num2;
	scanf("%d",&num1);
	scanf("%d",&num2);
	Bitwise_Check_Opp_Signs(num1,num2);

	return 0;
}
void Bitwise_Check_Opp_Signs(int n1,int n2) {
	int bit1=((n1>>31)&1);
	int bit2=((n2>>31)&1);
	if(bit1==bit2) {
		printf("No");
	}
	else {
	    printf("Yes");
	}
	return;
}
