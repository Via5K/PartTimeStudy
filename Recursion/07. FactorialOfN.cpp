#include<bits/stdc++.h>
using namespace std;

long fact(int n){
    if(n<=1) return 1;
    return n* fact(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<fact(n);
    return 0;
}