#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::DefaultBindingPropertyAttribute {
    IL2CPP_REGISTER_METHOD(0x0063D180, void, ctor_1, (app::DefaultBindingPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::DefaultBindingPropertyAttribute * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Name, (app::DefaultBindingPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE1B80, bool, Equals, (app::DefaultBindingPropertyAttribute * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::DefaultBindingPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE1C70, void, cctor, ())
}
