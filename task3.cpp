#include <string>

int wordsCounter(const std::string& str){
    int c = 0;
    for (auto i = str.begin(); i < str.end(); i++)
        if ((*i == ' ') or (*i == ',') or (*i == '.'))
            c++;
    return c + 1;
}