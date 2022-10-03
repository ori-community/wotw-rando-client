#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::DefaultEventAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DefaultEventAttribute * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::DefaultEventAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE1DC0, bool, Equals, (app::DefaultEventAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::DefaultEventAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE1EB0, void, cctor, ())
} // namespace app::classes::System::ComponentModel::DefaultEventAttribute
