#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){

// Taking input    
    int n;
    cin>>n;
vector<int>v(n);

// Putting the values in vector

for(int i=0;i<n;i++){
    cin>>v[i];
}

// Printing the element using simple for loop 

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";;
}

//  Printing the element using iterator 

for(auto it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";;
}

// Another method for printing the value of vector
for(auto i:v)
cout<<i<<" ";
}
