#include <iterator>

class range{
    private:
        const int rbegin;
        const int rend;
        const int step;
    public:
        range(int end): rbegin(0),rend(end),step(1) {}
        range(int begin, int end, int step=1): rbegin(begin),rend(end),step(step){}

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
            return iterator(rend,*this);
        }
};
