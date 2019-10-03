#include <math.h>
#include "Func_xi.h"

const float c = 5;
const float b = 11;

float xi(int i) {
    float answ;
    
    answ = 2 * i + sqrt(c / (b + c));
    return answ;
}
