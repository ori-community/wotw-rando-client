#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Configuration::SettingsSection {
    IL2CPP_REGISTER_METHOD(0x01E98900, void, ctor, (app::SettingsSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04763018, SettingsSection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98930, app::HttpListenerElement*, get_HttpListener, (app::SettingsSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477CF28, SettingsSection_get_HttpListener__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98960, app::HttpWebRequestElement*, get_HttpWebRequest, (app::SettingsSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047401B0, SettingsSection_get_HttpWebRequest__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98990, app::Ipv6Element*, get_Ipv6, (app::SettingsSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476F670, SettingsSection_get_Ipv6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E989C0, app::PerformanceCountersElement*, get_PerformanceCounters, (app::SettingsSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04738A40, SettingsSection_get_PerformanceCounters__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E989F0, app::ConfigurationPropertyCollection*, get_Properties, (app::SettingsSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047719E0, SettingsSection_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98A20, app::ServicePointManagerElement*, get_ServicePointManager, (app::SettingsSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047407F0, SettingsSection_get_ServicePointManager__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98A50, app::SocketElement*, get_Socket, (app::SettingsSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047729E0, SettingsSection_get_Socket__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98A80, app::WebProxyScriptElement*, get_WebProxyScript, (app::SettingsSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D4B8, SettingsSection_get_WebProxyScript__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98AB0, app::WebUtilityElement*, get_WebUtility, (app::SettingsSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478B388, SettingsSection_get_WebUtility__MethodInfo)
} // namespace app::classes::System::Net::Configuration::SettingsSection
