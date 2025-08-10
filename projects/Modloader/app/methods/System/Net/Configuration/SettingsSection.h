#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/HttpListenerElement.h>
#include <Modloader/app/structs/HttpWebRequestElement.h>
#include <Modloader/app/structs/Ipv6Element.h>
#include <Modloader/app/structs/PerformanceCountersElement.h>
#include <Modloader/app/structs/ServicePointManagerElement.h>
#include <Modloader/app/structs/SettingsSection.h>
#include <Modloader/app/structs/SocketElement.h>
#include <Modloader/app/structs/WebProxyScriptElement.h>
#include <Modloader/app/structs/WebUtilityElement.h>

namespace app::classes::System::Net::Configuration::SettingsSection {
    IL2CPP_REGISTER_METHOD(0x01E98900, void, ctor, app::SettingsSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98930, app::HttpListenerElement*, get_HttpListener, app::SettingsSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98960, app::HttpWebRequestElement*, get_HttpWebRequest, app::SettingsSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98990, app::Ipv6Element*, get_Ipv6, app::SettingsSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E989C0, app::PerformanceCountersElement*, get_PerformanceCounters, app::SettingsSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E989F0, app::ConfigurationPropertyCollection*, get_Properties, app::SettingsSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98A20, app::ServicePointManagerElement*, get_ServicePointManager, app::SettingsSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98A50, app::SocketElement*, get_Socket, app::SettingsSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98A80, app::WebProxyScriptElement*, get_WebProxyScript, app::SettingsSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98AB0, app::WebUtilityElement*, get_WebUtility, app::SettingsSection* this_ptr)
} // namespace app::classes::System::Net::Configuration::SettingsSection
