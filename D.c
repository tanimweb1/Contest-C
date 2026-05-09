#include<stdio.h>
int main(){

   int n;
   scanf("%d",&n);
   
   while(n--){
int a,b;
scanf("%d%d",&a,&b);

for(int i =1;i<=(a*2==b)||(b*2==a);i++){
    if(a==b){
        printf("YEs\n");
    }
}



   }
return 0;
}