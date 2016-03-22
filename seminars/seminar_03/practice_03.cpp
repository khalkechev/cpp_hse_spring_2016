#include <iostream>


// находим факториал

int fact(int value) {
    
    int summ = 1;
    
    int count = 1;
    
    for (int i = 0; i < value; ++i) {
        
        summ = summ * count;
        
        ++count;
        
    }
    
    return summ;
    
}


int main(int argc, char const *argv[]) {
    
    int out = atoi(argv[1]);
    
    std::cout << "Factorial = " << fact(out) << std::endl;
    
    return 0;
    
}
