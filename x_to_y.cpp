#include <iostream>

int main(void)
{
    int indexno;
    int x;
    int y;
    int z;

    indexno = 56477;
    x = indexno / 10 % 10;
    y = indexno % 10;

    if (x > y)
    {
        z = x;
        x = y;
        y = z;
    }
    else if (x == y)
    {
        y += 2;
    }
    for (int i = 7; i <= 9; i++) {
        std::cout << i << std::endl;
    }
    return (0);
}
