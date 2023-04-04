#ifndef SALESDATA_H
#define SALESDATA_H
#include <string>

struct Sales_data {
    Sales_data();
    Sales_data(const std::string &s) : bookNo(s), units_sold(3) {}

    std::string bookNo;
    unsigned units_sold = 2;
    double revenue = 3.0;
};

#endif
