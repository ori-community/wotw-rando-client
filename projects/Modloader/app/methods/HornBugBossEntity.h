#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HornBugBossEntity.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/HornbugBossBaseBehaviour.h>
#include <Modloader/app/structs/List_1_DynamicInstantiationDescriptor_.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::HornBugBossEntity {
    IL2CPP_REGISTER_METHOD(0x00B62280, void, BlockedHitEffectPrefabInstantiation, (app::HornBugBossEntity * this_ptr, app::List_1_DynamicInstantiationDescriptor_* instantiations))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseDeathLoopTimeLimit, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B62400, float, GetFacingDistToPoint, (app::HornBugBossEntity * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00B62580, float, get_FwdWallDist, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B62710, float, get_BwdWallDist, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanOptimizeBehaviourTreeEvaluation, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B628A0, bool, get_IsOnScreen, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B62A20, bool, ShouldShowHealthBar, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B62B20, void, OnAwake, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, OnDeathFinished, (app::HornBugBossEntity * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHOD(0x00B62D60, void, Start, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B62E70, void, DisableSelfCollision, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B62F80, void, Initialize, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B632C0, void, OnDestroy, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B63370, void, OnEnable, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B63460, void, OnDisable, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B63470, void, ResetLocomotion, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B635F0, void, DeactivateBoss, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B636F0, void, OnDied, (app::HornBugBossEntity * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x00B637F0, void, OnDamageBlocked, (app::HornBugBossEntity * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x00B63980, void, OnPostRestoreCheckpoint, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B63B30, void, OnFixedUpdate, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B64040, void, ResolveDamage, (app::HornBugBossEntity * this_ptr, app::DamageResult* damage_result))
    IL2CPP_REGISTER_METHOD(0x00B64210, app::Vector3, get_TargetPosition, (app::HornBugBossEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B642E0, void, UpdateCrossDependentCooldowns, (app::HornBugBossEntity * this_ptr, app::HornbugBossBaseBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00B64480, void, HornbugBaseBehaviourEntered, (app::HornBugBossEntity * this_ptr, app::HornbugBossBaseBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00B64500, void, HornbugBaseBehaviourExecuted, (app::HornBugBossEntity * this_ptr, app::HornbugBossBaseBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00B64510, void, HornbugBaseBehaviourExited, (app::HornBugBossEntity * this_ptr, app::HornbugBossBaseBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00B645F0, float, GetUtilityForBehaviour, (app::HornBugBossEntity * this_ptr, app::HornbugBossBaseBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00B64D40, void, ctor, (app::HornBugBossEntity * this_ptr))
} // namespace app::classes::HornBugBossEntity
