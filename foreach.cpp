#include <iostream>
#include <vector>

template <typename Iterator, typename Function>
Function my_for_each(Iterator first, Iterator last, Function func) {
    while (first != last) {
        func(*first);  
        ++first;      
    }
    return func;
}

// example usage
int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    my_for_each(vec.begin(), vec.end(), [](int x) {
        std::cout << x << " ";
    });

    std::cout << std::endl;
    return 0;
}
