#include <stdio.h>
#include <vector>
#include <iostream>
int main()
{
    printf("Hello World\n");
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    std::cout<< v[1];
    return 0;
}