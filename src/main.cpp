#include <iostream>
#include <own.h>

int main(int argc, char* argv[]) {
    own::Matrix<own::Complex<double>> m1, m2;
    m1.load("../mat2.txt");
    m2.load("../mat3.txt");
    m1.show();
    std::cout << std::endl;
    m2.show();
    std::cout << std::endl;
    (m1*m2).show();
    std::cout << std::endl;
    (m1*own::Complex<double>(2, 1)).show();
    return 0;
}
