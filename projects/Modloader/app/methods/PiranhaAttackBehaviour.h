#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PiranhaAttackBehaviour.h>
#include <Modloader/app/structs/PiranhaAttackBehaviour_State__Enum.h>

namespace app::classes::PiranhaAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x0115C5B0, void, OnEntityInitialized, app::PiranhaAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0115C660, void, OnEnter, app::PiranhaAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0115CA60, app::BehaviourStatus__Enum, OnExecute, app::PiranhaAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0115CF60, void, ChangeState, app::PiranhaAttackBehaviour* this_ptr, app::PiranhaAttackBehaviour_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x0115D220, void, OnExit, app::PiranhaAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0115D280, void, PlayTimeline, app::PiranhaAttackBehaviour* this_ptr, app::MoonTimeline* timeline, app::Action* on_stop)
    IL2CPP_REGISTER_METHOD(0x0115D2F0, void, ResetCurrentTimeline, app::PiranhaAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0115D3E0, void, ctor, app::PiranhaAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0115D490, void, _OnEnter_b__17_0, app::PiranhaAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0115D4B0, void, _OnEnter_b__17_1, app::PiranhaAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0115D4D0, void, _ChangeState_b__19_0, app::PiranhaAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00754B80, void, _ChangeState_b__19_1, app::PiranhaAttackBehaviour* this_ptr)
} // namespace app::classes::PiranhaAttackBehaviour
