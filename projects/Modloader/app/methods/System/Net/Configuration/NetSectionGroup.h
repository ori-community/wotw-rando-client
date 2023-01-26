#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NetSectionGroup.h>
#include <Modloader/app/structs/AuthenticationModulesSection.h>
#include <Modloader/app/structs/Configuration.h>
#include <Modloader/app/structs/ConnectionManagementSection.h>
#include <Modloader/app/structs/DefaultProxySection.h>
#include <Modloader/app/structs/MailSettingsSectionGroup.h>
#include <Modloader/app/structs/RequestCachingSection.h>
#include <Modloader/app/structs/SettingsSection.h>
#include <Modloader/app/structs/WebRequestModulesSection.h>

namespace app::classes::System::Net::Configuration::NetSectionGroup {
    IL2CPP_REGISTER_METHOD(0x02019D70, void, ctor, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019DA0, app::AuthenticationModulesSection*, get_AuthenticationModules, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019DD0, app::ConnectionManagementSection*, get_ConnectionManagement, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019E00, app::DefaultProxySection*, get_DefaultProxy, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019E30, app::MailSettingsSectionGroup*, get_MailSettings, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019E60, app::RequestCachingSection*, get_RequestCaching, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019E90, app::SettingsSection*, get_Settings, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019EC0, app::WebRequestModulesSection*, get_WebRequestModules, (app::NetSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019EF0, app::NetSectionGroup*, GetSectionGroup, (app::Configuration * config))
} // namespace app::classes::System::Net::Configuration::NetSectionGroup
