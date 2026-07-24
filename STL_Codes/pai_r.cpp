#include<bits/stdc++.h>
using namespace std;
int main(){

// pair<string,int>p;
// Method 1
// p=make_pair("Rishabh",50);
// Method 2
// p.first="Rishabh";
// p.second=50;

//name,age,weight

pair<string,pair<int,int>>p;

// Method 1
// p.first="Rishabh";
// p.second.first=21;
// p.second.second=60;

// Method 2
p=make_pair("Rishabh",make_pair(21,60));

cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}