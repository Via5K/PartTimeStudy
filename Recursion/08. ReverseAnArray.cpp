#include<bits/stdc++.h>
using namespace std;

// input = 1 2 3 4 5
// output = 5 4 3 2 1

vector<int> reverse(vector<int>v, int i, int len){
    if(i>=len || len<=1) return v;
    //swap
    int temp =v[i];
    v[i] = v[len];
    v[len] = temp;
    return reverse(v,i+1,len-1);
}
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    vector<int>v; 
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
        // cin>>v[i];
    }
    cout<<"Reversed array is: "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    vector<int>reversed = reverse(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<reversed[i]<<" ";
    }
    return 0;
}

//O(N) Time
//o(N) stack space