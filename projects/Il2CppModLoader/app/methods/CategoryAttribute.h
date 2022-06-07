#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CategoryAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Category, (app::CategoryAttribute_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Category, (app::CategoryAttribute_2 * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x0102E040, void, ctor_1, (app::CategoryAttribute_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::CategoryAttribute_2 * this_ptr, app::String * category))
}
