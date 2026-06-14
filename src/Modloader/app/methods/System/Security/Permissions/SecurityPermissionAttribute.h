#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPermission.h>
#include <Modloader/app/structs/SecurityPermissionAttribute.h>

namespace app::classes::System::Security::Permissions::SecurityPermissionAttribute {
    IL2CPP_REGISTER_METHOD(0x01E1BCD0, void, set_SkipVerification, app::SecurityPermissionAttribute* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IPermission*, CreatePermission, app::SecurityPermissionAttribute* this_ptr)
} // namespace app::classes::System::Security::Permissions::SecurityPermissionAttribute
