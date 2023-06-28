#pragma once
#include <vector>

#ifndef _BUF_SIZE_
#define _BUF_SIZE_ 1
constexpr std::size_t BUF_SIZE = 1024 * 1024;
#endif

class OrigSerializer
{
    public:
    OrigSerializer() : _pRead{0}, _pWrite{0}
    {
        _buf.resize(BUF_SIZE);
    }

    void Serialize(unsigned char *data, std::size_t amount);
    

    protected:
    void ExpandIfNeed(int amount);

    protected:
    std::vector<unsigned char> _buf;
    std::size_t _pRead, _pWrite;

};
