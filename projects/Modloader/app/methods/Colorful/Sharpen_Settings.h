#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Colorful::Sharpen_Settings {
    IL2CPP_REGISTER_METHOD(0x03053090, app::Sharpen_Settings, get_defaultSettings, ())
    IL2CPP_REGISTER_METHOD(0x030530E0, app::Sharpen_Settings, Clone, (app::Sharpen_Settings from))
} // namespace app::classes::Colorful::Sharpen_Settings
