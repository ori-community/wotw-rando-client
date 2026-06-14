#pragma once

#include <Core/id_registry.h>

namespace core {
    CORE_DLLEXPORT void random_seed(int seed);
    // Gives number from 0.0-1.0
    CORE_DLLEXPORT float random();
    // The start and end parameters are inclusive.
    // aka you can possibly return end here.
    CORE_DLLEXPORT int random(int start, int end);
} // namespace core
