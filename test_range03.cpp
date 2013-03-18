#include <iostream>
using std::cout;
using std::endl;

#include "range.hpp"

int main(){
    cout<<"Printing range(0,8,3) c++03 style: ";
    range_impl<int> rint(0,8,3);
    for(range_impl<int>::iterator it=rint.begin();it!=rint.end();++it){
        cout<<" "<<*it;
    }
    cout<<endl;
    return 0;
}
