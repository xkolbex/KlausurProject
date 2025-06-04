#include <iostream>
#include <limits>

class Statistic {
private:
    double min;
    double max;
    double sum;

public:
    Statistic() : min(std::numeric_limits<double>::max()), max(std::numeric_limits<double>::min()), sum(0.0) {}
    void add_new_value(const double value) {
        if (value < min) min = value;
        if (value > max) max = value;
        sum += value;
    }

    double get_min() const {return min;};
    double get_max() const {return max;};
    double get_sum() const {return sum;};

    void print() const {
        std::cout <<    "Min: " << min << std::endl
                  <<    "Max: " << max << std::endl
                  <<    "Sum: " << sum << std::endl;
    }
};


int main() {
    Statistic test_statistic;
    test_statistic.add_new_value(1.0);
    test_statistic.add_new_value(2.0);
    test_statistic.add_new_value(3.0);
    test_statistic.add_new_value(4.0);
    test_statistic.print();


    return 0;
}

