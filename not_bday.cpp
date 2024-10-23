#include <iostream>

int main(void)
{
    int birth_day;
    int i;

    birth_day = 3;
    i = 1;
    while (i <= 32)
    {
        std::cout << i << std::endl;
        if (i == birth_day)
            break ;
        i++;
    }

    return (0);
}
