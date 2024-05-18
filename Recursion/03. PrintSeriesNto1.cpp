#include<bits/stdc++.h>

using namespace std;

void seriesNto1(int n){
    if(n==0) return;
    cout<<n<<" ";
    seriesNto1(n-1);
}

int main(){
    int n;
    // string name;
    cout<<"Enter the value of N?"<<endl;
    cin>>n;
    seriesNto1(n);
    return 0;
}


