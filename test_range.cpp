#include "range.hpp"

#include <iostream>
#include <vector>
using namespace std;

int main(){
    range<int> test(6);
    for(auto it=test.begin(); it!=test.end(); ++it){
        cout<<" "<<*it;
    }
    cout<<endl;
    for(int i:test){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto it=begin(test); it!=end(test); ++it){
        cout<<" "<<*it;
    }
    cout<<endl;

    vector<range<int>> tests;
    tests.push_back(range<int>(10,13));
    tests.push_back(range<int>(1,6,3));
    tests.push_back(range<int>(1,-6,-2));
    int test_no=0;
    for(range<int> r:tests){
        cout<<"Test no "<<test_no++<<": ";
        for(int i:r){
            cout<<" "<<i;
        }
        cout<<endl;
    }
    range<int> r(90,-30,-6);
    cout<<r[8]<<endl;
    cout<<*(r.begin()+8)<<endl;
    cout<<*(r.end()-(r.size()-8))<<endl;
    range<float> fr(0,3,.23);
    for(auto num:fr){
        cout<<num<<" ";
    }
    cout<<endl;
    fr=range<float>(0,.99,.33);
    for(auto num:fr){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}
