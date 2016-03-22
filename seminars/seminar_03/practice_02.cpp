#include <iostream>


// находим минимум

int min(int value) {
    
    int result = 9;
    
    while (value > 0) {
        
        if (value % 10 < result) {
            
            result = value % 10;
        
        }
        
        value = value / 10;
        
    }

    
    return result;
    
}


//находим максимум

int max(int value) {
        
        int result = 0;
    
        while (value > 0) {
            
            if (value % 10 > result) {
            
                result = value % 10;
            
        }
               
            value = value / 10;
            
        }
    
               
    return result;
               
}



int main(int argc, char const *argv[]) {


    int outMin = atoi(argv[1]);
    
    int outMax = atoi(argv[1]);
    
    std::cout << "MIN = " <<  min(outMin) << " " << "MAX = " << max(outMax) << std::endl;
    
    return 0;
    
}
