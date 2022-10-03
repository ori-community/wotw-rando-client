#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::TurtleClawAttackBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x00D201D0, void, OnEnter, (app::TurtleClawAttackBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D20500, void, ProcessIfTargetIsStillInZone, (app::TurtleClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047362A0, TurtleClawAttackBehaviourNew_ProcessIfTargetIsStillInZone__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00D20550, void, ctor, (app::TurtleClawAttackBehaviourNew * this_ptr))
} // namespace app::classes::Moon::TurtleClawAttackBehaviourNew
