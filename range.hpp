#include <iterator>

template<typename value_t>
class range{
    private:
        value_t rbegin;
        value_t rend;
        value_t step;
        int step_end;
    public:
        range(value_t end): rbegin(0),rend(end),step(1),step_end(end){}
        range(value_t begin, value_t end, value_t step=1):
            rbegin(begin),rend(end),step(step){
                step_end=(rend-rbegin)/step;
                if(rbegin+step_end*step != rend){
                    step_end++;
                }
        }

        class iterator:
            public std::iterator<std::random_access_iterator_tag,value_t>
        {
            private:
                value_t current_value;
                int current_step;
                range& parent;
            public:
                iterator(int start,range& parent): current_step(start), parent(parent){current_value=parent.rbegin+current_step*parent.step;}
                value_t operator*() {return current_value;}
                const iterator* operator++(){
                    current_value+=parent.step;
                    current_step++;
                    return this;
                }
                const iterator* operator++(int){
                    current_value+=parent.step;
                    current_step++;
                    return this;
                }
                bool operator==(const iterator& other) {
                    return current_step==other.current_step;
                }
                bool operator!=(const iterator& other) {
                    return current_step!=other.current_step;
                }
                iterator operator+(int s) {
                    iterator ret=*this;
                    ret.current_step+=s;
                    ret.current_value+=s*parent.step;
                    return ret;
                }
                iterator operator-(int s){
                    iterator ret=*this;
                    ret.current_step-=s;
                    ret.current_value-=s*parent.step;
                    return ret;
                }
                const iterator* operator--(){
                    current_value-=parent.step;
                    current_step--;
                    return this;}
                iterator operator--(int){
                    iterator old=*this;
                    current_value-=parent.step;
                    current_step--;
                    return old;
                }
        };

        iterator begin(){
            return iterator(0,*this);
        }
        iterator end(){
            return iterator(step_end,*this);
        }

        value_t operator[](int s){
            return rbegin+s*step;
        }

        int size(){
            return step_end;
        }
};
