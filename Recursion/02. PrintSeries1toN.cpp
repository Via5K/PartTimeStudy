#include<bits/stdc++.h>

using namespace std;

void series1toN(int i, int n){
    if(i>n) return;
    cout<<i<<" ";
    series1toN(i+1,n);
}

int main(){
    int n;
    // string name;
    cout<<"Enter the value of N?"<<endl;
    cin>>n;
    series1toN(1,n);
    return 0;
}


