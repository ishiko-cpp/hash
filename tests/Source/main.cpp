/*
    Copyright (c) 2017-2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/hash/blob/main/LICENSE.txt
*/

#include "FNV1aHashTests.h"
#include <Ishiko/Tests/Core.h>

using namespace Ishiko::Tests;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoHash");
 
    TestSequence& theTests = theTestHarness.tests();
    theTests.append<FNV1aHashTests>();

    return theTestHarness.run();
}
