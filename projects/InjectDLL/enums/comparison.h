#pragma once

#include <stdint.h>

enum class Comparison : uint8_t {
    GreaterOrEquals = 0,
    LessOrEquals = 1,
    Greater = 2,
    Less = 3,
    Equals = 4,
};