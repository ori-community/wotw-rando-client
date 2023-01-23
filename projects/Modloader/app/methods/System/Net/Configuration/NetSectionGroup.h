#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NetSectionGroup.h>
#include <Modloader/app/structs/AuthenticationModulesSection.h>
#include <Modloader/app/structs/ConnectionManagementSection.h>
#include <Modloader/app/structs/DefaultProxySection.h>
#include <Modloader/app/structs/MailSettingsSectionGroup.h>
#include <Modloader/app/structs/RequestCachingSection.h>
#include <Modloader/app/structs/SettingsSection.h>
#include <Modloader/app/structs/WebRequestModulesSection.h>
#include <Modloader/app/structs/Configuration.h>

namespace app::classes::System::Net::Configuration::NetSectionGroup {
    IL2CPP_REGISTER_METHOD(0x02019D70, void, ctor, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04789168, NetSectionGroup__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019DA0, app::AuthenticationModulesSection*, get_AuthenticationModules, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471D998, NetSectionGroup_get_AuthenticationModules__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019DD0, app::ConnectionManagementSection*, get_ConnectionManagement, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744448, NetSectionGroup_get_ConnectionManagement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019E00, app::DefaultProxySection*, get_DefaultProxy, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04762A68, NetSectionGroup_get_DefaultProxy__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019E30, app::MailSettingsSectionGroup*, get_MailSettings, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748A38, NetSectionGroup_get_MailSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019E60, app::RequestCachingSection*, get_RequestCaching, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706A08, NetSectionGroup_get_RequestCaching__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019E90, app::SettingsSection*, get_Settings, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756F78, NetSectionGroup_get_Settings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019EC0, app::WebRequestModulesSection*, get_WebRequestModules, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473DBF0, NetSectionGroup_get_WebRequestModules__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019EF0, app::NetSectionGroup*, GetSectionGroup, (app::Configuration * config))
    IL2CPP_REGISTER_METHODINFO(0x04751250, NetSectionGroup_GetSectionGroup__MethodInfo)
} // namespace app::classes::System::Net::Configuration::NetSectionGroup
