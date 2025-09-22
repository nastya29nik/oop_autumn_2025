#include "box_capacity.h"

int main() {
    double length;
    double width;
    double height;
    std::cout<<"Введите длину, ширину, высоту склада"<< std::endl;
    if(!(std::cin >> length >> width >> height)) {
        std::cerr << "Ошибка: данные введены некорректно" << std::endl;
        return 1;
    }

    int64_t res = TimatyPizza::boxCapacity(length, width, height);

    if (res == -1) {
        std::cerr << "Ошибка: размеры не могут быть отрицательными" << std::endl;
        return 1;
    }
    std::cout<<"Результат: "<< res << " ящиков." << std::endl;
    return 0;
}
