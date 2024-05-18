#include<bits/stdc++.h>
using namespace std;

bool pal(string s, int i, int n){
    if(i>=n) return true;
    return s[i]==s[n]?pal(s,i+1,n-1):false;
}

int main(){
    string s;
    cout<<"Enter the string: "<<endl;
    cin>>s;
    cout<< "String "<<s<<" is Palindrome? "<<pal(s,0,s.length()-1)<<endl;
    return 0;
}