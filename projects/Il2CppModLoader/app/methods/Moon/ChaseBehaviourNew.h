#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::ChaseBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x00CC43F0, void, OnEnter, (app::ChaseBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CC4490, app::BehaviourStatus__Enum, OnExecute, (app::ChaseBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CC4830, void, ctor, (app::ChaseBehaviourNew * this_ptr))
} // namespace app::classes::Moon::ChaseBehaviourNew
