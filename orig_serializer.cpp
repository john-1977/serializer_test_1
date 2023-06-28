#include "orig_serializer.h"

void OrigSerializer::Serialize (unsigned char *data, std::size_t amount)
{
    unsigned char *tmp = new unsigned char[amount];
    _pWrite = 0;
    for (std::size_t pos = 0; pos < amount; pos++)
    {
        _buf[_pWrite++] = data[pos];
    }
    int i = *reinterpret_cast<int*> (data);
    i = i;
    delete [] tmp;
}