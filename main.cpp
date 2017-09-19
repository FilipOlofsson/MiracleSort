#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

bool isSorted(std::vector<int> list) {
    return std::is_sorted(list.begin(), list.end());
}

int main() {
    std::vector<int> list;
    srand(time(NULL));
    for(int i = 0; i < 1000; i++) {

        int toPush = rand() % 1000 + 1;
        list.push_back(toPush);
    }

    while(!isSorted(list)) {

    }

    std::cout << "List has successfully been sorted!" << std::endl;

    return 0;
}