#include <vector>

std::vector<int> plusesDeleter(std::vector<int>& v){
    std::vector<int> res;
    for (int i: v)
        if (i <= 0)
            res.push_back(i);
    return res;
}