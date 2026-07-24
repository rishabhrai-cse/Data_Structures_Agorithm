#include<bits/stdc++.h>
using namespace std;
int main(){
//  Duplicates will be present
// But in Sorted order
// Red black tree , AVL tree

multiset<int>s;
s.insert(10);
s.insert(20);
s.insert(10);
s.insert(30);
s.erase(10);  // All the 10's are deleted 

// printing the values

for(auto it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";
}

}