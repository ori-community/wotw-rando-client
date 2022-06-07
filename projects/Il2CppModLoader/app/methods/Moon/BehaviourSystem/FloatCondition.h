#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::FloatCondition {
    IL2CPP_REGISTER_METHOD(0x0300DCA0, app::String *, get_Info, (app::FloatCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300DD60, bool, OnCheck, (app::FloatCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0300DDD0, void, ctor, (app::FloatCondition * this_ptr))
}
