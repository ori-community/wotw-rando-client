#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::ImmutableObjectAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, (app::ImmutableObjectAttribute * this_ptr, bool immutable))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Immutable, (app::ImmutableObjectAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEE2C0, bool, Equals, (app::ImmutableObjectAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::ImmutableObjectAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEE390, bool, IsDefaultAttribute, (app::ImmutableObjectAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEE450, void, cctor, ())
} // namespace app::classes::System::ComponentModel::ImmutableObjectAttribute
