#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_EndRollState.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew.h>

namespace app::classes::Moon::TurtleShellRollAttackBehaviourNew_EndRollState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::TurtleShellRollAttackBehaviourNew_EndRollState * this_ptr, app::TurtleShellRollAttackBehaviourNew* behaviour))
    IL2CPP_REGISTER_METHOD(0x00D21A50, void, OnEnter, (app::TurtleShellRollAttackBehaviourNew_EndRollState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D21C80, void, UpdateState, (app::TurtleShellRollAttackBehaviourNew_EndRollState * this_ptr))
} // namespace app::classes::Moon::TurtleShellRollAttackBehaviourNew_EndRollState
