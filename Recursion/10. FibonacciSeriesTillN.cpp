#include<bits/stdc++.h>

using namespace std;

// 0 1 1 2 3 5 8 13
int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+ fib(n-2);
}

int main(){
    int n;
    cout<<"How many fib number should be printed? "<<endl;
    cin>>n;
    cout<<fib(n);
  return 0;  
} 