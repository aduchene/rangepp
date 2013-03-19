rangepp
=======
Pythonic ranges for C++
-----------------------

Rangepp is designed to take advantage of C++11's for-each syntax with Python style ranges.

Usage is simple:

    #include "range.hpp"
    using rangepp::range;
    ...
    for(int i:range(9)){
        ...
    }
    ...
    for(int j:range(0,-9,-3){
        ...
    }

Rangepp also supports ranges over floating points:

    for(double i:range(0,1,.001){
        ...
    }

See the test\_range.cpp for more examples or http://xanduchene.wordpress.com/2013/03/17/pythonic-ranges-in-c11/ to see how it was developed.

Rangepp is MIT licensed and has no dependencies, so use it freely. Suggestions welcomed.
