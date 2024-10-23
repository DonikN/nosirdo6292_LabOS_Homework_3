#include <iostream>
#include <string>

std::string months[12] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December",
};

int main(void)
{
    std::string birth_month;

    birth_month = "November";
    for(int i = 1; i <= 12; i++)
    {
        if(months[i - 1] == birth_month)
            continue ;
        std::cout << i << " " << months[i - 1] << std::endl;
    }

    return (0);
}
