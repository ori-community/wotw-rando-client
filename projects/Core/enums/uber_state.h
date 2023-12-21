#pragma once

#include <Core/macros.h>
#include <nlohmann/json.hpp>
#include <string>

enum class UberStateGroup {
    Invalid = -1,
    // Rando groups
    Tree = 0,
    OpherShop = 1,
    TwillenShop = 2,
    RandoEvents = 3,
    RandoUpgrade = 4,
    Player = 5,
    RandoState = 6,
    RandoConfig = 7,
    Custom = 9, // Space for userland variables
    BingoState = 10,
    Appliers = 11,
    Multiworld = 12,
    RandoStats = 14,
    LupoShop = 15,
    LupoMapCosts = 16,
    GromShop = 17,
    Shrines = 19,
    TuleyShop = 20,
    GladesProjects = 21,
    MapSegments = 22,
    Goals = 23,
    Skills = 24,
    Shards = 25,
    Settings = 26,
};

enum class UberStateType : uint8_t {
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

enum class ValueType : uint8_t {
    Unknown,
    Boolean,
    Byte,
    Integer,
    Float,
};

NLOHMANN_JSON_SERIALIZE_ENUM(
    UberStateType,
    {
        {UberStateType::BooleanUberState,           "BooleanUberState"          },
        {UberStateType::ByteUberState,              "ByteUberState"             },
        {UberStateType::IntUberState,               "IntUberState"              },
        {UberStateType::FloatUberState,             "FloatUberState"            },
        {UberStateType::SerializedBooleanUberState, "SerializedBooleanUberState"},
        {UberStateType::SerializedFloatUberState,   "SerializedFloatUberState"  },
        {UberStateType::SerializedIntUberState,     "SerializedIntUberState"    },
        {UberStateType::SerializedByteUberState,    "SerializedByteUberState"   },
        {UberStateType::CountUberState,             "CountUberState"            },
        {UberStateType::SavePedestalUberState,      "SavePedestalUberState"     },
        {UberStateType::ConditionUberState,         "ConditionUberState"        },
        {UberStateType::PlayerUberStateDescriptor,  "PlayerUberStateDescriptor" },
        {UberStateType::VirtualUberState,           "VirtualUberState"          },
        {UberStateType::Unknown,                    "Unknown"                   },
}
);

NLOHMANN_JSON_SERIALIZE_ENUM(
    ValueType,
    {
        {ValueType::Boolean, "Boolean"},
        {ValueType::Byte,    "Byte"   },
        {ValueType::Integer, "Integer"},
        {ValueType::Float,   "Float"  },
        {ValueType::Unknown, "Unknown"},
}
);

CORE_DLLEXPORT std::optional<std::string> custom_uber_state_group_name(UberStateGroup group);
