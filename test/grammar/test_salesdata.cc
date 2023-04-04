#include "salesdata.h"
#include <iostream>

Sales_data::Sales_data() = default;

int main() {
    Sales_data sd1;
    std::cout << "units_sold = " << sd1.units_sold << std::endl;

    Sales_data sd2("abc");
    std::cout << "units_sold = " << sd2.units_sold << std::endl;

    return 0;
}

