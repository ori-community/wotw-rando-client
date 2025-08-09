#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkCommonAdvancedSettings.h>
#include <Modloader/app/structs/AkCommonCommSettings.h>
#include <Modloader/app/structs/AkCommonUserSettings.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_CommonPlatformSettings.h>

namespace app::classes::AkWwiseInitializationSettings_CommonPlatformSettings {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::AkCommonUserSettings*, GetUserSettings, app::AkWwiseInitializationSettings_CommonPlatformSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::AkCommonAdvancedSettings*, GetAdvancedSettings, app::AkWwiseInitializationSettings_CommonPlatformSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::AkCommonCommSettings*, GetCommsSettings, app::AkWwiseInitializationSettings_CommonPlatformSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02702C80, void, ctor, app::AkWwiseInitializationSettings_CommonPlatformSettings* this_ptr)
} // namespace app::classes::AkWwiseInitializationSettings_CommonPlatformSettings
