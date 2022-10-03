#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::DisplayNameAttribute {
    IL2CPP_REGISTER_METHOD(0x01FE73C0, void, ctor_1, (app::DisplayNameAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::DisplayNameAttribute * this_ptr, app::String* display_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_DisplayName, (app::DisplayNameAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_DisplayNameValue, (app::DisplayNameAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_DisplayNameValue, (app::DisplayNameAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01FE7450, bool, Equals, (app::DisplayNameAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01FE2F50, int32_t, GetHashCode, (app::DisplayNameAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE75A0, bool, IsDefaultAttribute, (app::DisplayNameAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE7660, void, cctor, ())
} // namespace app::classes::System::ComponentModel::DisplayNameAttribute
