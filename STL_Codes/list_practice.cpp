#include<bits/stdc++.h>
using namespace std ;
int main(){

    // Push_front , Push_back
    // Size()
    // Po_front() , Pop_back()
    list<int>l1;
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(20);
    l1.push_front(15);
    // l1.pop_back();
    // l1.pop_front();
    // cout<<l1.front()<<" "<<l1.back()<<endl;
    // cout<<l1.size();

    // Printing all the elements of the list
    // list<int>::iterator = auto
    for(auto it=l1.begin();it!=l1.end();it++){
        cout<<*it<<" ";
    }

}