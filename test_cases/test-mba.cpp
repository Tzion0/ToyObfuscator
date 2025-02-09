#include <iostream>

int main() {
    int a = 10, b = 20, c = 5, d = 2;

    // Complex one-liner arithmetic operation
    int result = ((a + b - c * c) / c + a + b * (d * c)) ^ ((a & b) | (c ^ d));

    // Print the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}
