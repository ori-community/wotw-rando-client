#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NamedPermissionSet.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PermissionState__Enum.h>
#include <Modloader/app/structs/SecurityElement.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::NamedPermissionSet {
    IL2CPP_REGISTER_METHOD(0x01E18EC0, void, ctor_1, app::NamedPermissionSet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E18F60, void, ctor_2, app::NamedPermissionSet* this_ptr, app::String* name, app::PermissionState__Enum state)
    IL2CPP_REGISTER_METHOD(0x01E19100, void, ctor_3, app::NamedPermissionSet* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Name, app::NamedPermissionSet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E19110, void, set_Name, app::NamedPermissionSet* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E19210, app::SecurityElement*, ToXml, app::NamedPermissionSet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E192F0, bool, Equals, app::NamedPermissionSet* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01E193E0, int32_t, GetHashCode, app::NamedPermissionSet* this_ptr)
} // namespace app::classes::System::Security::NamedPermissionSet
