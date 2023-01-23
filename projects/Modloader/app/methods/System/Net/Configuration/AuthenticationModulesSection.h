#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AuthenticationModulesSection.h>
#include <Modloader/app/structs/AuthenticationModuleElementCollection.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>

namespace app::classes::System::Net::Configuration::AuthenticationModulesSection {
    IL2CPP_REGISTER_METHOD(0x02018410, void, ctor, (app::AuthenticationModulesSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047895E8, AuthenticationModulesSection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018440, app::AuthenticationModuleElementCollection*, get_AuthenticationModules, (app::AuthenticationModulesSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04792198, AuthenticationModulesSection_get_AuthenticationModules__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018470, app::ConfigurationPropertyCollection*, get_Properties, (app::AuthenticationModulesSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476FD00, AuthenticationModulesSection_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020184A0, void, InitializeDefault, (app::AuthenticationModulesSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047539B0, AuthenticationModulesSection_InitializeDefault__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020184D0, void, PostDeserialize, (app::AuthenticationModulesSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04758840, AuthenticationModulesSection_PostDeserialize__MethodInfo)
} // namespace app::classes::System::Net::Configuration::AuthenticationModulesSection
