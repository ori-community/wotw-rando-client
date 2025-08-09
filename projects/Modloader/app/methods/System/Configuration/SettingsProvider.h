#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingsProvider.h>

namespace app::classes::System::Configuration::SettingsProvider {
    IL2CPP_REGISTER_METHOD(0x01FFE0B0, void, ctor, app::SettingsProvider* this_ptr)
}
