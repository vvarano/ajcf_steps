
#include <iostream>
#include "calc.hpp"
#include "calcsuper.hpp"
#include <fmt/format.h>

int main()
{
    std::cout << "Hello\n";
    std::cout << add(2, 3) << "\n";
    std::cout << "double de 5 = " << calcul_double(5) << "\n";

    print_curr_date();
    fmt::print("The result is {}.\n", 42);
    return 0;
}
