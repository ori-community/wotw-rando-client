#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClientSettingsSection.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/SettingElementCollection.h>

namespace app::classes::System::Configuration::ClientSettingsSection {
    IL2CPP_REGISTER_METHOD(0x029615A0, void, ctor, app::ClientSettingsSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029615D0, app::ConfigurationPropertyCollection*, get_Properties, app::ClientSettingsSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02961600, app::SettingElementCollection*, get_Settings, app::ClientSettingsSection* this_ptr)
} // namespace app::classes::System::Configuration::ClientSettingsSection
