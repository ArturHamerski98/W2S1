#include <iostream>
#include "Fibonaci.h"
#include <ctime>;

int main() {
    clock_t start;
    clock_t stop;
    clock_t duration;

    Fibonaci fib;
    start = clock();
    fib.calculate(40, 0);
    stop = clock();
    duration = stop - start;
    std::cout << "\nLVL0: " << duration / static_cast<double>(1000) << " s" << std::endl << std::endl;
    start = clock();
    fib.calculate(46, 1);
    stop = clock();
    duration = stop - start;
    std::cout << "\nLVL1: " << duration / static_cast<double>(1000) << " s" << std::endl << std::endl;
    start = clock();
    fib.calculate(46, 2);
    stop = clock();
    duration = stop - start;
    std::cout << "\nLVL2: " << duration / static_cast<double>(1000) << " s" << std::endl << std::endl;
    start = clock();
    fib.calculate(46, 3);
    stop = clock();
    duration = stop - start;
    std::cout << "\nLVL3: " << duration / static_cast<double>(1000) << " s" << std::endl << std::endl;
    return 0;
}