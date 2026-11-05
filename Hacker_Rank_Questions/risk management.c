#include <stdio.h>
#include <stdlib.h>

void Risk_Portfolio(int age, int annual_income, int risk_tolerance);
int main()
{
    int agee;
    scanf("%d",&agee);
    int annual_incomee;
    scanf("%d",&annual_incomee);
    int risk_tolerancee;
    scanf("%d",&risk_tolerancee);
    
    Risk_Portfolio(agee,annual_incomee,risk_tolerancee);
    
    return 0;
}
void Risk_Portfolio(int age, int annual_income, int risk_tolerance){
    
    //constraints
    if(age>100 || age<0 || annual_income>1000000 || annual_income<0 || risk_tolerance>4 || risk_tolerance<0){
        exit(0);
    }
    //low risk case
    if((age>50 && !(annual_income>75000 && risk_tolerance==3)) ||(age>30 && annual_income<=30000 && (risk_tolerance==1 || risk_tolerance==2))){
        printf("Low Risk Portfolio: Suitable for conservative investments.\n");
        exit(0);
    }
    //medium risk case
    if((age>=30 && age<=50) && annual_income<=75000 && (risk_tolerance==2 ) 
    ||((age>=30 && age<=50) && annual_income>75000 && (risk_tolerance==1 || risk_tolerance==2))){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.\n");
        exit(0);
    }
    //high risk 
    if(((age<30) || ((age>=30 && age<=50) && annual_income>75000 && risk_tolerance==3)) 
      || ((age>50) && risk_tolerance==3 && annual_income>75000)){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");
        exit(0);
    }
}
