#include <iostream>

#include "employee.hpp"

int main() {
    Records::Employee first_employee{"Maksim", "Drachov"};
    // #ifdef __cpp_lib_format
    // std::cout << "std::format is supported" << std::endl;
    // #else
    // std::cout << "std::format is not supported" << std::endl;
    // #endif

    return 0;
}
