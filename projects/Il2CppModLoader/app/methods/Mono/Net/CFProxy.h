#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Net::CFProxy {
    IL2CPP_REGISTER_METHOD(0x02178A10, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::CFProxy * this_ptr, app::CFDictionary* settings))
    IL2CPP_REGISTER_METHOD(0x02178C70, app::CFProxyType__Enum, CFProxyTypeToEnum, (void* type))
    IL2CPP_REGISTER_METHOD(0x02178E60, void*, get_AutoConfigurationJavaScript, (app::CFProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02178F50, void*, get_AutoConfigurationUrl, (app::CFProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02179040, app::String*, get_HostName, (app::CFProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02179140, app::String*, get_Password, (app::CFProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02179240, int32_t, get_Port, (app::CFProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02179450, app::CFProxyType__Enum, get_ProxyType, (app::CFProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02179730, app::String*, get_Username, (app::CFProxy * this_ptr))
} // namespace app::classes::Mono::Net::CFProxy
