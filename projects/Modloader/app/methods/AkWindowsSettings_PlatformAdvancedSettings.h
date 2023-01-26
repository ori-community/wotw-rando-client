#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkWindowsSettings_PlatformAdvancedSettings.h>
#include <Modloader/app/structs/AkPlatformInitSettings.h>

namespace app::classes::AkWindowsSettings_PlatformAdvancedSettings {
    IL2CPP_REGISTER_METHOD(0x02702C90, void, CopyTo, (app::AkWindowsSettings_PlatformAdvancedSettings * this_ptr, app::AkPlatformInitSettings* settings))
    IL2CPP_REGISTER_METHOD(0x02702DE0, void, ctor, (app::AkWindowsSettings_PlatformAdvancedSettings * this_ptr))
} // namespace app::classes::AkWindowsSettings_PlatformAdvancedSettings
