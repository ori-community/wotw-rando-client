#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AuthenticationModuleElementCollection.h>
#include <Modloader/app/structs/AuthenticationModulesSection.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>

namespace app::classes::System::Net::Configuration::AuthenticationModulesSection {
    IL2CPP_REGISTER_METHOD(0x02018410, void, ctor, app::AuthenticationModulesSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02018440, app::AuthenticationModuleElementCollection*, get_AuthenticationModules, app::AuthenticationModulesSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02018470, app::ConfigurationPropertyCollection*, get_Properties, app::AuthenticationModulesSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020184A0, void, InitializeDefault, app::AuthenticationModulesSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020184D0, void, PostDeserialize, app::AuthenticationModulesSection* this_ptr)
} // namespace app::classes::System::Net::Configuration::AuthenticationModulesSection
