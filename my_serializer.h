#include "orig_serializer.h"

class MySerializer : public OrigSerializer
{
    public:
    MySerializer() : OrigSerializer()
    {

    }

    void Serialize(unsigned char *data, std::size_t amount);
protected:

};