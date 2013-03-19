/* test_range.hpp
 #                                                                               
 # Copyright (c) 2013 Alexander Duchene <aduche4@tigers.lsu.edu>                                                     
 #                                                                              
 # This piece of software was created as part of the Drosophila  Population 
 # Genomics Project opensource agreement.
 # 
 # Permission is hereby granted, free of charge, to any person obtaining a copy 
 # of this software and associated documentation files (the "Software"), to deal
 # in the Software without restriction, including without limitation the rights 
 # to use, copy, modify, merge, publish, distribute, sublicense, and/or sell    
 # copies of the Software, and to permit persons to whom the Software is        
 # furnished to do so, subject to the following conditions:                     
 # 
 # The above copyright notice and this permission notice shall be included in all
 # copies or substantial portions of the Software.
 #
 # THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 # IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 # FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 # AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 # LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 # OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 # SOFTWARE.
 */

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
