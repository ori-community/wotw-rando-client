#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DnsPermissionAttribute.h>
#include <Modloader/app/structs/IPermission.h>
#include <Modloader/app/structs/SecurityAction__Enum.h>

namespace app::classes::System::Net::DnsPermissionAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DnsPermissionAttribute* this_ptr, app::SecurityAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x01EB3FF0, app::IPermission*, CreatePermission, app::DnsPermissionAttribute* this_ptr)
} // namespace app::classes::System::Net::DnsPermissionAttribute
