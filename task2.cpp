#include <vector>


std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el){
    std::vector<int>::iterator l = first, r = last;
    std::vector<int>::iterator m = r;
    while (l <= r){
        m = l + (r-l)/2;
        if(*m > el)
            r = m;
        if(*m < el)
            l = m + 1;
        if (*m == el)
            return m;
    }
    if (*m == el)
        return m;
    return last;
}