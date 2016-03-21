#include <iostream>

int int_calc(int value) {
    
    int result = 0;
    
    while (value > 0) {
    
    if (value % 2 == 0) {
        
        ++result;
        
        }
        
        value = value / 10;
    
    }
    
    return result;
    
}


int main(int argc, char const *argv[]) {
    
    int number = atoi(argv[1]);
    
    std::cout << "Even numbers = " << int_calc(number) << std::endl;
    
    return 0;
    
}
