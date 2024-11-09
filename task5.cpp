#include <string>
#include <vector>
#include <map>

std::map<std::string, int> wordsMapCounter(const std::string& str);

std::vector<std::string> uniqueWords(const std::string& str){
    std::map<std::string, int> wordsmap = wordsMapCounter(str);
    std::vector<std::string> res;
    for (const auto& [st, i]: wordsmap)
        if (i == 1)
            res.push_back(st);
    return res;
}