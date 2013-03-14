#include <vector>
using std::vector;

vector<int> range(int end){
    vector<int> list;
    for(int i=0;i<end;i++){
        list.push_back(i);
    }
    return list;
}
