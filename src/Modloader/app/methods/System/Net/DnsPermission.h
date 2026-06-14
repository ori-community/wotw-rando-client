#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DnsPermission.h>
#include <Modloader/app/structs/IPermission.h>
#include <Modloader/app/structs/PermissionState__Enum.h>
#include <Modloader/app/structs/SecurityElement.h>

namespace app::classes::System::Net::DnsPermission {
    IL2CPP_REGISTER_METHOD(0x01EB3EA0, void, ctor, app::DnsPermission* this_ptr, app::PermissionState__Enum state)
    IL2CPP_REGISTER_METHOD(0x01EB3ED0, app::IPermission*, Copy, app::DnsPermission* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB3F00, void, FromXml, app::DnsPermission* this_ptr, app::SecurityElement* security_element)
    IL2CPP_REGISTER_METHOD(0x01EB3F30, app::IPermission*, Intersect, app::DnsPermission* this_ptr, app::IPermission* target)
    IL2CPP_REGISTER_METHOD(0x01EB3F60, bool, IsSubsetOf, app::DnsPermission* this_ptr, app::IPermission* target)
    IL2CPP_REGISTER_METHOD(0x01EB3F90, bool, IsUnrestricted, app::DnsPermission* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB3FC0, app::SecurityElement*, ToXml, app::DnsPermission* this_ptr)
} // namespace app::classes::System::Net::DnsPermission
