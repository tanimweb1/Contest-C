#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    while(n--){
long long int x,y,xval1,xval2,yval1,rhs,lhs;
scanf("%lld%lld",&x,&y);

xval1 = x*x*x*x;
yval1 = y*y;
xval2 = x*x;
rhs = xval1 + (4*yval1);
lhs = 4 * xval2 * y;

if(rhs==lhs){
    printf("YES\n");
}
else{
    printf("NO\n");
}



    }

return 0;
}