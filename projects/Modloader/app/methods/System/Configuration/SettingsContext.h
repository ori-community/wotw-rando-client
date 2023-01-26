#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingsContext.h>

namespace app::classes::System::Configuration::SettingsContext {
    IL2CPP_REGISTER_METHOD(0x02962B60, void, ctor, (app::SettingsContext * this_ptr))
}
