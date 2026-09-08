#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;

int a[n];
for(int i = 0; i<n;i++){
cin>>a[i];
}
int m,count=0;
cin>>m;

for(int i = 0;i<n;i++){
    if(a[i]==m){
        
        cout<<i<<endl;
        count++;
        break;
    
    }

}



if(count == 0){
        cout<<"-1"<<endl;
       
    }




    return 0;
}