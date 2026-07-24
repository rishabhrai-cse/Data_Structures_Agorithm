#include<bits/stdc++.h>
using namespace std;
// Only unique value will be stored
// Stored value will be in sorted order (ascending order)
// insertion , deletion and search operation have logarithmic time
// We can sort it in descendin oredr also using greater <type>
// Generally implemented using Red-Black Tree
int main(){
// Ascending order
// set<int>s;

// Descending order
set<int,greater<int>>s;

// insert
s.insert(10);
s.insert(20);
s.insert(110);
s.insert(200);
s.insert(10);
s.insert(20);
s.insert(110);
s.insert(210);

// Search the element   --> find() => return the iterator of that number 

if(s.find(200)!=s.end()){
    cout<<"Present\n";
} else{
    cout<<"Absent\n";
}

// Delete the elements
s.erase(200);

cout<<s.size();

// Printing the value
// for(auto it=s.begin();it!=s.end();it++){
//     cout<<*it<<" ";
// }

}