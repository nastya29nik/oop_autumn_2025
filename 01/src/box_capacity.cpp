#include "box_capacity.h"

namespace TimatyPizza {

namespace {
const int difference = 12;
const int box = 16;
}

int64_t boxCapacity(double length, double width, double height) {
    if(length < 0 || width < 0 || height < 0) {
        return -1;
    }
    
    int64_t count_length = static_cast<int64_t>(length * difference / box);
    int64_t count_width = static_cast<int64_t>(width * difference / box);
    int64_t count_height = static_cast<int64_t>(height * difference / box);
    

    int64_t result = count_length * count_width * count_height;
    return result;
}

}