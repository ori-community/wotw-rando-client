#pragma once

#include <set>

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
    app::AbilityType__Enum_DashNew,
    app::AbilityType__Enum_Launch,
    app::AbilityType__Enum_WaterDash,
    app::AbilityType__Enum_Regenerate,
    app::AbilityType__Enum_DamageUpgradeA,
    app::AbilityType__Enum_DamageUpgradeB,
};

constexpr double PI = 3.14159265358979323846;

#pragma region Uberstate constants
constexpr int CHAOS_MODE_ID = 7;
constexpr int CHAOS_TRIGGER_MIN_ID = 500;
constexpr int CHAOS_TRIGGER_MAX_ID = 501;
constexpr int PREVENT_PICKUP_ID = 8;
constexpr int STOMP_THROUGH_PORTALS_ID = 9;
constexpr int FORCE_AIR_NO_DECELERATION_ID = 301;
constexpr int ICON_TRANSPARENCY_ID = 1000;
#pragma endregion
