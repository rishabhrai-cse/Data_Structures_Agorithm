#include<bits/stdc++.h>
using namespace std;

// It store data in key-value pair
// It uses Red-black tree or AVL for implementation 
// Insertion , deletion and search operation have logarithmic time complexity .
// (O(logn)) : making them  fast for most use cases . 
// Key should be unique

int main(){
    // map creation 
    // map<int,int>m;
    // m.insert(make_pair(20,30));
    // m.insert(make_pair(30,310));
    // m.insert(make_pair(40,230));
    // m.insert(make_pair(20,230)); // not inserted as key should be unique
    // m.insert(make_pair(50,30));

    // Another method to insert values , also it updates the value 
    // m[100]=60;
    // m[20]=70; // updates the value of key:20

    // Deleting  the elements
    // m.erase(20);

    // printing the values
    // for(auto it=m.begin();it!=m.end();it++){
    //     // cout<<(*it).first<<" "<<(*it).second<<endl;
    //       cout<<it->first<<" "<<it->second<<endl;
    // }



    // Multimap --> duplicates values will be present

     multimap<int,int>m;
    m.insert(make_pair(20,30));
    m.insert(make_pair(30,310));
    m.insert(make_pair(40,230));
    m.insert(make_pair(20,230)); 
    m.insert(make_pair(50,30));

    // printing the values
     for(auto it=m.begin();it!=m.end();it++){
        // cout<<(*it).first<<" "<<(*it).second<<endl;
          cout<<it->first<<" "<<it->second<<endl;
    }

    // Not allowed in multi map
    // m[100]=60;
    // m[20]=70;

}