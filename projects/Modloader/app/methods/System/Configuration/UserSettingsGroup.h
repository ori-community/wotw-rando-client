#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UserSettingsGroup.h>

namespace app::classes::System::Configuration::UserSettingsGroup {
    IL2CPP_REGISTER_METHOD(0x01FFE410, void, ctor, app::UserSettingsGroup* this_ptr)
}
