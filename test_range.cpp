#include "range.hpp"

#include <iostream>
#include <functional>
using namespace std;

int main(){
    vector< decltype(bind(range,9)) > tests;
    tests.push_back(bind(range,9));
    tests.push_back(bind(range,90));
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
