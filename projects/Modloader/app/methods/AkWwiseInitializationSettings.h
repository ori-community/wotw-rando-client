#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkWwiseInitializationSettings.h>
#include <Modloader/app/structs/AkBasePlatformSettings.h>
#include <Modloader/app/structs/AkCommonAdvancedSettings.h>
#include <Modloader/app/structs/AkCommonCommSettings.h>
#include <Modloader/app/structs/AkCommonUserSettings.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WwiseBootstrapConfiguration.h>

namespace app::classes::AkWwiseInitializationSettings {
    IL2CPP_REGISTER_METHOD(0x02702E30, uint32_t, get_DefaultDeviceSharesetId, ())
    IL2CPP_REGISTER_METHOD(0x02702ED0, uint32_t, get_SpatialDeviceSharesetId, ())
    IL2CPP_REGISTER_METHOD(0x02702F70, bool, get_IsValid, (app::AkWwiseInitializationSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02703010, int32_t, get_Count, (app::AkWwiseInitializationSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::AkCommonUserSettings*, GetUserSettings, (app::AkWwiseInitializationSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::AkCommonAdvancedSettings*, GetAdvancedSettings, (app::AkWwiseInitializationSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::AkCommonCommSettings*, GetCommsSettings, (app::AkWwiseInitializationSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027030A0, app::AkWwiseInitializationSettings*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x02703240, app::AkBasePlatformSettings*, GetPlatformSettings, (app::String * platform_name))
    IL2CPP_REGISTER_METHOD(0x027035D0, app::AkBasePlatformSettings*, get_ActivePlatformSettings, ())
    IL2CPP_REGISTER_METHOD(0x02703740, void, OnEnable, (app::AkWwiseInitializationSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027038C0, bool, InitializeSoundEngine, (app::AkWwiseInitializationSettings * config, app::WwiseBootstrapConfiguration* bootstrap_config))
    IL2CPP_REGISTER_METHOD(0x02704E20, bool, ResetSoundEngine, (bool is_playing))
    IL2CPP_REGISTER_METHOD(0x02704F60, void, TerminateSoundEngine, ())
    IL2CPP_REGISTER_METHOD(0x02705240, void, SleepForMilliseconds, (double milliseconds))
    IL2CPP_REGISTER_METHOD(0x02705470, void, ctor, (app::AkWwiseInitializationSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02705760, void, cctor, ())
} // namespace app::classes::AkWwiseInitializationSettings
