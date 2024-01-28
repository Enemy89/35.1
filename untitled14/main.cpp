#include <iostream>
#include <initializer_list>

void printValues(std::initializer_list<int> values) {
    std::cout << "Values: ";
    for (const auto& value : values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

int main() {
    printValues({1, 2, 3, 4, 5});
    return 0;
}
