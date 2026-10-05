#include <iostream>

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    if (n % 2 == 0)
        std::cout << n << " is Even." << std::endl;
    else
        std::cout << n << " is Odd." << std::endl;
    return 0;
}
