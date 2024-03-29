/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Hash/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_HASH_FNV1AHASH_H_
#define _ISHIKO_HASH_FNV1AHASH_H_

#include <cstddef>
#include <cstdint>
#include <string>

namespace Ishiko
{
namespace Hash
{

// TODO: for now we only support 64 bit hash   
class FNV1aHash
{
public:
    FNV1aHash();

    void update(const char* data, size_t length);
    void update(const std::string& data);

    uint64_t value() const;

private:
    uint64_t m_value;
};

}
}

#include "linkoptions.h"

#endif
