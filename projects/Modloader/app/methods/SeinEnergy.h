#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinEnergy.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>

namespace app::classes::SeinEnergy {
    IL2CPP_REGISTER_METHOD(0x00ACD1E0, float, get_Current, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACD2C0, void, set_Current, (app::SeinEnergy * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00ACD420, float, get_MaxEnergy, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACD5C0, float, get_ActualMaxEnergy, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACD600, float, get_BaseMaxEnergy, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACD6E0, void, set_BaseMaxEnergy, (app::SeinEnergy * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00ACD800, void, GainMaxEnergyContainer, (app::SeinEnergy * this_ptr, int32_t amount))
    IL2CPP_REGISTER_METHOD(0x00ACD850, float, get_EnergyCostMultiplier, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A35F30, float, get_MaxEnergyBonus, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A183E0, void, set_MaxEnergyBonus, (app::SeinEnergy * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00ACDA50, bool, get_IsSwapShardEquipped, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACDB40, void, OnEnable, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACDD10, void, OnDisable, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACE2C0, void, SetCurrent, (app::SeinEnergy * this_ptr, float current))
    IL2CPP_REGISTER_METHOD(0x00ACE300, void, NotifyOutOfEnergy, (app::SeinEnergy * this_ptr, bool play_sound))
    IL2CPP_REGISTER_METHOD(0x00ACE540, bool, CanAfford_1, (app::SeinEnergy * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x00ACE760, bool, CanAfford_2, (app::SeinEnergy * this_ptr, float amount, app::AbilityType__Enum type))
    IL2CPP_REGISTER_METHOD(0x00ACE770, float, get_VisualMin, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACE7A0, float, get_VisualMax, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACE7D0, bool, get_AtMaxEnergy, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACE810, void, Fill, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACE850, void, Gain, (app::SeinEnergy * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x00ACEAD0, void, ConvertHealth, (app::SeinEnergy * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x00ACEB40, void, Spend_1, (app::SeinEnergy * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x00ACEC60, float, Spend_2, (app::SeinEnergy * this_ptr, float amount, app::AbilityType__Enum type))
    IL2CPP_REGISTER_METHOD(0x00ACEDA0, bool, get_EnergyActive, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACEDC0, float, get_CurrentNormalized, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACE7A0, float, get_VisualMaxNormalized, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACE770, float, get_VisualMinNormalized, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACEE00, app::Object*, get_EnergyUpgradesCollected, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACEEA0, void, Update, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACF030, void, LateUpdate, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACF030, void, SetDirty, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACF050, void, RestoreAllEnergy, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACF080, void, OnRespawn, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACF1B0, void, ApplyBloodPactkDrain, (app::SeinEnergy * this_ptr, float energy_value))
    IL2CPP_REGISTER_METHOD(0x00ACF500, float, HealthToEnergyBloodPackCalculator, (app::SeinEnergy * this_ptr, float hp))
    IL2CPP_REGISTER_METHOD(0x00ACF550, bool, TryGetCurrentBloodPacktHPCost, (app::SeinEnergy * this_ptr, float* cost))
    IL2CPP_REGISTER_METHOD(0x00ACF7F0, void, OnGlobalShardsEquip, (app::SeinEnergy * this_ptr, app::PlayerUberStateShards_Shard* shard))
    IL2CPP_REGISTER_METHODINFO(0x047534A8, SeinEnergy_OnGlobalShardsEquip__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ACF7F0, void, OnGlobalShardsUnequip, (app::SeinEnergy * this_ptr, app::PlayerUberStateShards_Shard* shard))
    IL2CPP_REGISTER_METHODINFO(0x04783E38, SeinEnergy_OnGlobalShardsUnequip__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ACF890, void, OnGlobalShardsUpdated, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712418, SeinEnergy_OnGlobalShardsUpdated__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ACF8B0, void, OnEnergyShardUpdate, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACFAF0, void, OnSwapShardUpdate, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ACFB50, void, SetReferenceToSein, (app::SeinEnergy * this_ptr, app::SeinCharacter* sein))
    IL2CPP_REGISTER_METHOD(0x00AD0360, void, Apply, (app::SeinEnergy * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00AD03A0, void, Round, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FBE50, bool, get_ApplyOnEditor, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FBE60, void, set_ApplyOnEditor, (app::SeinEnergy * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IUberState__Array*, get_AffectingUberStates, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_AffectingUberStates, (app::SeinEnergy * this_ptr, app::IUberState__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::SeinEnergy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_AllTargets, (app::SeinEnergy * this_ptr, app::List_1_UnityEngine_GameObject_* value))
    IL2CPP_REGISTER_METHOD(0x00AD0470, void, ctor, (app::SeinEnergy * this_ptr))
} // namespace app::classes::SeinEnergy
