#include <iostream>

void int_swap(int* value1, int* value2) {
    
    int temp = *value1;
    
    *value1 = *value2;
    
    *value2 = temp;
    
    
}




int main(int argc, char const *argv[]) {
    
    if (argc > 3) {
        
        std::cout << "Bad input.\n";
        return 1;
        
    }
    
    int firstNumber = atoi(argv[1]);
    int secondNumber = atoi(argv[2]);
    
    int_swap(&firstNumber, &secondNumber);
    
    std::cout << firstNumber << " " << secondNumber << std::endl;
    
    return 0;
    
}
