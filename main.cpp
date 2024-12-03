#include <iostream>


template<typename ...Ts>
void println(Ts...args) {
    ((std::cout << args), ...) << std::endl;
}


int main() {
    println("Hello, World!");
    return 0;
}
