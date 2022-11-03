#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HornBugBossJumpBehaviour {
    IL2CPP_REGISTER_METHOD(0x00B65480, void, SetupTimelines, (app::HornBugBossJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B65EB0, void, PlayTimeline, (app::HornBugBossJumpBehaviour * this_ptr, app::MoonTimeline* timeline, float time_scale))
    IL2CPP_REGISTER_METHOD(0x00B65F10, bool, Update2, (app::HornBugBossJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B661F0, void, OnStopEvent, (app::HornBugBossJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047481E8, HornBugBossJumpBehaviour_OnStopEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B666B0, void, PlayTakeOff, (app::HornBugBossJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B667A0, void, Flip, (app::HornBugBossJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047794E8, HornBugBossJumpBehaviour_Flip__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B667F0, void, UpdateJumpTarget, (app::HornBugBossJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B670F0, void, UpdateJumpSpeed, (app::HornBugBossJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B67490, app::Vector3, get_OriginalTarget, (app::HornBugBossJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B674B0, void, set_OriginalTarget, (app::HornBugBossJumpBehaviour * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00B41E60, int32_t, get_AmountOfBounces, (app::HornBugBossJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B674D0, void, set_AmountOfBounces, (app::HornBugBossJumpBehaviour * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00B674E0, void, OnValidate, (app::HornBugBossJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B674F0, void, OnEntityInitialized, (app::HornBugBossJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B675F0, void, OnEnter, (app::HornBugBossJumpBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDamageDealt, (app::HornBugBossJumpBehaviour * this_ptr, app::DamageDealer* arg1, app::DamageResult arg2))
    IL2CPP_REGISTER_METHODINFO(0x047448F0, HornBugBossJumpBehaviour_OnDamageDealt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B67940, app::BehaviourStatus__Enum, OnExecute, (app::HornBugBossJumpBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B67980, void, OnExit, (app::HornBugBossJumpBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B67D30, void, SpawnImpactEffect, (app::HornBugBossJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B682C0, void, ctor, (app::HornBugBossJumpBehaviour * this_ptr))
} // namespace app::classes::HornBugBossJumpBehaviour
