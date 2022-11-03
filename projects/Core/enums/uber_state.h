#pragma once

#include <string>
#include <Core/macros.h>

enum class UberStateGroup {
    Invalid = -1,
    // Rando groups
    Tree = 0,
    OpherWeapon = 1,
    TwillenShard = 2,
    GameState = 3,
    RandoUpgrade = 4,
    RandoState = 6,
    RandoConfig = 7,
    MapFilter = 8,
    PlandoVars = 9,
    BingoState = 10,
    Appliers = 11,
    MultiVars = 12,
    PseuodoLocs = 13,
    RandoStats = 14,
    RandoVirtual = 15,
    LupoGroup = 16,
    GromShop = 17,
    RandoGameModes = 18,
    ShrineStates = 19,

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
    PlayerUberStateDescriptor
};

CORE_DLLEXPORT std::string uber_state_group_name(UberStateGroup group);
