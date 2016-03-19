#include <iostream>
#include <cmath>

int Strlen(const char* str) {
    
    int result = 0;
    while (str[result] != '\0') {
        ++result;
    }
    return result;
    
}



int atoi(const char* str) {
    
    int result = 0;
    int len = Strlen(str);
    
    for (int i = len - 1; i >= 0; --i){
        
        if (i == 0 && str[i] == '-') {
            
            result *= -1;
            
        } else {
        
        result += (str[i] - '0') * pow(10, len - 1 - i);
        }
    }
    
    return result;
    
}


int main(int argc, char const *argv[]) {
    
    const char* str1 = "-103";
    
    std::cout << "str 1 + 1 = " << (atoi(str1)) << std::endl;
    
    return 0;
    
}
