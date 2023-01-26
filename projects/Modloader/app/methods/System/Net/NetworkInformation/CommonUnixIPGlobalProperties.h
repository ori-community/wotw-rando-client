#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CommonUnixIPGlobalProperties.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::NetworkInformation::CommonUnixIPGlobalProperties {
    IL2CPP_REGISTER_METHOD(0x01E762B0, int32_t, getdomainname, (app::Byte__Array * name, int32_t len))
    IL2CPP_REGISTER_METHOD(0x01E76360, app::String*, get_DomainName, (app::CommonUnixIPGlobalProperties * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CommonUnixIPGlobalProperties * this_ptr))
} // namespace app::classes::System::Net::NetworkInformation::CommonUnixIPGlobalProperties
