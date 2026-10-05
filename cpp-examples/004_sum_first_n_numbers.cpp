#include <iostream>

int main() {
    int n, sum = 0;
    std::cout << "Enter N: ";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    std::cout << "Sum = " << sum << std::endl;
    return 0;
}
