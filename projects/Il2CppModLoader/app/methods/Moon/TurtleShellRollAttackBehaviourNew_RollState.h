#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::TurtleShellRollAttackBehaviourNew_RollState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::TurtleShellRollAttackBehaviourNew_RollState * this_ptr, app::TurtleShellRollAttackBehaviourNew* behaviour))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::TurtleShellRollAttackBehaviourNew_RollState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D23140, void, OnEnter, (app::TurtleShellRollAttackBehaviourNew_RollState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447380, void, OnExit, (app::TurtleShellRollAttackBehaviourNew_RollState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::TurtleShellRollAttackBehaviourNew_RollState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D23220, void, PlayAnimation_1, (app::TurtleShellRollAttackBehaviourNew_RollState * this_ptr, app::MoonAnimation* animation, app::Func_1_Boolean_* continue_condition))
    IL2CPP_REGISTER_METHOD(0x00D232B0, void, PlayAnimation_2, (app::TurtleShellRollAttackBehaviourNew_RollState * this_ptr, app::MoonTimeline* animation))
} // namespace app::classes::Moon::TurtleShellRollAttackBehaviourNew_RollState
