#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::DebugDecorator {
    IL2CPP_REGISTER_METHOD(0x0300CA40, void, OnEnter, (app::DebugDecorator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0300CB20, app::BehaviourStatus__Enum, OnExecute, (app::DebugDecorator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0300CB70, void, ctor, (app::DebugDecorator * this_ptr))
}
