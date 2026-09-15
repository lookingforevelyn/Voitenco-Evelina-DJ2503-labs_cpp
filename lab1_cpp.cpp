#include <iostream>

void B()
{
    std::cout << "called B" << std::endl;
}

void C()
{
    std::cout << "called C" << std::endl;
}

void A()
{
    std::cout << "called A" << std::endl;
    B();
    C();
}

int main() {
    std::cout << "Jello" << std::endl;
    A();
    return 0;
}