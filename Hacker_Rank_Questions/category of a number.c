#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void number_category(int num);
int is_prime(int ij);
int main()
{
    int numm;
    scanf("%d",&numm);
    number_category(numm);

    return 0;
}
int is_prime(int ij){
    if(ij<=1){
        return 0;
    }
    for(int i=2; i*i<=ij; i++){
        if(ij%i==0){
            return 0;
        }
    }
    return 1;
}
void number_category(int num){
    
    if(num>1000 || num<-1000){
        exit(0);
    }
    //category A
    if(num%2==0 && num%3==0 && num%5!=0){
        printf("A");
        exit(0);
    }
    //category B 
    for(int i=2; i<=11; i++){
        if(is_prime(i)){
            for(int j=i+1; j<=11; j++){
                if(is_prime(j)){
                    if(i*j==num){
                        if(num>20){
                            printf("B");
                            exit(0);
                        }
                    }
                }
            }
        }
        
    }
    //category C 
    if(((num%3==0 || num%7==0) && !(num%3==0 && num%7==0))&& num>9 && num<100){
        printf("C");
        exit(0);
    }
    //category D 
    for(int i=0; i*i<=num; i++){
        int temp=i*i;
        if(temp==num){
            if(num<200){
                printf("D");
                exit(0);
            }
        }
    }
    //category E
    printf("E");
}
