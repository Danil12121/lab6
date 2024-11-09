#include <string>
#include <map>
#include <iostream>

std::map<std::string, int> wordsMapCounter(const std::string& str){
    std::string st;
    std::map<std::string, int> res;
    std::string str2 = str + '.';
    for (auto i = str2.begin(); i < str2.end()+1; i++){

    if ((*i == ' ') or (*i == ',') or (*i == '.')) {
            if (res.contains(st))
                res[st] += 1;
            else
                res[st] = 1;
            st = "";
        }
        else st += *i;
}
    return res;
}