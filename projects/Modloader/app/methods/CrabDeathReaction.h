#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/CrabDeathReaction.h>
#include <Modloader/app/structs/CrabDeathReaction_DeathState__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CrabDeathReaction {
    IL2CPP_REGISTER_METHOD(0x00DB1CF0, void, OnInitializeTask, app::CrabDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00DB1FA0, void, StartTimeline, app::CrabDeathReaction* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00DB1FD0, void, ResetTimeline, app::CrabDeathReaction* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00DB21F0, void, HandleCollision, app::CrabDeathReaction* this_ptr, app::MoonControllerColliderHit hit)
    IL2CPP_REGISTER_METHOD(0x00DB2250, app::CrabDeathReaction_DeathState__Enum, GetNextOnHitGroundState, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB2280, void, OnEnterTask, app::CrabDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00DB2720, app::BehaviourStatus__Enum, OnExecuteTask, app::CrabDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00DB2740, void, OnExitTask, app::CrabDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00DB2780, void, SetState, app::CrabDeathReaction* this_ptr, app::CrabDeathReaction_DeathState__Enum state)
    IL2CPP_REGISTER_METHOD(0x00DB2800, void, EnterState, app::CrabDeathReaction* this_ptr, app::CrabDeathReaction_DeathState__Enum state)
    IL2CPP_REGISTER_METHOD(0x00DB2A30, void, ExitState, app::CrabDeathReaction* this_ptr, app::CrabDeathReaction_DeathState__Enum state)
    IL2CPP_REGISTER_METHOD(0x00DB2A80, void, UpdateState, app::CrabDeathReaction* this_ptr, app::CrabDeathReaction_DeathState__Enum state)
    IL2CPP_REGISTER_METHOD(0x00DB2DE0, void, EnterHit, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB2E20, void, EnterSpin, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB2EF0, void, EnterFall, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB2F20, void, EnterBounce, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB2FD0, void, EnterDeathEnd, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB3170, void, EnterDrown, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB3440, void, ExitHit, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB3440, void, ExitSpin, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB3440, void, ExitFall, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB3440, void, ExitBounce, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB3440, void, ExitDeathEnd, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB3440, void, ExitDrown, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB3450, void, UpdateHit, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateSpin, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateFall, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB3530, void, UpdateBounce, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB3610, void, UpdateDeathEnd, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB36F0, bool, InWater, app::CrabDeathReaction* this_ptr, float check_offset)
    IL2CPP_REGISTER_METHOD(0x00DB38E0, void, UpdateDrown, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB3B20, void, PlayShake, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB3C10, void, EndReaction, app::CrabDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB3C70, app::Vector3, ProcessRootMotion, app::CrabDeathReaction* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x00DB3CC0, void, ctor, app::CrabDeathReaction* this_ptr)
} // namespace app::classes::CrabDeathReaction
