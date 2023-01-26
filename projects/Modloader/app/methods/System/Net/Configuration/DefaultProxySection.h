#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DefaultProxySection.h>
#include <Modloader/app/structs/BypassElementCollection.h>
#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/ModuleElement.h>
#include <Modloader/app/structs/ProxyElement.h>

namespace app::classes::System::Net::Configuration::DefaultProxySection {
    IL2CPP_REGISTER_METHOD(0x02018CE0, void, ctor, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018D10, app::BypassElementCollection*, get_BypassList, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018D40, bool, get_Enabled, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018D70, void, set_Enabled, (app::DefaultProxySection * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02018DA0, app::ModuleElement*, get_Module, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018DD0, app::ConfigurationPropertyCollection*, get_Properties, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018E00, app::ProxyElement*, get_Proxy, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018E30, bool, get_UseDefaultCredentials, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018E60, void, set_UseDefaultCredentials, (app::DefaultProxySection * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02018E90, void, PostDeserialize, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018EC0, void, Reset, (app::DefaultProxySection * this_ptr, app::ConfigurationElement* parent_element))
} // namespace app::classes::System::Net::Configuration::DefaultProxySection
