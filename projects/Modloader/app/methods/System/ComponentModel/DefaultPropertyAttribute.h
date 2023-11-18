#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DefaultPropertyAttribute.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::DefaultPropertyAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DefaultPropertyAttribute * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::DefaultPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE2000, bool, Equals, (app::DefaultPropertyAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::DefaultPropertyAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE20F0, void, cctor, ())
} // namespace app::classes::System::ComponentModel::DefaultPropertyAttribute
