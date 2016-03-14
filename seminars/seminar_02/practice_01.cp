#include <iostream>



int main() {
    
    std::cout << "sizeofchar(char) = " << sizeof(char) << std::endl;
    std::cout << "sizeofshort(short) = " << sizeof(short) << std::endl;
    std::cout << "sizeofint(int) = " << sizeof(int) << std::endl;
    
    long x;
    std::cout << "sizeofint(int) = " << sizeof(x) << std::endl;
    return 0;
    
}
