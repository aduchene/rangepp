#include <vector>
#include <boost/iterator/iterator_facade.hpp>

using std::vector;

class range{
    private:
        const int begin;
        const int end;
        const int step;
    public:
        range(int end): begin(0),end(end),step(1) {}
        range(int begin, int end, int step=1): begin(begin),end(end),step(step){}

        vector<int> operator()(){
            vector<int> list;
            if(step>0){
                for(int i=begin;i<end;i+=step){
                    list.push_back(i);
                }
            }
            else{
                    for(int i=begin;i>end;i+=step){
                        list.push_back(i);
                    }
            }
            return list;
        }
};
