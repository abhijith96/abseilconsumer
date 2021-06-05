#include <iostream>
#include <absl/strings/numbers.h>

int main() {
    std::string  boolean_string = "true";
    bool bool_value = false;
    auto flag = absl::SimpleAtob(boolean_string, &bool_value);
    std::cout << "Hello, World!" << boolean_string << std::endl;
    if (!flag) {
        if (bool_value) {
            std::cout << "bool value is true\n";
        } else {
            std::cout << "bool value is false\n";
        }
    }
    return 0;
}
