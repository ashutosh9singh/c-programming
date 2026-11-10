#include <stdio.h>
#include <ctype.h> //to use isdigit() 

int main()
{
    char a;
    printf("enter a char: ");
    scanf("%c",&a);
    if (isdigit(a)){
        printf("you have entered number, exiting code");
    }
    else{
        printf("%d",a);
    }
    

    return 0;
}
