#pragma once

#include <stdint.h>

namespace randomizer::game::map {
    enum class Filters : int {
        All = 0,
        Quests = 1,
        Teleports = 2,
        Collectibles = 3,
        InLogic = 4,
        Spoilers = 5,
        Players = 6,
        COUNT = 7,
    };

    enum class FilterFlag : int {
        All = 0b00000001,
        Quests = 0b00000010,
        Teleports = 0b00000100,
        Collectibles = 0b00001000,
        InLogic = 0b00010000,
        Spoilers = 0b00100000,
        Players = 0b01000000,
        END = 0b10000000,
    };

    FilterFlag operator|(FilterFlag lhs, FilterFlag rhs);

    Filters active_filter();
} // namespace randomizer::game::map
