#include <iostream>

int main() {

}

float clamp(float x, float l, float h) {
    if (x > l && x < h) return x;
    if (std::abs(x - l) < std::abs(x - h)) return l;
    else return h;
}

float zero_one_mul(float x1, float x2) {
    float x1_corrected = clamp(x1, 0, 1);
    float x2_corrected = clamp(x2, 0, 1);
    return x1_corrected * x2_corrected;
}