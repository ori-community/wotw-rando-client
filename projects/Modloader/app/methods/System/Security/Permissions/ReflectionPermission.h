#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReflectionPermission.h>
#include <Modloader/app/structs/PermissionState__Enum.h>
#include <Modloader/app/structs/ReflectionPermissionFlag__Enum.h>
#include <Modloader/app/structs/IPermission.h>
#include <Modloader/app/structs/SecurityElement.h>

namespace app::classes::System::Security::Permissions::ReflectionPermission {
    IL2CPP_REGISTER_METHOD(0x01E1A610, void, ctor_1, (app::ReflectionPermission * this_ptr, app::PermissionState__Enum state))
    IL2CPP_REGISTER_METHOD(0x01E1A640, void, ctor_2, (app::ReflectionPermission * this_ptr, app::ReflectionPermissionFlag__Enum flag))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::ReflectionPermissionFlag__Enum, get_Flags, (app::ReflectionPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1A650, void, set_Flags, (app::ReflectionPermission * this_ptr, app::ReflectionPermissionFlag__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0474A870, ReflectionPermission_set_Flags__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E1A750, app::IPermission*, Copy, (app::ReflectionPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1A8A0, void, FromXml, (app::ReflectionPermission * this_ptr, app::SecurityElement* esd))
    IL2CPP_REGISTER_METHOD(0x01E1AA50, app::IPermission*, Intersect, (app::ReflectionPermission * this_ptr, app::IPermission* target))
    IL2CPP_REGISTER_METHOD(0x01E1ABC0, bool, IsSubsetOf, (app::ReflectionPermission * this_ptr, app::IPermission* target))
    IL2CPP_REGISTER_METHOD(0x01E1AC20, bool, IsUnrestricted, (app::ReflectionPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1AC30, app::SecurityElement*, ToXml, (app::ReflectionPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1ADF0, app::IPermission*, Union, (app::ReflectionPermission * this_ptr, app::IPermission* other))
    IL2CPP_REGISTER_METHOD(0x01E1B010, app::ReflectionPermission*, Cast, (app::ReflectionPermission * this_ptr, app::IPermission* target))
} // namespace app::classes::System::Security::Permissions::ReflectionPermission
