#include "range.hpp"
using namespace rangepp;

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
    return 0;
}
