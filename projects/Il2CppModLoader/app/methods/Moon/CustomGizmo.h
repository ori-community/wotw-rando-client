#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::CustomGizmo {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type *, get_Type, (app::CustomGizmo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::CustomGizmo * this_ptr, app::Type * type))
}
