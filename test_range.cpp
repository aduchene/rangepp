#include "range.hpp"

#include <iostream>
#include <vector>
using namespace std;

int main(){
    range test(6);
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

    vector<range> tests;
    tests.push_back(range(10,13));
    tests.push_back(range(1,6,3));
    tests.push_back(range(1,-6,-2));
    int test_no=0;
    for(range r:tests){
        cout<<"Test no "<<test_no++<<": ";
        for(int i:r){
            cout<<" "<<i;
        }
        cout<<endl;
    }
    return 0;
}
