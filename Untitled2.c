#include<stdio.h>
int main(){


int n,m,ans;
scanf("%d%d",&n,&m);

ans = n*m;

if(ans%2==0){
    printf("Even\n");
}
else{
    printf("Odd\n");
}

return 0;
}
