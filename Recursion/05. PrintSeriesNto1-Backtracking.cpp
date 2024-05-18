#include<bits/stdc++.h>

using namespace std;

void seriesNto1(int i, int n){
    if(i>n) return;
    seriesNto1(i+1, n);
    cout<<i<<" ";
}

int main(){
    int n;
    // string name;
    cout<<"Enter the value of N?"<<endl;
    cin>>n;
    seriesNto1(1,n);
    return 0;
}