#include "box_capacity.h"

namespace TimatyPizza {

namespace {
const int difference = 12;
const int box = 16;
}

int boxCapacity(double length, double width, double height) {
    if(length < 0 || width < 0 || height < 0) {
        return -1;
    } 

    int count_length = static_cast<int>(length * difference / box);
    int count_width = static_cast<int>(width * difference / box);
    int count_height = static_cast<int>(height * difference / box);

    int result = count_length * count_width * count_height;
    return result;
}

}