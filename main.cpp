
#include <iostream>
#include "Header.h"

int main(int argc, const char * argv[]) {
    
    for (float i = 0.0; i < 1.0; i += 0.1)
    {
        std::cout << myPerlinNoise(i) << std::endl;
    }
    
    return 0;
}
