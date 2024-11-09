#include <list>

std::list<int> Sort(std::list<int>& s){
    for (auto i = s.begin(); i != s.end(); i++)
        for (auto j = i; j != s.end(); j++){
            if (*i > *j) {
                int prom = *i;
                *i = *j;
                *j = prom;
            }
        }
    return s;
}