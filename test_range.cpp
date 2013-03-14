#include "range.hpp"

#include <iostream>
#include <functional>
using namespace std;

int main(){
    auto r=bind(range,9);
    for(int i : r()){
        cout<<i<<endl;
    }
    return 0;
}
