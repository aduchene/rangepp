#include <iterator>

template<typename value_t>
class range{
    private:
        const value_t rbegin;
        const value_t rend;
        value_t step_end;
        const value_t step;
    public:
        range(value_t end): rbegin(0),rend(end),step(1),step_end(end){}
        range(value_t begin, value_t end, value_t step=1):
            rbegin(begin),rend(end),step(step){
            if(static_cast<int>((rend-rbegin)/step)==((rend-rbegin)/step)){
                step_end=end;
            }
            else{
                value_t nsteps=(int)((rend-rbegin)/step);
                step_end=step*(nsteps+1)+begin;
            }
        }

        class iterator:
            public std::iterator<std::random_access_iterator_tag,value_t>
        {
            private:
                value_t c;
                range& parent;
            public:
                iterator(value_t start,range& parent): c(start), parent(parent){}
                value_t operator*() {return c;}
                const iterator* operator++(){ c+=parent.step; return this; };
                iterator operator++(int){
                    c+=parent.step;
                    return iterator(c-parent.step,parent);
                }
                bool operator==(const iterator& other) {return c==other.c;}
                bool operator!=(const iterator& other) {return c!=other.c;}
                iterator operator+(int s) {
                    return iterator(parent.step*s+c,parent);
                }
                iterator operator-(int s){
                    return iterator(c-parent.step*s,parent);
                }
                const iterator* operator--(){ c-=parent.step; return this;}
                iterator operator--(int){
                    c-=parent.step;
                    return iterator(c-parent.step,parent);
                }
        };

        iterator begin(){
            return iterator(rbegin,*this);
        }
        iterator end(){
            return iterator(step_end,*this);
        }

        value_t operator[](int s){
            return rbegin+s*step;
        }

        int size(){
            return (int)((rend-rbegin)/step);
        }
};
