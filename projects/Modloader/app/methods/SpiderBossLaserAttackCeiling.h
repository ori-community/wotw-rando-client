#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpiderBossLaserAttackCeiling.h>
#include <Modloader/app/structs/SpiderBossLaserAttackCeiling_State__Enum.h>

namespace app::classes::SpiderBossLaserAttackCeiling {
    IL2CPP_REGISTER_METHOD(0x011B1490, void, OnEnter, app::SpiderBossLaserAttackCeiling* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011B1820, app::BehaviourStatus__Enum, OnExecute, app::SpiderBossLaserAttackCeiling* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011B1840, void, OnExit, app::SpiderBossLaserAttackCeiling* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011B1B60, void, InitializeCancellableController, app::SpiderBossLaserAttackCeiling* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B1BD0, void, InitializeHitReactionController, app::SpiderBossLaserAttackCeiling* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B1C40, void, ChangeState, app::SpiderBossLaserAttackCeiling* this_ptr, app::SpiderBossLaserAttackCeiling_State__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, UpdateState, app::SpiderBossLaserAttackCeiling* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B1CA0, void, OnEnterTransition, app::SpiderBossLaserAttackCeiling* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B1CD0, void, OnEnterShootAndEnd, app::SpiderBossLaserAttackCeiling* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B1D00, void, OnTransitionTimelineEnded, app::SpiderBossLaserAttackCeiling* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B1D40, void, OnShootAndDescendTimelineEnded, app::SpiderBossLaserAttackCeiling* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B1D60, void, UpdateAiming, app::SpiderBossLaserAttackCeiling* this_ptr, float angle)
    IL2CPP_REGISTER_METHOD(0x011B1EC0, void, StartAttack, app::SpiderBossLaserAttackCeiling* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011B1480, void, ctor, app::SpiderBossLaserAttackCeiling* this_ptr)
} // namespace app::classes::SpiderBossLaserAttackCeiling
