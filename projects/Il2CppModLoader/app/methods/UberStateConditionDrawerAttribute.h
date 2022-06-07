#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberStateConditionDrawerAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type *, get_ConditionType, (app::UberStateConditionDrawerAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::UberStateConditionDrawerAttribute * this_ptr, app::Type * condition_type))
}
