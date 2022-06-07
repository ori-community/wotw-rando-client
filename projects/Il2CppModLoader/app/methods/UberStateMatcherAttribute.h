#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberStateMatcherAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type *, get_InputType, (app::UberStateMatcherAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::UberStateMatcherAttribute * this_ptr, app::Type * modifier_type))
}
