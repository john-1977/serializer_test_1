#include "my_serializer.h"
#include <string.h>

void MySerializer::Serialize (unsigned char *data, std::size_t amount)
{

    int i;
    memcpy (&i, data, 4);
    _pRead += amount;
    i = i;
}

