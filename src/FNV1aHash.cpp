/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Hash/blob/main/LICENSE.txt
*/

#include "FNV1aHash.h"

namespace Ishiko
{
namespace Hash
{

FNV1aHash::FNV1aHash()
    : m_value(0xcbf29ce484222325ULL)
{
}

void FNV1aHash::update(const char* data, size_t length)
{
    const uint64_t fnvPrime = 1099511628211;
    for (size_t i = 0; i < length; ++i)
    {
        m_value ^= data[i];
        m_value *= fnvPrime;
    }
}

void FNV1aHash::update(const std::string& data)
{
    update(data.data(), data.size());
}

uint64_t FNV1aHash::value() const
{
    return m_value;
}

}
}
