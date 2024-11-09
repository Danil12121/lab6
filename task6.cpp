#include <string>
#include <map>

std::map<std::string, int> wordsMapCounter(const std::string& str);
int diffWordsCounter(const std::string& str){
    std::map<std::string, int> wordsmap = wordsMapCounter(str);
    return wordsmap.size();
}