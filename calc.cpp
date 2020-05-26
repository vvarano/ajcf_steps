
#include <chrono>
#include <date/date.h>
#include <iostream>
#include "calc.hpp"

int mavar_globale;

int add(int i, int j)
{
    return i + i;
}

void print_curr_date()
{
    auto num_secs_after_1970 = std::chrono::system_clock::now();
    auto num_jours_after_1970 = date::floor<date::days>( num_secs_after_1970 );
    auto date_year_month_day = date::year_month_day( num_jours_after_1970 );

    std::cout << date_year_month_day << "\n";
}