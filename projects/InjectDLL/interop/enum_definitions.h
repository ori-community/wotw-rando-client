#pragma once

namespace csharp_bridge {
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

    enum ShardType {
        Overcharge = 1,
        TripleJump,
        Wingclip,
        Bounty,
        Swap,
        Magnet = 8,
        Splinter,
        Reckless = 13,
        Quickshot,
        Resilience = 18,
        LightHarvest,
        Vitality = 22,
        LifeHarvest,
        EnergyHarvest = 25,
        Energy,
        LifePact,
        LastStand,
        Secret = 30,
        UltraBash = 32,
        UltraGrapple,
        Overflow,
        Thorn,
        Catalyst,
        Turmoil = 38,
        Sticky,
        Finesse,
        SpiritSurge,
        Lifeforce = 43,
        Deflector,
        Fracture = 46,
        Arcing
    };
} // namespace csharp_bridge
