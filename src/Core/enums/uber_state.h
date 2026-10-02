#pragma once

#include <Core/macros.h>
#include <nlohmann/json.hpp>
#include <string>

enum class UberStateGroup_DEPRECATED {
    Invalid = -1,
    // Rando groups
    Tree = 0,
    OpherShop = 1,
    TwillenShop = 2,
    RandoUpgrade = 4,
    Player = 5,
    RandoState = 6,
    RandoConfig = 7,
    CustomBooleans = 8,
    CustomIntegers = 9,
    CustomFloats = 10,
    BingoState = 11,
    Multiworld = 12,
    RandoStats = 14,
    LupoShop = 15,
    GromShop = 17,
    Shrines = 19,
    TuleyShop = 20,
    GladesProjects = 21,
    MapSegments = 22,
    ItemTracker = 23,
    Skills = 24,
    Shards = 25,
    Entrances = 27,
    KnownEntranceConnections = 28,
    Settings = 29,
    Input = 30,
    RandomValueGenerator = 31,
};

enum class UberStateType_DEPRECATED : uint8_t {
    BooleanUberState,
    ByteUberState,
    IntUberState,
    FloatUberState,
    SerializedBooleanUberState,
    SerializedFloatUberState,
    SerializedIntUberState,
    SerializedByteUberState,
    CountUberState,
    SavePedestalUberState,
    ConditionUberState,
    PlayerUberStateDescriptor,
    VirtualUberState,
    Unknown
};

enum class ValueType_DEPRECATED : uint8_t {
    Unknown,
    Boolean,
    Byte,
    Integer,
    Float,
};
