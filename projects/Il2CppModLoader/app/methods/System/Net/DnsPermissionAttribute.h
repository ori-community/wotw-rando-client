#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::DnsPermissionAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DnsPermissionAttribute * this_ptr, app::SecurityAction__Enum action))
    IL2CPP_REGISTER_METHOD(0x01EB3FF0, app::IPermission *, CreatePermission, (app::DnsPermissionAttribute * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477DC78, DnsPermissionAttribute_CreatePermission__MethodInfo)
}
