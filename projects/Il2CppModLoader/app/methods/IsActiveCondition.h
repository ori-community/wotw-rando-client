#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::IsActiveCondition {
    IL2CPP_REGISTER_METHOD(0x00645CA0, app::GameObject*, get_EffectiveTarget, (app::IsActiveCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00645D80, bool, Validate, (app::IsActiveCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00626870, void, ctor, (app::IsActiveCondition * this_ptr))
} // namespace app::classes::IsActiveCondition
