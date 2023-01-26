#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InheritanceAttribute.h>
#include <Modloader/app/structs/InheritanceLevel__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::InheritanceAttribute {
    IL2CPP_REGISTER_METHOD(0x01FEE680, void, ctor_1, (app::InheritanceAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor_2, (app::InheritanceAttribute * this_ptr, app::InheritanceLevel__Enum inheritance_level))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::InheritanceLevel__Enum, get_InheritanceLevel, (app::InheritanceAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEE740, bool, Equals, (app::InheritanceAttribute * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::InheritanceAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEE830, bool, IsDefaultAttribute, (app::InheritanceAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEE8F0, app::String*, ToString, (app::InheritanceAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEEA00, void, cctor, ())
} // namespace app::classes::System::ComponentModel::InheritanceAttribute
