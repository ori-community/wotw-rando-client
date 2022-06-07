#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkWindowsSettings_PlatformAdvancedSettings {
    IL2CPP_REGISTER_METHOD(0x02702C90, void, CopyTo, (app::AkWindowsSettings_PlatformAdvancedSettings * this_ptr, app::AkPlatformInitSettings * settings))
    IL2CPP_REGISTER_METHOD(0x02702DE0, void, ctor, (app::AkWindowsSettings_PlatformAdvancedSettings * this_ptr))
}
