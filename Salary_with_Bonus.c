#include<stdio.h>
int main(){

char name;
scanf("%s",&name);
double sale,salary,sum,bonus;
scanf("%lf %lf",&salary,&sale);

bonus = (15.0/100.0)*sale; 

sum = salary+bonus;
printf("TOTAL = R$ %0.2lf\n",sum);
return 0;
}