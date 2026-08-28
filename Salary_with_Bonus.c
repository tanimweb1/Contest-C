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










#include<stdio.h>
int main(){
int T;
scanf("%d",&T);

    while(T--){

int a,b,c,sum,sub;
scanf("%d%d%d",&a,&b,&c);

sum = a+b;
sub  = a-b;

if(sum==c){
    printf("+\n");
}
else if(sub ==c){
    printf("-\n");
}








    }
return 0;
}
