#include <math.h>
#include "Func_S.h"
#include "Func_xi.h"
#include "Func_yi.h"

float S() {
    float answ;
    float sum1 = 0;
    float sum2 = 0;
    float sum3 = 0;
    
    for (int i = 5; i <= 10; i++)
        sum1 += xi(i) * log10(yi(i));
    for (int i = 2; i <= 7; i++)
        sum2 += xi(i) * log10(yi(i));
    for (int i = 3; i <= 5; i++)
        sum3 += 5 * xi(i) * log10(yi(i));
    answ = 10 * sum1 + sum2 * sum2 - 2 / sum3;
    return answ;
}
