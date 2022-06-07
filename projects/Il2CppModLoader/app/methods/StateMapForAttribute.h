#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StateMapForAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type *, get_ServableType, (app::StateMapForAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::StateMapForAttribute * this_ptr, app::Type * type))
}
