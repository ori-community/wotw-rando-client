#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/List_1_Moon_DamageReceiver_DamageEntry_.h>
#include <Modloader/app/structs/DealDamageOverTime.h>
#include <Modloader/app/structs/LimitedLifetime.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageReceiver_OverrideInfo.h>
#include <Modloader/app/structs/IDamageResolver.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DamageReceiver_DamageEntry.h>
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/IDamageReciever.h>
#include <Modloader/app/structs/EffectTransformType__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum.h>

namespace app::classes::Moon::DamageReceiver {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (app::DamageReceiver * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FC830, app::SuspendableMask__Enum, get_Mask, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD0D40, void, set_Mask, (app::DamageReceiver * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::List_1_Moon_DamageReceiver_DamageEntry_*, get_DamageEntriesQueue, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_ShouldSpawnFXWhenDamaged, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675C70, void, set_ShouldSpawnFXWhenDamaged, (app::DamageReceiver * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00413160, bool, get_HasDealDamageOverTime, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::DealDamageOverTime*, get_DealDamageOverTime, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::LimitedLifetime*, get_LimitedLifetime, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_HasLimitedLifetime, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD0DF0, bool, get_BelongsToFlyingEnemy, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::Collider*, get_Collider, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::EntityTargetting*, get_Targetting, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD0FC0, bool, get_Active, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800850, void, set_Active, (app::DamageReceiver * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::Action_1_Damage_*, get_DamageReceived, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A63B0, void, set_DamageReceived, (app::DamageReceiver * this_ptr, app::Action_1_Damage_* value))
    IL2CPP_REGISTER_METHOD(0x00CD1090, bool, get_UsingDamageAngleLimit, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD1190, bool, ShouldFilterDamageType, (app::DamageReceiver * this_ptr, app::DamageType__Enum type))
    IL2CPP_REGISTER_METHOD(0x00CD11C0, void, Prewarm, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD11D0, void, CacheSerializedComponents, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD1330, void, Awake, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD1620, void, OnAfterDeserialize, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD16D0, void, OnBeforeSerialize, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAwake, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD16E0, void, OnDestroy, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD18D0, void, AddOverride, (app::DamageReceiver * this_ptr, app::DamageReceiver_OverrideInfo* info))
    IL2CPP_REGISTER_METHOD(0x00CD1990, void, RemoveOverride, (app::DamageReceiver * this_ptr, app::DamageReceiver_OverrideInfo* info))
    IL2CPP_REGISTER_METHOD(0x00CD1A30, void, OverrideDamageResolver, (app::DamageReceiver * this_ptr, app::IDamageResolver* damage_resolver))
    IL2CPP_REGISTER_METHOD(0x00CD1BC0, bool, IsDamageFilteredByReceiver, (app::DamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00CD1D80, bool, IsDamageFilteredByAngle, (app::DamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00CD1FD0, bool, IsDamageFilteredByPosition, (app::DamageReceiver * this_ptr, app::Vector3 dmg_pos))
    IL2CPP_REGISTER_METHOD(0x00CD21E0, bool, IsDamageFilteredByDirection, (app::DamageReceiver * this_ptr, app::Vector3 dmg_dir))
    IL2CPP_REGISTER_METHOD(0x00CD2430, void, OnRecieveDamage, (app::DamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00CD27D0, void, HandleUntouchableShard, (app::DamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00CD29E0, void, HandleAntiAirShard, (app::DamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00CD2B30, void, HandleChainLightningShard, (app::DamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00CD2CA0, void, HandleHollowEnergyShard_1, (app::DamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00CD3080, void, HandleHollowEnergyShard_2, (app::DamageReceiver * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHOD(0x00CD30A0, void, AddDamageEntry, (app::DamageReceiver * this_ptr, app::DamageReceiver_DamageEntry* entry))
    IL2CPP_REGISTER_METHOD(0x00CD31F0, app::DamageReceiver_DamageEntry*, AddDamage, (app::DamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00CD33E0, void, RemoveDamageEntry, (app::DamageReceiver * this_ptr, app::DamageReceiver_DamageEntry* entry))
    IL2CPP_REGISTER_METHOD(0x00CD34C0, void, ResetCachedDamageEntries, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD35D0, app::DamageResult, ResolveDamage, (app::DamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00CD37B0, void, OnAfterCollisions, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD38D0, void, ProcessAllDamage, (app::DamageReceiver * this_ptr, app::HashSet_1_System_Int32_* processed))
    IL2CPP_REGISTER_METHOD(0x00CD39F0, bool, ProcessDamage, (app::DamageReceiver * this_ptr, app::DamageReceiver_DamageEntry* entry, app::HashSet_1_System_Int32_* processed))
    IL2CPP_REGISTER_METHOD(0x00CD3E40, void, OnDamageResultReceived, (app::DamageReceiver * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x00CD40F0, void, PlayEffect, (app::EffectSpawn prefab, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x00CD4910, app::Transform*, SpawnEffect_1, (app::EffectSpawn prefab, app::Damage* damage, app::IDamageReciever* receiver, float rand, app::EffectTransformType__Enum override_transform_type))
    IL2CPP_REGISTER_METHOD(0x00CD4B50, app::Transform*, SpawnEffect_2, (app::GameObject * prefab, app::Damage* damage, app::IDamageReciever* receiver, float rand, app::EffectTransformType__Enum transform_type, float offset_to_center, bool optional))
    IL2CPP_REGISTER_METHOD(0x0063D070, bool, CanDetonateProjectiles, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD5320, void, OnDrawGizmos, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD5640, void, OnDrawGizmosSelected, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD59C0, app::String*, get_StressTestName, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD5A40, void, StartStressTest, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD5DB0, void, StressTestUpdate, (app::DamageReceiver * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B90B0, app::StressTestStatus__Enum, get_StressTestStatus, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD5DE0, void, set_StressTestStatus, (app::DamageReceiver * this_ptr, app::StressTestStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x00CD5DF0, bool, get_CanExecuteStressTest, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_VirtualTimelineTarget, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420230, app::VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD5FD0, app::String*, get_NameDisplayedOnClip, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD60A0, void, ctor, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CD6770, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::DamageReceiver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::DamageReceiver * this_ptr))
} // namespace app::classes::Moon::DamageReceiver
