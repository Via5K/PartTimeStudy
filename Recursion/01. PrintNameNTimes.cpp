#include<bits/stdc++.h>

using namespace std;

void printName(int n, string name){
    if(n==0) return;
    cout<<": My Name is : "<<name<<endl;
    printName(n-1,name);
}

int main(){
    int n;
    string name;
    cout<<"How many times should Name be printed?"<<endl;
    cin>>n;
    cout<<"What is your name? "<<endl;
    cin>>name;
    printName(n,name);
    return 0;
}


