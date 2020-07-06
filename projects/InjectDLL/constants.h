#pragma once

#include <set>

enum class MessageType : int
{
    Info,
    Warning,
    Error,
    Debug
};

const std::set<app::AbilityType__Enum> tree_abilities{
    app::AbilityType__Enum_Bash,
    app::AbilityType__Enum_DoubleJump,
    app::AbilityType__Enum_ChargeJump,
    app::AbilityType__Enum_WaterBreath,
    app::AbilityType__Enum_Grenade,
    app::AbilityType__Enum_SpiritLeash,
    app::AbilityType__Enum_GlowSpell,
    app::AbilityType__Enum_MeditateSpell,
    app::AbilityType__Enum_Bow,
    app::AbilityType__Enum_Sword,
    app::AbilityType__Enum_Digging,
    app::AbilityType__Enum_Launch,
    app::AbilityType__Enum_WaterDash,
    app::AbilityType__Enum_Regenerate,
    app::AbilityType__Enum_DamageUpgradeA,
    app::AbilityType__Enum_DamageUpgradeB,
};
