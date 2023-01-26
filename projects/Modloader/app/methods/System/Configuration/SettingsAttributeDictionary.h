#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingsAttributeDictionary.h>

namespace app::classes::System::Configuration::SettingsAttributeDictionary {
    IL2CPP_REGISTER_METHOD(0x029628F0, void, ctor_1, (app::SettingsAttributeDictionary * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962920, void, ctor_2, (app::SettingsAttributeDictionary * this_ptr, app::SettingsAttributeDictionary* attributes))
} // namespace app::classes::System::Configuration::SettingsAttributeDictionary
