#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::NetworkInformation::CommonUnixIPGlobalProperties {
    IL2CPP_REGISTER_METHOD(0x01E762B0, int32_t, getdomainname, (app::Byte__Array * name, int32_t len))
    IL2CPP_REGISTER_METHOD(0x01E76360, app::String*, get_DomainName, (app::CommonUnixIPGlobalProperties * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047736F8, CommonUnixIPGlobalProperties_get_DomainName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CommonUnixIPGlobalProperties * this_ptr))
} // namespace app::classes::System::Net::NetworkInformation::CommonUnixIPGlobalProperties
