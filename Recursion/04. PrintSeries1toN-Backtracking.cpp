#include<bits/stdc++.h>

using namespace std;


//Using backtracking here means that first the base condition hits, then only the printing should start. 
void series1toN(int n){
    if(n==0) return;
    series1toN(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    // string name;
    cout<<"Enter the value of N?"<<endl;
    cin>>n;
    series1toN(n);
    return 0;
}