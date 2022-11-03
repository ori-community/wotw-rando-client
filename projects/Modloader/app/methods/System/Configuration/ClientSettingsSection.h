#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Configuration::ClientSettingsSection {
    IL2CPP_REGISTER_METHOD(0x029615A0, void, ctor, (app::ClientSettingsSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476F698, ClientSettingsSection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029615D0, app::ConfigurationPropertyCollection*, get_Properties, (app::ClientSettingsSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756A40, ClientSettingsSection_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961600, app::SettingElementCollection*, get_Settings, (app::ClientSettingsSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047153F8, ClientSettingsSection_get_Settings__MethodInfo)
} // namespace app::classes::System::Configuration::ClientSettingsSection
