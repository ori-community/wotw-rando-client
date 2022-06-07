#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::ForceSuccessDecorator {
    IL2CPP_REGISTER_METHOD(0x0300DDF0, app::BehaviourStatus__Enum, OnExecute, (app::ForceSuccessDecorator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::ForceSuccessDecorator * this_ptr))
}
