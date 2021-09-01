#include <utils/textures.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <unordered_map>
#include <magic_enum/include/magic_enum.hpp>

namespace textures
{
    std::unordered_map<std::wstring, app::Texture2D*> textures;

    std::unordered_map<app::AbilityType__Enum, std::wstring> ability_to_string{
        { app::AbilityType__Enum_Bash, L"ability_bash" },
        { app::AbilityType__Enum_ChargeFlame, L"ability_charge_flame" },
        { app::AbilityType__Enum_WallJump, L"ability_wall_jump" },
        { app::AbilityType__Enum_Stomp, L"ability_stomp" },
        { app::AbilityType__Enum_DoubleJump, L"ability_double_jump" },
        { app::AbilityType__Enum_ChargeJump, L"ability_charge_jump" },
        { app::AbilityType__Enum_Magnet, L"ability_magnet" },
        { app::AbilityType__Enum_UltraMagnet, L"ability_ultra_magnet" },
        { app::AbilityType__Enum_Climb, L"ability_climb" },
        { app::AbilityType__Enum_Glide, L"ability_glide" },
        { app::AbilityType__Enum_SpiritFlame, L"ability_spirit_flame" },
        { app::AbilityType__Enum_RapidFlame, L"ability_rapid_flame" },
        { app::AbilityType__Enum_SplitFlameUpgrade, L"ability_split_flame" },
        { app::AbilityType__Enum_SoulEfficiency, L"ability_soul_efficiency" },
        { app::AbilityType__Enum_WaterBreath, L"ability_water_breath" },
        { app::AbilityType__Enum_ChargeFlameBlast, L"ability_charge_flame_blast" },
        { app::AbilityType__Enum_ChargeFlameBurn, L"ability_charge_flame_burn" },
        { app::AbilityType__Enum_DoubleJumpUpgrade, L"ability_double_jump_upgrade" },
        { app::AbilityType__Enum_BashBuff, L"ability_bash_buff" },
        { app::AbilityType__Enum_UltraDefense, L"ability_ultra_defense" },
        { app::AbilityType__Enum_HealthEfficiency, L"ability_health_efficiency" },
        { app::AbilityType__Enum_Sense, L"ability_sense" },
        { app::AbilityType__Enum_UltraStomp, L"ability_ultra_stomp" },
        { app::AbilityType__Enum_SparkFlame, L"ability_spark_flame" },
        { app::AbilityType__Enum_QuickFlame, L"ability_quick_flame" },
        { app::AbilityType__Enum_MapMarkers, L"ability_map_markers" },
        { app::AbilityType__Enum_EnergyEfficiency, L"ability_energy_efficiency" },
        { app::AbilityType__Enum_HealthMarkers, L"ability_health_markers" },
        { app::AbilityType__Enum_EnergyMarkers, L"ability_energy_markers" },
        { app::AbilityType__Enum_AbilityMarkers, L"ability_ability_markers" },
        { app::AbilityType__Enum_Rekindle, L"ability_rekindle" },
        { app::AbilityType__Enum_Regroup, L"ability_regroup" },
        { app::AbilityType__Enum_ChargeFlameEfficiency, L"ability_charge_flame_efficiency" },
        { app::AbilityType__Enum_UltraSoulFlame, L"ability_ultra_soul_flame" },
        { app::AbilityType__Enum_SoulFlameEfficiency, L"ability_soul_flame_efficiency" },
        { app::AbilityType__Enum_CinderFlame, L"ability_cinder_flame" },
        { app::AbilityType__Enum_UltraSplitFlame, L"ability_ultra_split_flame" },
        { app::AbilityType__Enum_Dash, L"ability_dash" },
        { app::AbilityType__Enum_Grenade, L"ability_grenade" },
        { app::AbilityType__Enum_GrenadeUpgrade, L"ability_grenade_upgrade" },
        { app::AbilityType__Enum_ChargeDash, L"ability_charge_dash" },
        { app::AbilityType__Enum_AirDash, L"ability_air_dash" },
        { app::AbilityType__Enum_GrenadeEfficiency, L"ability_grenade_efficiency" },
        { app::AbilityType__Enum_Bounce, L"ability_bounce" },
        { app::AbilityType__Enum_SpiritLeash, L"ability_spirit_leash" },
        { app::AbilityType__Enum_SpiritSlash, L"ability_spirit_slash" },
        { app::AbilityType__Enum_HeavySpiritSlash, L"ability_heavy_spirit_slash" },
        { app::AbilityType__Enum_FireburstSpell, L"ability_fireburst" },
        { app::AbilityType__Enum_FirewhirlSpell, L"ability_firewhirl" },
        { app::AbilityType__Enum_GlowSpell, L"ability_glow" },
        { app::AbilityType__Enum_LockOnSpell, L"ability_lcok_on" },
        { app::AbilityType__Enum_TimeWarpSpell, L"ability_time_warp" },
        { app::AbilityType__Enum_ShieldSpell, L"ability_shield" },
        { app::AbilityType__Enum_EnergyWallSpell, L"ability_energy_wall" },
        { app::AbilityType__Enum_InvisibilitySpell, L"ability_invisibility" },
        { app::AbilityType__Enum_TrapSpell, L"ability_trap" },
        { app::AbilityType__Enum_WarpSpell, L"ability_warp" },
        { app::AbilityType__Enum_LightSpell, L"ability_light" },
        { app::AbilityType__Enum_MindControlSpell, L"ability_mind_control" },
        { app::AbilityType__Enum_MirageSpell, L"ability_mirage" },
        { app::AbilityType__Enum_StickyMineSpell, L"ability_mine" },
        { app::AbilityType__Enum_SpiritSpearSpell, L"ability_spirit_spear" },
        { app::AbilityType__Enum_LightSpearSpell, L"ability_light_spear" },
        { app::AbilityType__Enum_LifeAbsorbSpell, L"ability_life_absorb" },
        { app::AbilityType__Enum_MeditateSpell, L"ability_meditate" },
        { app::AbilityType__Enum_ChargeShotSpell, L"ability_charge_shot" },
        { app::AbilityType__Enum_SpiritShardsSpell, L"ability_spirit_shards" },
        { app::AbilityType__Enum_SpiritSentrySpell, L"ability_sentry" },
        { app::AbilityType__Enum_PowerslideSpell, L"ability_powerslide" },
        { app::AbilityType__Enum_CounterstrikeSpell, L"ability_counterstrike" },
        { app::AbilityType__Enum_EarthShatterSpell, L"ability_earth_shatter" },
        { app::AbilityType__Enum_JumpShotSpell, L"ability_jump_shot" },
        { app::AbilityType__Enum_RoundupLeashSpell, L"ability_roundup_leash" },
        { app::AbilityType__Enum_BurrowSpell, L"ability_burrow" },
        { app::AbilityType__Enum_PowerOfFriendshipSpell, L"ability_power_of_friendship" },
        { app::AbilityType__Enum_LightningSpell, L"ability_lightning" },
        { app::AbilityType__Enum_SpiritFlareSpell, L"ability_spirit_flare" },
        { app::AbilityType__Enum_EntanglingRootsSpell, L"ability_entangling_roots" },
        { app::AbilityType__Enum_MarkOfTheWildsSpell, L"ability_mark_of_the_wilds" },
        { app::AbilityType__Enum_HomingMissileSpell, L"ability_homing_missile" },
        { app::AbilityType__Enum_SpiritCrescentSpell, L"ability_spirit_crescent" },
        { app::AbilityType__Enum_MineSpell, L"ability_mine" },
        { app::AbilityType__Enum_Pinned, L"ability_pinned" },
        { app::AbilityType__Enum_Leached, L"ability_leached" },
        { app::AbilityType__Enum_Bow, L"ability_bow" },
        { app::AbilityType__Enum_Hammer, L"ability_hammer" },
        { app::AbilityType__Enum_Torch, L"ability_torch" },
        { app::AbilityType__Enum_Sword, L"ability_sword" },
        { app::AbilityType__Enum_Digging, L"ability_digging" },
        { app::AbilityType__Enum_DashNew, L"ability_dash_new" },
        { app::AbilityType__Enum_Launch, L"ability_launch" },
        { app::AbilityType__Enum_WaterDash, L"ability_water_dash" },
        { app::AbilityType__Enum_TeleportSpell, L"ability_teleport" },
        { app::AbilityType__Enum_ChakramSpell, L"ability_chakram" },
        { app::AbilityType__Enum_Drill, L"ability_drill" },
        { app::AbilityType__Enum_GoldenSein, L"ability_golden_sein" },
        { app::AbilityType__Enum_BowCharge, L"ability_bow_charge" },
        { app::AbilityType__Enum_Swordstaff, L"ability_sword_staff" },
        { app::AbilityType__Enum_Chainsword, L"ability_chain_sword" },
        { app::AbilityType__Enum_SpiritMagnet, L"ability_spirit_magnet" },
        { app::AbilityType__Enum_SwordCharge, L"ability_sword_charge" },
        { app::AbilityType__Enum_HammerCharge, L"ability_hammer_charge" },
        { app::AbilityType__Enum_Blaze, L"ability_blaze" },
        { app::AbilityType__Enum_TurretSpell, L"ability_turret" },
        { app::AbilityType__Enum_Regenerate, L"ability_regenerate" },
        { app::AbilityType__Enum_FeatherFlap, L"ability_feather_flap" },
        { app::AbilityType__Enum_WeaponCharge, L"ability_weapon_charge" },
        { app::AbilityType__Enum_DamageUpgradeA, L"ability_damage_upgrade_a" },
        { app::AbilityType__Enum_DamageUpgradeB, L"ability_damage_upgrade_b" },
        { app::AbilityType__Enum_None, L"ability_none" }
    };

    std::unordered_map<app::EquipmentType__Enum, std::wstring> spell_to_string{
        { app::EquipmentType__Enum_None, L"equipment_none" },
        { app::EquipmentType__Enum_Weapon_Hammer, L"equipment_hammer" },
        { app::EquipmentType__Enum_Weapon_Bow, L"equipment_bow" },
        { app::EquipmentType__Enum_Weapon_Sword, L"equipment_sword" },
        { app::EquipmentType__Enum_Weapon_Torch, L"equipment_torch" },
        { app::EquipmentType__Enum_Weapon_Swordstaff, L"equipment_sword_staff" },
        { app::EquipmentType__Enum_Weapon_Chainsword, L"equipment_chain_sword" },
        { app::EquipmentType__Enum_Spell_Shot, L"equipment_shot" },
        { app::EquipmentType__Enum_Spell_HomingMissiles, L"equipment_homing_missile" },
        { app::EquipmentType__Enum_Spell_Wave, L"equipment_wave" },
        { app::EquipmentType__Enum_Spell_Whirl, L"equipment_whirl" },
        { app::EquipmentType__Enum_Spell_Glow, L"equipment_glow" },
        { app::EquipmentType__Enum_Spell_LockOn, L"equipment_lock_on" },
        { app::EquipmentType__Enum_Spell_Shield, L"equipment_shield" },
        { app::EquipmentType__Enum_Spell_Invisibility, L"equipment_invisibility" },
        { app::EquipmentType__Enum_Spell_LifeAbsorb, L"equipment_life_absorb" },
        { app::EquipmentType__Enum_Spell_Shards, L"equipment_shards" },
        { app::EquipmentType__Enum_Spell_StickyMine, L"equipment_sticky_mine" },
        { app::EquipmentType__Enum_Spell_Sentry, L"equipment_sentry" },
        { app::EquipmentType__Enum_Spell_Spear, L"equipment_spear" },
        { app::EquipmentType__Enum_Spell_Meditate, L"equipment_meditate" },
        { app::EquipmentType__Enum_Spell_Teleport, L"equipment_teleport" },
        { app::EquipmentType__Enum_Spell_Chakram, L"equipment_chakram" },
        { app::EquipmentType__Enum_Spell_Blaze, L"equipment_blaze" },
        { app::EquipmentType__Enum_Spell_Turret, L"equipment_turret" },
        { app::EquipmentType__Enum_Spell_GoldenSein, L"equipment_golden_sein" },
        { app::EquipmentType__Enum_Spell_ChargeJump, L"equipment_charge_jump" },
        { app::EquipmentType__Enum_Ability_Bash, L"equipment_bash" },
        { app::EquipmentType__Enum_Ability_Leash, L"equipment_leash" },
        { app::EquipmentType__Enum_Ability_Digging, L"equipment_digging" },
        { app::EquipmentType__Enum_Ability_Drill, L"equipment_drill" },
        { app::EquipmentType__Enum_Ability_DoubleJump, L"equipment_double_jump" },
        { app::EquipmentType__Enum_Ability_FeatherFlap, L"equipment_feather_flap" },
        { app::EquipmentType__Enum_AutoAbility_Dash, L"equipment_dash" },
        { app::EquipmentType__Enum_AutoAbility_Glide, L"equipment_glide" },
        { app::EquipmentType__Enum_AutoAbility_ChargeJump, L"equipment_charge_jump" },
        { app::EquipmentType__Enum_AutoAbility_WaterDash, L"equipment_water_dash" },
        { app::EquipmentType__Enum_AutoAbility_Climb, L"equipment_climb" },
        { app::EquipmentType__Enum_AutoAbility_WeaponCharge, L"equipment_weapon_charge" },
        { app::EquipmentType__Enum_AutoAbility_DamageUpgradeA, L"equipment_damage_upgrade_a" },
        { app::EquipmentType__Enum_AutoAbility_DamageUpgradeB, L"equipment_damage_upgrade_b" },
        { app::EquipmentType__Enum_AutoAbility_WaterBreath, L"equipment_water_breath" }
    };

    std::unordered_map<app::SpiritShardType__Enum, std::wstring> shard_to_string{
        { app::SpiritShardType__Enum_None, L"shard_none" },
        { app::SpiritShardType__Enum_GlassCannon, L"shard_glass_cannon" },
        { app::SpiritShardType__Enum_TripleJump, L"shard_triple_jump" },
        { app::SpiritShardType__Enum_AntiAir, L"shard_anti_air" },
        { app::SpiritShardType__Enum_Focus, L"shard_focus" },
        { app::SpiritShardType__Enum_Swap, L"shard_swap" },
        { app::SpiritShardType__Enum_CrescentShot_Deprecated, L"shard_crescent_shot" },
        { app::SpiritShardType__Enum_Pierce, L"shard_pierce" },
        { app::SpiritShardType__Enum_SpiritMagnet, L"shard_spirit_magnet" },
        { app::SpiritShardType__Enum_Splinter, L"shard_splinter" },
        { app::SpiritShardType__Enum_Blaze_Deprecated, L"shard_blaze" },
        { app::SpiritShardType__Enum_Frost_Deprecated, L"shard_frpst" },
        { app::SpiritShardType__Enum_LifeLeech_Deprecated, L"shard_life_leech" },
        { app::SpiritShardType__Enum_Reckless, L"shard_reckless" },
        { app::SpiritShardType__Enum_Frenzy, L"shard_frenzy" },
        { app::SpiritShardType__Enum_Explosive_Deprecated, L"shard_explosive" },
        { app::SpiritShardType__Enum_Ricochet, L"shard_richochet" },
        { app::SpiritShardType__Enum_Climb_Deprecated, L"shard_climb" },
        { app::SpiritShardType__Enum_Barrier, L"shard_barrier" },
        { app::SpiritShardType__Enum_SpiritLightLuck, L"shard_spirit_light_luck" },
        { app::SpiritShardType__Enum_Compass_Deprecated, L"shard_compass" },
        { app::SpiritShardType__Enum_Waterbreathing_Deprecated, L"shard_water_breathing" },
        { app::SpiritShardType__Enum_Vitality, L"shard_vitality" },
        { app::SpiritShardType__Enum_VitalityLuck, L"shard_vitality_luck" },
        { app::SpiritShardType__Enum_SpiritWellShield_Deprecated, L"shard_spirit_well_shield" },
        { app::SpiritShardType__Enum_EnergyLuck, L"shard_energy_luck" },
        { app::SpiritShardType__Enum_Energy, L"shard_energy" },
        { app::SpiritShardType__Enum_BloodPact, L"shard_blood_pact" },
        { app::SpiritShardType__Enum_LastResort, L"shard_last_resort" },
        { app::SpiritShardType__Enum_HarvestOfLight_Deprecated, L"shard_harvest_of_light" },
        { app::SpiritShardType__Enum_Sense, L"shard_sense" },
        { app::SpiritShardType__Enum_UnderwaterEfficiency_Deprecated, L"shard_underwater_efficiency" },
        { app::SpiritShardType__Enum_UltraBash, L"shard_ultra_bash" },
        { app::SpiritShardType__Enum_UltraLeash, L"shard_ultra_leash" },
        { app::SpiritShardType__Enum_Recycler, L"shard_recycler" },
        { app::SpiritShardType__Enum_Counterstrike, L"shard_counterstrike" },
        { app::SpiritShardType__Enum_HollowEnergy, L"shard_hollow_energy" },
        { app::SpiritShardType__Enum_Supressor, L"shard_supressor" },
        { app::SpiritShardType__Enum_Aggressor, L"shard_aggressor" },
        { app::SpiritShardType__Enum_Glue, L"shard_glue" },
        { app::SpiritShardType__Enum_CombatLuck, L"shard_combat_luck" },
        { app::SpiritShardType__Enum_SpiritPower, L"shard_spirit_power" },
        { app::SpiritShardType__Enum_Overcharge_Deprecated, L"shard_overcharge" },
        { app::SpiritShardType__Enum_Untouchable, L"shard_untouchable" },
        { app::SpiritShardType__Enum_MirrorStrike, L"shard_mirror_strike" },
        { app::SpiritShardType__Enum_Stinger, L"shard_stinger" },
        { app::SpiritShardType__Enum_Fracture, L"shard_fracture" },
        { app::SpiritShardType__Enum_ChainLightning, L"shard_chain_lightning" }
    };

    app::Texture* get_texture(std::wstring name)
    {
        auto texture = textures.find(name);
        return texture == textures.end() ? nullptr : reinterpret_cast<app::Texture*>(texture->second);
    }

    bool initialized = false;
    IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr)) {
        if (!initialized)
        {
            auto* spell_settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings")->static_fields->Instance;
            auto* shard_settings = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance;
            if (spell_settings != nullptr && shard_settings != nullptr)
            {
                {
                    auto* keys = spell_settings->fields.CustomAbilityIcons->fields._.m_keys;
                    auto count = keys->fields._size;
                    for (int i = 0; i < count; ++i)
                    {
                        app::Texture2D* texture = il2cpp::invoke<app::Texture2D>(spell_settings->fields.CustomAbilityIcons, "GetValue", &keys->fields._items->vector[i]);
                        textures[ability_to_string[keys->fields._items->vector[i]]] = texture;
                    }
                }

                {
                    auto* keys = spell_settings->fields.Icons->fields._.m_keys;
                    auto count = keys->fields._size;
                    for (int i = 0; i < count; ++i)
                    {
                        app::Texture2D* texture = il2cpp::invoke<app::Texture2D>(spell_settings->fields.Icons, "GetValue", &keys->fields._items->vector[i]);
                        textures[spell_to_string[keys->fields._items->vector[i]]] = texture;
                    }
                }

                {
                    auto* keys = shard_settings->fields.Icons->fields._.m_keys;
                    auto count = keys->fields._size;
                    for (int i = 0; i < count; ++i)
                    {
                        app::Texture2D* texture = il2cpp::invoke<app::Texture2D>(shard_settings->fields.Icons, "GetValue", &keys->fields._items->vector[i]);
                        textures[shard_to_string[keys->fields._items->vector[i]]] = texture;
                    }
                }

                initialized = true;
            }
        }

        GameController::FixedUpdate(this_ptr);
    }
}
