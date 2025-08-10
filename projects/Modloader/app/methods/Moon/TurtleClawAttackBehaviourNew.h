#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/TurtleClawAttackBehaviourNew.h>

namespace app::classes::Moon::TurtleClawAttackBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x00D201D0, void, OnEnter, app::TurtleClawAttackBehaviourNew* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00D20500, void, ProcessIfTargetIsStillInZone, app::TurtleClawAttackBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D20550, void, ctor, app::TurtleClawAttackBehaviourNew* this_ptr)
} // namespace app::classes::Moon::TurtleClawAttackBehaviourNew
