#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkWwiseInitializationSettings_CommonPlatformSettings {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::AkCommonUserSettings*, GetUserSettings, (app::AkWwiseInitializationSettings_CommonPlatformSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::AkCommonAdvancedSettings*, GetAdvancedSettings, (app::AkWwiseInitializationSettings_CommonPlatformSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::AkCommonCommSettings*, GetCommsSettings, (app::AkWwiseInitializationSettings_CommonPlatformSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02702C80, void, ctor, (app::AkWwiseInitializationSettings_CommonPlatformSettings * this_ptr))
} // namespace app::classes::AkWwiseInitializationSettings_CommonPlatformSettings
