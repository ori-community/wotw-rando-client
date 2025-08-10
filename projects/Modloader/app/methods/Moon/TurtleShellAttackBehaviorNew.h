#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/TurtleShellAttackBehaviorNew.h>

namespace app::classes::Moon::TurtleShellAttackBehaviorNew {
    IL2CPP_REGISTER_METHOD(0x00D206B0, void, OnEnter, app::TurtleShellAttackBehaviorNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00D20AB0, app::BehaviourStatus__Enum, OnExecute, app::TurtleShellAttackBehaviorNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00D20C20, bool, FacingWall, app::TurtleShellAttackBehaviorNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D20DA0, void, OnExit, app::TurtleShellAttackBehaviorNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00D211A0, void, DisableWallHit, app::TurtleShellAttackBehaviorNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D211B0, void, EnableWallHit, app::TurtleShellAttackBehaviorNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D201C0, void, ctor, app::TurtleShellAttackBehaviorNew* this_ptr)
} // namespace app::classes::Moon::TurtleShellAttackBehaviorNew
