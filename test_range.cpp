#include "range.hpp"

#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout<<"Printing range(20):";
    for(int i:range(20)){
        cout<<" "<<i;
    }
    cout<<endl;
    return 0;
}
