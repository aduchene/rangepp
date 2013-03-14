#include "range.hpp"

#include <iostream>
#include <functional>
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

    return 0;
}
