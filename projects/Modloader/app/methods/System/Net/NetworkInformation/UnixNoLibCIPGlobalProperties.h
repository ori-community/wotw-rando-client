#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnixNoLibCIPGlobalProperties.h>

namespace app::classes::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties {
    IL2CPP_REGISTER_METHOD(0x01BC9820, app::String*, get_DomainName, app::UnixNoLibCIPGlobalProperties* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UnixNoLibCIPGlobalProperties* this_ptr)
} // namespace app::classes::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties
