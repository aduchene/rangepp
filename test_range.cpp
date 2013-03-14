#include "range_naive.hpp"

#include <iostream>
using namespace std;

int main(){
    for(int i : range(9)){
        cout<<i<<endl;
    }
    return 0;
}
