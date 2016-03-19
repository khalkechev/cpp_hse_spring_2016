#include <iostream>

void swap(int* value1, int* value2) {
    
    int temp = *value1;
    
    *value1 = *value2;
    
    *value2 = temp;
    
    
}




int main(int argc, char const *argv[]) {
    
    
    
    int firstNumber = atoi(argv[1]);
    int secondNumber = atoi(argv[2]);
    
    swap(&firstNumber, &secondNumber);
    
    std::cout << firstNumber << " " << secondNumber << std::endl;
    
    return 0;
    
}
