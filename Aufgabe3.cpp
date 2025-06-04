#include <iostream>

void f1(int a, int &b) {
    a -= 5;
    b++;
}

int f2(int a, int b) {
    //a = -2, b = 2
    a += 3; // a = 1, b = 2
    // b++;
    const int added = a + b; // added = 1 + 2 = 3
    return added - 1; // return 3 - 1 = 2
}

void print(const int a, const int b) {
    std::cout << "(" << a << "," << b << ")\n";
}

int main() {
    int n = 4, b = -3;
    print(b, n);
    f1(n, b);
    print(b, n); // n=4, b=-2
    n -= 2; // n=2
    b = f2(b, n) * 2; //2 * 2 = 4 = b
    print(n, 5 + b);

    return 0;
}

/*
 * Ausgabe:
 * (-3,4)
 * (-2,4)
 *(2,9)
 */