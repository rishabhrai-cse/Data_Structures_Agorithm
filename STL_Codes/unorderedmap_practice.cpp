#include<bits/stdc++.h>
using namespace std;
// Uniques keys are present , duplicate keys are not allowed
// But oredered is not valid
// Implemented using Hashing
// insert ,search , delete in constant time execution

int main(){

unordered_map<int,int>m;
m.insert(make_pair(20,30));
m.insert(make_pair(30,310));
m.insert(make_pair(40,230));
m.insert(make_pair(20,230)); 
m.insert(make_pair(50,30));

 for(auto it=m.begin();it!=m.end();it++){
        // cout<<(*it).first<<" "<<(*it).second<<endl;
          cout<<it->first<<" "<<it->second<<endl;
    }


}