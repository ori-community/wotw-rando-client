#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::TurtleShellRollAttackBehaviourNew_StartRollState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::TurtleShellRollAttackBehaviourNew_StartRollState * this_ptr, app::TurtleShellRollAttackBehaviourNew * behaviour))
    IL2CPP_REGISTER_METHOD(0x00D232E0, void, OnEnter, (app::TurtleShellRollAttackBehaviourNew_StartRollState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopTimelineEvent, (app::TurtleShellRollAttackBehaviourNew_StartRollState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04719930, TurtleShellRollAttackBehaviourNew_StartRollState_OnStopTimelineEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00D235E0, void, UpdateState, (app::TurtleShellRollAttackBehaviourNew_StartRollState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D23990, void, OnExit, (app::TurtleShellRollAttackBehaviourNew_StartRollState * this_ptr))
}
