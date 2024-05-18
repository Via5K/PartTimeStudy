#include<bits/stdc++.h>

using namespace std;

//FUNCTION RECURSION CODE...
int sumOf(int n){
    if(n==0) return 0;
    return n+sumOf(n-1);
}


//PARAMTERIZED FUNTION
// void sumOf(int n, int sum){
//     if(n==0){
//         cout<<"sum is:"<<sum;
//         return;
//     }
//     sumOf(n-1,sum+n);
// }



int main(){
    int n,sum=0;
    cout<<"Enter the value of N?"<<endl;
    cin>>n;
    sum = sumOf(n);
    cout<<"Sum is: "<<sum;
    // sumOf(n,0);
    
    return 0;
}


