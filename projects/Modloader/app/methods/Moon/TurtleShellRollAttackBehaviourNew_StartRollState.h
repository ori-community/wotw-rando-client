#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_StartRollState.h>

namespace app::classes::Moon::TurtleShellRollAttackBehaviourNew_StartRollState {
    IL2CPP_REGISTER_METHOD(
        0x002FA490,
        void,
        ctor,
        app::TurtleShellRollAttackBehaviourNew_StartRollState* this_ptr,
        app::TurtleShellRollAttackBehaviourNew* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x00D232E0, void, OnEnter, app::TurtleShellRollAttackBehaviourNew_StartRollState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopTimelineEvent, app::TurtleShellRollAttackBehaviourNew_StartRollState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D235E0, void, UpdateState, app::TurtleShellRollAttackBehaviourNew_StartRollState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D23990, void, OnExit, app::TurtleShellRollAttackBehaviourNew_StartRollState* this_ptr)
} // namespace app::classes::Moon::TurtleShellRollAttackBehaviourNew_StartRollState
