#include <iostream>
#include <map>
#include <set>

int main() {
    std::map<int, std::string> m;
    std::set<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (std::set<int>::const_iterator it = a.begin(); it != a.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}
