#include <math.h>
#include "Func_yi.h"

const float c = 5;
const float b = 11;

float yi(int i) {
    float answ;
    
    answ = i * sqrt(c + 5 * b);
    return answ;
}


