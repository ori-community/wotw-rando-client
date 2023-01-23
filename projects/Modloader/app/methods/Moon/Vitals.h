#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vitals.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/LimitedLifetime.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>

namespace app::classes::Moon::Vitals {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (app::Vitals * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FC830, app::SuspendableMask__Enum, get_Mask, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01192D70, void, set_Mask, (app::Vitals * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Health, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724040, float, get_MaxHealth, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01192E20, float, get_NormalizedHealth, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006410F0, int32_t, get_Difficulty, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F7CD0, void, set_Difficulty, (app::Vitals * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01192EE0, void, Prewarm, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01192FD0, void, SetHealth, (app::Vitals * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x01193110, void, SetHealthAndDontNotify, (app::Vitals * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x00724050, void, SetMaxHealth, (app::Vitals * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x01193120, void, OnEnable, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01193500, void, OnDisable, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011938D0, void, Awake, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01194070, void, Start, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01194080, void, OnDestroy, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01194570, void, OnRestoreCheckpoint, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475F3A8, Vitals_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011945C0, void, OnAfterCollisions, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472FE90, Vitals_OnAfterCollisions__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01194700, void, CacheSkinnedMeshRenderersIfNeeded, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011947C0, void, ProcessAllDamage, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011948F0, void, HandleFireShard, (app::Vitals * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x01195410, void, SpawnFireEffect, (app::Vitals * this_ptr, app::GameObject* prefab, app::Vector3 position, app::Transform* parent, float duration))
    IL2CPP_REGISTER_METHOD(0x01195770, void, CleanBurningEffectHooks, (app::Vitals * this_ptr, app::LimitedLifetime* effect))
    IL2CPP_REGISTER_METHODINFO(0x0477CBC0, Vitals_CleanBurningEffectHooks__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01195940, void, StopBurningEffects, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01195C20, void, OnEntityReset, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01195D60, void, OnDamageResultReceived, (app::Vitals * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHOD(0x01196BC0, void, HandleLifeShard, (app::Vitals * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x010F4F30, void, SetIsEnemy, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01197070, void, OnPoolSpawned, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011970B0, app::String*, get_StressTestName, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01197130, void, StartStressTest, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01197490, void, StressTestUpdate, (app::Vitals * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01197520, void, OnValidate, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C6AF0, app::StressTestStatus__Enum, get_StressTestStatus, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011976A0, void, set_StressTestStatus, (app::Vitals * this_ptr, app::StressTestStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x011976B0, bool, get_CanExecuteStressTest, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01197890, void, UseSpecialHealth, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01197B30, void, OnShardEquipped, (app::Vitals * this_ptr, app::PlayerUberStateShards_Shard* shard))
    IL2CPP_REGISTER_METHODINFO(0x04778360, Vitals_OnShardEquipped__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01197BA0, void, OnShardUnequipped, (app::Vitals * this_ptr, app::PlayerUberStateShards_Shard* shard))
    IL2CPP_REGISTER_METHODINFO(0x04798FE8, Vitals_OnShardUnequipped__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01197C10, void, UpdateFocusShardEffect_1, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01197D20, void, UpdateFocusShardEffect_2, (app::Vitals * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x01197DA0, void, ctor, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, (app::Vitals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, (app::Vitals * this_ptr))
} // namespace app::classes::Moon::Vitals
