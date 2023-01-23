#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DefaultProxySection.h>
#include <Modloader/app/structs/BypassElementCollection.h>
#include <Modloader/app/structs/ModuleElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/ProxyElement.h>
#include <Modloader/app/structs/ConfigurationElement.h>

namespace app::classes::System::Net::Configuration::DefaultProxySection {
    IL2CPP_REGISTER_METHOD(0x02018CE0, void, ctor, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04770548, DefaultProxySection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018D10, app::BypassElementCollection*, get_BypassList, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474D1D8, DefaultProxySection_get_BypassList__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018D40, bool, get_Enabled, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476B018, DefaultProxySection_get_Enabled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018D70, void, set_Enabled, (app::DefaultProxySection * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04726818, DefaultProxySection_set_Enabled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018DA0, app::ModuleElement*, get_Module, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761A60, DefaultProxySection_get_Module__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018DD0, app::ConfigurationPropertyCollection*, get_Properties, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474CE50, DefaultProxySection_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018E00, app::ProxyElement*, get_Proxy, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768D70, DefaultProxySection_get_Proxy__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018E30, bool, get_UseDefaultCredentials, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724180, DefaultProxySection_get_UseDefaultCredentials__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018E60, void, set_UseDefaultCredentials, (app::DefaultProxySection * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04755E70, DefaultProxySection_set_UseDefaultCredentials__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018E90, void, PostDeserialize, (app::DefaultProxySection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04762C80, DefaultProxySection_PostDeserialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018EC0, void, Reset, (app::DefaultProxySection * this_ptr, app::ConfigurationElement* parent_element))
    IL2CPP_REGISTER_METHODINFO(0x047605F8, DefaultProxySection_Reset__MethodInfo)
} // namespace app::classes::System::Net::Configuration::DefaultProxySection
