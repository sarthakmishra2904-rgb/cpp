#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    int org=n;
    while(n>0){
   int ld = n%10;
    sum =sum+(ld*ld*ld);
    n =n/10;
    }

    if(sum==org)cout<<"True";
    else cout<<"False";
}