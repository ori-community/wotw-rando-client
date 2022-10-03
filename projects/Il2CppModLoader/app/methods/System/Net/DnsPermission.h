#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::DnsPermission {
    IL2CPP_REGISTER_METHOD(0x01EB3EA0, void, ctor, (app::DnsPermission * this_ptr, app::PermissionState__Enum state))
    IL2CPP_REGISTER_METHODINFO(0x04709D30, DnsPermission__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EB3ED0, app::IPermission*, Copy, (app::DnsPermission * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797CC8, DnsPermission_Copy__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EB3F00, void, FromXml, (app::DnsPermission * this_ptr, app::SecurityElement* security_element))
    IL2CPP_REGISTER_METHODINFO(0x0476AFE0, DnsPermission_FromXml__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EB3F30, app::IPermission*, Intersect, (app::DnsPermission * this_ptr, app::IPermission* target))
    IL2CPP_REGISTER_METHODINFO(0x04748218, DnsPermission_Intersect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EB3F60, bool, IsSubsetOf, (app::DnsPermission * this_ptr, app::IPermission* target))
    IL2CPP_REGISTER_METHODINFO(0x0477C110, DnsPermission_IsSubsetOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EB3F90, bool, IsUnrestricted, (app::DnsPermission * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752450, DnsPermission_IsUnrestricted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EB3FC0, app::SecurityElement*, ToXml, (app::DnsPermission * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047606E0, DnsPermission_ToXml__MethodInfo)
} // namespace app::classes::System::Net::DnsPermission
