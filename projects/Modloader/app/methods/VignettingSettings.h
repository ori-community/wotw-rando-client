#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VignettingSettings.h>

namespace app::classes::VignettingSettings {
    IL2CPP_REGISTER_METHOD(0x008C1B30, app::VignettingSettings*, Clone, app::VignettingSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C1C80, void, CopyFrom, app::VignettingSettings* this_ptr, app::VignettingSettings* settings_vignetting)
    IL2CPP_REGISTER_METHOD(0x008C1CA0, void, ctor, app::VignettingSettings* this_ptr)
} // namespace app::classes::VignettingSettings
