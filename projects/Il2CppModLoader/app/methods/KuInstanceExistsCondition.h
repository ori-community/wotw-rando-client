#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::KuInstanceExistsCondition {
    IL2CPP_REGISTER_METHOD(0x0123A250, bool, Validate, (app::KuInstanceExistsCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0123A340, app::String*, GetNiceName, (app::KuInstanceExistsCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::KuInstanceExistsCondition * this_ptr))
} // namespace app::classes::KuInstanceExistsCondition
