#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/TurtleShellRollAttackBehaviourNew.h>

namespace app::classes::Moon::TurtleShellRollAttackBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x005C0E90, void, Interrupt, app::TurtleShellRollAttackBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D211C0, void, OnEntityInitialized, app::TurtleShellRollAttackBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D21570, void, OnEnter, app::TurtleShellRollAttackBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00D216C0, app::BehaviourStatus__Enum, OnExecute, app::TurtleShellRollAttackBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00D21790, void, OnExit, app::TurtleShellRollAttackBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::TurtleShellRollAttackBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D217F0, void, ctor, app::TurtleShellRollAttackBehaviourNew* this_ptr)
} // namespace app::classes::Moon::TurtleShellRollAttackBehaviourNew
