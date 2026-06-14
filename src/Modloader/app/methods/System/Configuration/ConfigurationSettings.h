#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationSettings.h>
#include <Modloader/app/structs/NameValueCollection.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::ConfigurationSettings {
    IL2CPP_REGISTER_METHOD(0x029619C0, void, ctor, app::ConfigurationSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029619F0, app::NameValueCollection*, get_AppSettings, )
    IL2CPP_REGISTER_METHOD(0x02961A20, app::Object*, GetConfig, app::String* section_name)
} // namespace app::classes::System::Configuration::ConfigurationSettings
