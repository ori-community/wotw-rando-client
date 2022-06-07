#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::NetworkInformation::UnixIPGlobalProperties {
    IL2CPP_REGISTER_METHOD(0x01BC97D0, app::IPEndPoint__Array *, GetActiveTcpListeners, (app::UnixIPGlobalProperties * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472C028, UnixIPGlobalProperties_GetActiveTcpListeners__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnixIPGlobalProperties * this_ptr))
}
