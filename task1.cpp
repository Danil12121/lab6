#include <vector>

std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el){
    for (std::vector<int>::iterator i = first; i < last; ++i)
        if (*i == el)
            return i;
    return last;
}