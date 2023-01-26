#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ApplicationSettingsGroup.h>

namespace app::classes::System::Configuration::ApplicationSettingsGroup {
    IL2CPP_REGISTER_METHOD(0x02961570, void, ctor, (app::ApplicationSettingsGroup * this_ptr))
}
