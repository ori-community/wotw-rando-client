#pragma once

namespace csharp_bridge
{
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

    enum class AbilityType {
        Bash = 0,
        WallJump = 3,
        DoubleJump = 5,
        Launch = 8,
        Feather = 14,
        WaterBreath = 23,
        LightBurst = 51,
        Grapple = 57,
        Flash = 62,
        Spike = 74,
        Regenerate = 77,
        SpiritArc = 97,
        SpiritSmash,
        Torch,
        SpiritEdge,
        Burrow,
        Dash,
        WaterDash = 104,
        TeleportSpell = 105,
        SpiritStar = 106,
        Seir = 108,
        Blaze = 115,
        Sentry,
        Flap = 118,
        DamageUpgrade1 = 120,
        DamageUpgrade2,
        NONE = 255
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
}
