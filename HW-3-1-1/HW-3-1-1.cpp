#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = { 4, 7, 9, 14, 12 };

    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int num) {
        return (num % 2 != 0) ? num * 3 : num;
        });

    std::for_each(numbers.begin(), numbers.end(), [](const int& num) {
        std::cout << num << " ";
        });
    std::cout << std::endl;

    return 0;
}
