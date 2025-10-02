#include "dsp.h"

using namespace VOID;
// ------- KERNELS ------------







// ------- UTILS ------------

sample UTILS::clip(sample signal, sample threshhold) 
{
    return std::max(-threshhold, std::min(threshhold,signal)); 
} 

