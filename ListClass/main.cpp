#include <iostream>
#include "List.hpp"
#include "Node.hpp"

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    List lis(arr, 5);
    lis.sort();
    std::cout << lis;
}