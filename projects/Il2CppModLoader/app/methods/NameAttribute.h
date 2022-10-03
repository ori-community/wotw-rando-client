#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::NameAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::NameAttribute_1 * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::NameAttribute_1 * this_ptr))
} // namespace app::classes::NameAttribute
