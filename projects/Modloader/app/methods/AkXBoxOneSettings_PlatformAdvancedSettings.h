#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkXBoxOneSettings_PlatformAdvancedSettings.h>
#include <Modloader/app/structs/AkPlatformInitSettings.h>
#include <Modloader/app/structs/AkUnityPlatformSpecificSettings.h>

namespace app::classes::AkXBoxOneSettings_PlatformAdvancedSettings {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CopyTo_1, (app::AkXBoxOneSettings_PlatformAdvancedSettings * this_ptr, app::AkPlatformInitSettings* settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CopyTo_2, (app::AkXBoxOneSettings_PlatformAdvancedSettings * this_ptr, app::AkUnityPlatformSpecificSettings* settings))
    IL2CPP_REGISTER_METHOD(0x02708A20, void, ctor, (app::AkXBoxOneSettings_PlatformAdvancedSettings * this_ptr))
} // namespace app::classes::AkXBoxOneSettings_PlatformAdvancedSettings
