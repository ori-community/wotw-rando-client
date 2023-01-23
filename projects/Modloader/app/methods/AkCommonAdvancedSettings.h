#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkCommonAdvancedSettings.h>
#include <Modloader/app/structs/AkDeviceSettings.h>
#include <Modloader/app/structs/AkInitSettings.h>
#include <Modloader/app/structs/AkPlatformInitSettings.h>
#include <Modloader/app/structs/AkSpatialAudioInitSettings.h>
#include <Modloader/app/structs/AkUnityPlatformSpecificSettings.h>

namespace app::classes::AkCommonAdvancedSettings {
    IL2CPP_REGISTER_METHOD(0x026D8830, void, CopyTo_1, (app::AkCommonAdvancedSettings * this_ptr, app::AkDeviceSettings* settings))
    IL2CPP_REGISTER_METHOD(0x026D8C70, void, CopyTo_2, (app::AkCommonAdvancedSettings * this_ptr, app::AkInitSettings* settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CopyTo_3, (app::AkCommonAdvancedSettings * this_ptr, app::AkPlatformInitSettings* settings))
    IL2CPP_REGISTER_METHOD(0x026D9470, void, CopyTo_4, (app::AkCommonAdvancedSettings * this_ptr, app::AkSpatialAudioInitSettings* settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CopyTo_5, (app::AkCommonAdvancedSettings * this_ptr, app::AkUnityPlatformSpecificSettings* settings))
    IL2CPP_REGISTER_METHOD(0x026D96E0, void, Validate, (app::AkCommonAdvancedSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026D9740, void, ctor, (app::AkCommonAdvancedSettings * this_ptr))
} // namespace app::classes::AkCommonAdvancedSettings
