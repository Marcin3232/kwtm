#include <iostream>



#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.hpp"
#else
#include<cmath>
#endif


int main() {
    double result;
#ifdef USE_TRIGONOMETRY_DEGREE
    result = -degreemath::sin(45.0);
#else
        result = 12.0*cos(M_PI/4.0);
#endif
    
    
    std::cout << result << " commit 4 45 program jednak dziala\n";
return 0;
}
