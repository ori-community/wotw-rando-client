#pragma once

#include <string>
#include <Core/macros.h>
#include <nlohmann/json.hpp>

enum class UberStateGroup {
    Invalid = -1,
    // Rando groups
    Tree = 0,
    OpherShop = 1,
    TwillenShop = 2,
    RandoEvents = 3,
    RandoUpgrade = 4,
    RandoState = 6,
    RandoConfig = 7,
    MapFilter = 8,
    PlandoVars = 9,
    BingoState = 10,
    Appliers = 11,
    MultiVars = 12,
    RandoStats = 14,
    RandoVirtual = 15,
    LupoGroup = 16,
    GromShop = 17,
    RandoGameModes = 18,
    ShrineStates = 19,
    TuleyShop = 20,
    GladesProjects = 21,

    // Vanilla groups
    // TODO: Add all uberstate groups here and use four our uberstate methods.
    npcsStateGroup = 48248
};

enum class UberStateType : uint8_t {
    BooleanUberState,
    ByteUberState,
    IntUberState,
    SerializedBooleanUberState,
    SerializedFloatUberState,
    SerializedIntUberState,
    SerializedByteUberState,
    CountUberState,
    SavePedestalUberState,
    ConditionUberState,
    PlayerUberStateDescriptor,
    Unknown
};

NLOHMANN_JSON_SERIALIZE_ENUM(
        UberStateType,
        {
            { UberStateType::BooleanUberState, "BooleanUberState" },
            { UberStateType::ByteUberState, "ByteUberState" },
            { UberStateType::IntUberState, "IntUberState" },
            { UberStateType::SerializedBooleanUberState, "SerializedBooleanUberState" },
            { UberStateType::SerializedFloatUberState, "SerializedFloatUberState" },
            { UberStateType::SerializedIntUberState, "SerializedIntUberState" },
            { UberStateType::SerializedByteUberState, "SerializedByteUberState" },
            { UberStateType::CountUberState, "CountUberState" },
            { UberStateType::SavePedestalUberState, "SavePedestalUberState" },
            { UberStateType::ConditionUberState, "ConditionUberState" },
            { UberStateType::PlayerUberStateDescriptor, "PlayerUberStateDescriptor" },
            { UberStateType::Unknown, "Unknown" },
        }
);

CORE_DLLEXPORT std::string uber_state_group_name(UberStateGroup group);
