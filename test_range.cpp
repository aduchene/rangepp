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
    cout<<"Printing range(5,9):";
    for(int i:range(5,9)){
        cout<<" "<<i;
    }
    cout<<endl;
    cout<<"Printing range(1.5, 7.5):";
    for(float i:range(1.5,7.5)){
        cout<<" "<<i;
    }
    cout<<endl;
    cout<<"Printing range(30,20,-1):";
    for(int i:range(30,20,-1)){
        cout<<" "<<i;
    }
    cout<<endl;
    cout<<"Printing range(1,10,.5):";
    for(float i:range(1,10,.5)){
        cout<<" "<<i;
    }
    cout<<endl;
    cout<<"Printing range(99,98,-.1):";
    for(float i:range(99,98,-.1)){
        cout<<" "<<i;
    }
    cout<<endl;

    cout<<"Printing range(0,8,3) c++03 style: ";
    range_impl<int> rint(0,8,3);
    for(range_impl<int>::iterator it=rint.begin();it!=rint.end();++it){
        cout<<" "<<*it;
    }
    cout<<endl<<"and again: ";
    for(range_impl<int>::iterator it=begin(rint);it!=end(rint);++it){
        cout<<" "<<*it;
    }
    cout<<endl;
    return 0;
}
