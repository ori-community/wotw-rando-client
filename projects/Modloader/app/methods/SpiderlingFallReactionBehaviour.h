#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpiderlingFallReactionBehaviour.h>
#include <Modloader/app/structs/SpiderlingFallReactionBehaviour_FallState__Enum.h>

namespace app::classes::SpiderlingFallReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::MoonTimeline*, get_EffectiveLandSequenceNew, app::SpiderlingFallReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C1E60, bool, get_ShouldLand, app::SpiderlingFallReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C1EF0, void, OnInitializeTask, app::SpiderlingFallReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011C1FC0, void, OnEnterTask, app::SpiderlingFallReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011C2280, app::BehaviourStatus__Enum, OnExecuteTask, app::SpiderlingFallReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011C2630, void, OnExitTask, app::SpiderlingFallReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011C2920, void, HandleCollision, app::SpiderlingFallReactionBehaviour* this_ptr, app::MoonControllerColliderHit hit)
    IL2CPP_REGISTER_METHOD(0x011C2BE0, void, UpdateState, app::SpiderlingFallReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x011C2C30,
        void,
        ChangeState,
        app::SpiderlingFallReactionBehaviour* this_ptr,
        app::SpiderlingFallReactionBehaviour_FallState__Enum new_state
    )
    IL2CPP_REGISTER_METHOD(0x011C2CE0, void, OnEnterFalling, app::SpiderlingFallReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C3150, void, FallingUpdate, app::SpiderlingFallReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C3910, void, OnEnterLand, app::SpiderlingFallReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LandUpdate, app::SpiderlingFallReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C3D70, void, OnEndLand, app::SpiderlingFallReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C3FA0, void, OnEnterCollision, app::SpiderlingFallReactionBehaviour* this_ptr, app::MoonControllerColliderHit hit)
    IL2CPP_REGISTER_METHOD(0x011C4300, void, CollisionUpdate, app::SpiderlingFallReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C45E0, void, PlayShakeTimeline, app::SpiderlingFallReactionBehaviour* this_ptr, bool forced)
    IL2CPP_REGISTER_METHOD(0x011C4700, void, ctor, app::SpiderlingFallReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C4760, bool, _OnEnterFalling_b__48_0, app::SpiderlingFallReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C4760, bool, _FallingUpdate_b__49_0, app::SpiderlingFallReactionBehaviour* this_ptr)
} // namespace app::classes::SpiderlingFallReactionBehaviour
