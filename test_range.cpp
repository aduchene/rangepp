#include "range.hpp"

#include <iostream>
#include <functional>
using namespace std;

int main(){
    vector<range> tests;
    tests.push_back(range(0));
    tests.push_back(range(7));
    tests.push_back(range(67,80));
    tests.push_back(range(67,80,2));
    tests.push_back(range(10,0));
    tests.push_back(range(10,0,-1));
    int i=1;
    for(auto& bound : tests){
        cout<<"Test "<<i++<<": ";
        for(auto num:bound()){
            cout<<" "<<num;
        }
        cout<<endl;
    }
    return 0;
}
