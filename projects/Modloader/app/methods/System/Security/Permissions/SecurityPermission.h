#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPermission.h>
#include <Modloader/app/structs/PermissionState__Enum.h>
#include <Modloader/app/structs/SecurityElement.h>
#include <Modloader/app/structs/SecurityPermission.h>
#include <Modloader/app/structs/SecurityPermissionFlag__Enum.h>

namespace app::classes::System::Security::Permissions::SecurityPermission {
    IL2CPP_REGISTER_METHOD(0x01E1B0F0, void, ctor_1, app::SecurityPermission* this_ptr, app::PermissionState__Enum state)
    IL2CPP_REGISTER_METHOD(0x01E1B120, void, ctor_2, app::SecurityPermission* this_ptr, app::SecurityPermissionFlag__Enum flag)
    IL2CPP_REGISTER_METHOD(0x01E1B120, void, set_Flags, app::SecurityPermission* this_ptr, app::SecurityPermissionFlag__Enum value)
    IL2CPP_REGISTER_METHOD(0x01E1B220, bool, IsUnrestricted, app::SecurityPermission* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E1B230, app::IPermission*, Copy, app::SecurityPermission* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E1B380, app::IPermission*, Intersect, app::SecurityPermission* this_ptr, app::IPermission* target)
    IL2CPP_REGISTER_METHOD(0x01E1B650, app::IPermission*, Union, app::SecurityPermission* this_ptr, app::IPermission* target)
    IL2CPP_REGISTER_METHOD(0x01E1B8E0, bool, IsSubsetOf, app::SecurityPermission* this_ptr, app::IPermission* target)
    IL2CPP_REGISTER_METHOD(0x01E1B940, void, FromXml, app::SecurityPermission* this_ptr, app::SecurityElement* esd)
    IL2CPP_REGISTER_METHOD(0x01E1BAD0, app::SecurityElement*, ToXml, app::SecurityPermission* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007A3190, bool, IsEmpty, app::SecurityPermission* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E1BBF0, app::SecurityPermission*, Cast, app::SecurityPermission* this_ptr, app::IPermission* target)
} // namespace app::classes::System::Security::Permissions::SecurityPermission
