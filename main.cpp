#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <list>

std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);
std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);
int wordsCounter(const std::string& str);
std::map<std::string, int> wordsMapCounter(const std::string& str);
std::vector<std::string> uniqueWords(const std::string& str);
int diffWordsCounter(const std::string& str);
std::list<int> reverseNum(std::list <int>& t);
std::vector<int> plusesDeleter(std::vector<int>& v);
std::list<int> Sort(std::list<int>& s);

int main() {
    std::vector<int> v = {6, 8, 1, 2, 3, 4, 5};
    std::vector<int>::iterator it = Find(v.begin(), v.end(), 2);
    std::cout << *it << std::endl;//task1

    std::vector<int> v2 = {1, 2, 3, 4, 5};
    std::vector<int>::iterator it2 = findInSorted(v.begin()+1, v.end(), 3);
    std::cout << *it2 << std::endl;//task2

    int words = wordsCounter("can you can,sda.dd");
    std::cout << words << std::endl;//task3

    std::map<std::string, int> wordsmap = wordsMapCounter("can you can");
    for (const auto & [w, c] : wordsmap)
        std::cout << "[" << w << "] " << c << std::endl;//task4

    std::vector<std::string> unique = uniqueWords("can you can dfkjs ddnf");
    for (std::string i : unique)
        std::cout << i << " ";//task5
    std::cout << std::endl;

    int words3 = diffWordsCounter("can you can a can");
    std::cout << words3 << std::endl;//task6

    std::list<int> nums = {1, 5, 4, -3};
    nums = reverseNum(nums);
    for (int i : nums)
        std::cout << i << " ";//task7
    std::cout << std::endl;

    std::vector<int> v3 = {1, 0, -8, -9, 0, 10, 23, -7};
    v3 = plusesDeleter(v3);
    for (int i : v3)
        std::cout << i << " ";//task8
    std::cout << std::endl;

    std::list<int> numss = {1, 5, 4, -3};
    numss = Sort(numss);
    for (int i : numss)
        std::cout << i << " ";//task9
    std::cout << std::endl;
    return 0;
}
