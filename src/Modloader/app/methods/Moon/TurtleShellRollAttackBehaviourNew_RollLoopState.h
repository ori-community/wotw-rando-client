#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew_RollLoopState.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::TurtleShellRollAttackBehaviourNew_RollLoopState {
    IL2CPP_REGISTER_METHOD(
        0x00D21D80,
        void,
        ctor,
        app::TurtleShellRollAttackBehaviourNew_RollLoopState* this_ptr,
        app::TurtleShellRollAttackBehaviourNew* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x00D21D90, void, OnEnter, app::TurtleShellRollAttackBehaviourNew_RollLoopState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D222C0, void, UpdateState, app::TurtleShellRollAttackBehaviourNew_RollLoopState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D22B10, void, EndState, app::TurtleShellRollAttackBehaviourNew_RollLoopState* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00D22D00,
        void,
        OnLand,
        app::TurtleShellRollAttackBehaviourNew_RollLoopState* this_ptr,
        app::Vector3 normal,
        app::Collider* collider
    )
    IL2CPP_REGISTER_METHOD(0x00D22F60, void, Impact, app::TurtleShellRollAttackBehaviourNew_RollLoopState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, _OnEnter_b__11_0, app::TurtleShellRollAttackBehaviourNew_RollLoopState* this_ptr)
} // namespace app::classes::Moon::TurtleShellRollAttackBehaviourNew_RollLoopState
