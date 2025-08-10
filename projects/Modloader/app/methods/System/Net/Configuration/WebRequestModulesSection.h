#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/WebRequestModuleElementCollection.h>
#include <Modloader/app/structs/WebRequestModulesSection.h>

namespace app::classes::System::Net::Configuration::WebRequestModulesSection {
    IL2CPP_REGISTER_METHOD(0x01E999B0, void, ctor, app::WebRequestModulesSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E999E0, app::ConfigurationPropertyCollection*, get_Properties, app::WebRequestModulesSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99A10, app::WebRequestModuleElementCollection*, get_WebRequestModules, app::WebRequestModulesSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99A40, void, InitializeDefault, app::WebRequestModulesSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99A70, void, PostDeserialize, app::WebRequestModulesSection* this_ptr)
} // namespace app::classes::System::Net::Configuration::WebRequestModulesSection
