#include <list>

std::list<int> reverseNum(std::list <int>& t){
    std::list<int> res;
    for (int i: t){
        res.push_back(i*(-1));
        res.push_back(i);
    }
    return res;
}