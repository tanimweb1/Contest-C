#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    while(n--){
 int a,b,c,sum;
 scanf("%d%d%d",&a,&b,&c);    
sum = a+b+c;

if(sum%2==0){
    printf("YES\n");
}
else{
    printf("NO\n");
}

    }

return 0;
}