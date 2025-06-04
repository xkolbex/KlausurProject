#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

void f_on_vector(std::vector<double>& v);
std::vector<double>::const_iterator min_index(const std::vector<double>& v);
std::vector<double>::const_iterator min_index_2(const std::vector<double>& v);

int main() {
    std::vector<double> v = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 0.005};

    std::cout << *(min_index(v)) << std::endl;
    std::cout << *(min_index_2(v)) << std::endl;
    return 0;
}

void f_on_vector(std::vector<double>& v) {
    for (double& x : v) {
        x = std::pow(x - 0.35, 2);
    }
}

std::vector<double>::const_iterator min_index(const std::vector<double>& v) {
    return std::min_element(v.begin(), v.end());
}

std::vector<double>::const_iterator min_index_2(const std::vector<double>& v) {
    if (v.empty()) return v.end();

    std::vector<double>::const_iterator min_it = v.begin();

    for (std::vector<double>::const_iterator it = v.begin(); it != v.end(); ++it) {
        if (*it < *min_it) {
            min_it = it;
        }
    }
    return min_it;
}