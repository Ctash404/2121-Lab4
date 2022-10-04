#include <vector>
#include "Searches.h"
#include <iostream>

int main()
{
    std::vector<int> intTest {1, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55};
    int a = linearSearch(intTest, 21);
    //ASSERT_EQ(a,-1);
    if (a != -1)
    {
        std::cout << "expected/correct value for a is -1, actual value when testing " << a << ".\n";
        return 1;
    }

    return 0;
}