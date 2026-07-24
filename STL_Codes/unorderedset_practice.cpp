#include<bits/stdc++.h>
using namespace std;
// It contain only unique elements
// Search , insert and removal have  average constant time complexity
// It uses hashing technique to achieve it 
int main(){

// unordered_set<int>s;
// s.insert(10);
// s.insert(20);
// s.insert(30);
// s.insert(15);
// s.insert(11);
// s.insert(10);



// if i want that duplicates elements are also present
unordered_multiset<int>s;
s.insert(10);
s.insert(20);
s.insert(30);
s.insert(15);
s.insert(11);
s.insert(10);

// printing the elements

for(auto it=s.begin(); it!=s.end();it++){
cout<<*it << " ";

}

// set , multiset , unordered_set , unordered_multiset
// set : unique elements , sorted
// multiset : sorted and duplicates will be present
// unordered_set : unique elements is present
// unordered_multiset : elements in any order , duplicates will be present

}