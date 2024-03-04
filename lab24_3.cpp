#include <iostream>
#include <set>

using namespace std;

int count(const int* data, size_t size) {
    set<int> uniqueNumbers(data, data + size);
    return uniqueNumbers.size();
}

