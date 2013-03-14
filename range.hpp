#include <iterator>

class range{
    private:
        const int rbegin;
        const int rend;
        int step_end;
        const int step;
    public:
        range(int end): rbegin(0),rend(end),step(1),step_end(end){}
        range(int begin, int end, int step=1):
            rbegin(begin),rend(end),step(step){
            if((rend-rbegin)%step ==0){
                step_end=end;
            }
            else{
                int nsteps=(int)((rend-rbegin)/step);
                step_end=step*(nsteps+1)+begin;
            }
        }

        class iterator:
            public std::iterator<std::forward_iterator_tag,int>
        {
            private:
                int c;
                range& parent;
            public:
                iterator(int start,range& parent): c(start), parent(parent){}
                int operator*() {return c;}
                const iterator* operator++(){ c+=parent.step; return this; };
                iterator operator++(int){
                    c+=parent.step;
                    return iterator(c-parent.step,parent);
                }
                bool operator==(const iterator& other) {return c==other.c;}
                bool operator!=(const iterator& other) {return c!=other.c;}
        };

        iterator begin(){
            return iterator(rbegin,*this);
        }
        iterator end(){
            return iterator(step_end,*this);
        }
};
