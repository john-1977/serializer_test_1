#include <iostream>
#include "orig_serializer.h"
#include "my_serializer.h"

constexpr int tests_amount = 1000000000; //количество прогонов теста

template<typename T>
void MakeTestData (T &vec, std::size_t size)
{
    vec.resize(size);
    for (size_t i = 0; i < size; ++i)
    {
        vec[i] = 1;
    }
}

void Orig()
{
    OrigSerializer orser;
    std::vector<unsigned char> test_data;
    std::size_t len = 4;
    MakeTestData (test_data, len);
    
    auto cnt = tests_amount;
    while (--cnt)
    {
        orser.Serialize(test_data.data(), len);
    }
}

void My()
{
    MySerializer myser;
    std::vector<unsigned char> test_data;
    std::size_t len = 4;
    MakeTestData (test_data, len);
    
    auto cnt = tests_amount;
    while (--cnt)
    {
        myser.Serialize(test_data.data(), len);
    }
}

int main (int argc, char* argv[])
{
    int selection = -1;
    if ( argc > 1 )
    {
        std::string s(argv[1]);
        selection = std::stoi(s);
    }
    if (selection == 1) Orig();
    if (selection == 2) My();
    return 0;
}