#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TurtleScreamBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x013D8AE0, void, OnEnter, (app::TurtleScreamBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013D8BC0, app::BehaviourStatus__Enum, OnExecute, (app::TurtleScreamBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F15500, void, OnExit, (app::TurtleScreamBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013D8C80, void, ctor, (app::TurtleScreamBehaviourNew * this_ptr))
} // namespace app::classes::TurtleScreamBehaviourNew
