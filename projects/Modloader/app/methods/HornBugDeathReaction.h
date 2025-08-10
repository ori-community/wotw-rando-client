#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/HornBugDeathReaction.h>
#include <Modloader/app/structs/HornBugDeathReaction_State__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::HornBugDeathReaction {
    IL2CPP_REGISTER_METHOD(0x00B69260, void, OnInitializeTask, app::HornBugDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B69510, void, StartTimeline, app::HornBugDeathReaction* this_ptr, app::MoonTimeline* timeline, app::Action* on_stop)
    IL2CPP_REGISTER_METHOD(0x00B69560, void, ResetTimeline, app::HornBugDeathReaction* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00B69780, void, HandleCollision, app::HornBugDeathReaction* this_ptr, app::MoonControllerColliderHit hit)
    IL2CPP_REGISTER_METHOD(0x00B697D0, void, OnEnterTask, app::HornBugDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B69C40, app::BehaviourStatus__Enum, OnExecuteTask, app::HornBugDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B69D70, void, OnExitTask, app::HornBugDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B69DB0, void, SetState, app::HornBugDeathReaction* this_ptr, app::HornBugDeathReaction_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00B69E80, void, EnterState, app::HornBugDeathReaction* this_ptr, app::HornBugDeathReaction_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00B69F00, void, ExitState, app::HornBugDeathReaction* this_ptr, app::HornBugDeathReaction_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00B69F30, void, UpdateState, app::HornBugDeathReaction* this_ptr, app::HornBugDeathReaction_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00B6A160, void, EnterHit, app::HornBugDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6A190, void, EnterFall, app::HornBugDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6A1C0, void, EnterDeathEnd, app::HornBugDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6A350, void, ExitHit, app::HornBugDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6A350, void, ExitFall, app::HornBugDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6A350, void, ExitDeathEnd, app::HornBugDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6A360, void, UpdateHit, app::HornBugDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6A480, void, UpdateFall, app::HornBugDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6A680, void, UpdateDeathEnd, app::HornBugDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6A760, void, EnterDrown, app::HornBugDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6AAA0, bool, InWater, app::HornBugDeathReaction* this_ptr, float check_offset)
    IL2CPP_REGISTER_METHOD(0x00B6AC70, void, UpdateDrown, app::HornBugDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6A350, void, ExitDrown, app::HornBugDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, ProcessRootMotion, app::HornBugDeathReaction* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x00B6AEB0, void, ctor, app::HornBugDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B6AF60, void, _EnterDeathEnd_b__36_0, app::HornBugDeathReaction* this_ptr)
} // namespace app::classes::HornBugDeathReaction
