#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SupportedRenderingFeatures.h>
#include <Modloader/app/structs/SupportedRenderingFeatures_LightmapMixedBakeMode__Enum.h>
#include <Modloader/app/structs/LightmapBakeType__Enum.h>
#include <Modloader/app/structs/LightmapsMode__Enum.h>
#include <Modloader/app/structs/MixedLightingMode__Enum.h>

namespace app::classes::UnityEngine::Experimental::Rendering::SupportedRenderingFeatures {
    IL2CPP_REGISTER_METHOD(0x02525330, void, ctor, (app::SupportedRenderingFeatures * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02525360, app::SupportedRenderingFeatures*, get_active, ())
    IL2CPP_REGISTER_METHOD(0x02525570, void, set_active, (app::SupportedRenderingFeatures * value))
    IL2CPP_REGISTER_METHOD(0x02525620, app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum, get_defaultMixedLightingMode, (app::SupportedRenderingFeatures * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024AD170, app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum, get_supportedMixedLightingModes, (app::SupportedRenderingFeatures * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024AD180, app::LightmapBakeType__Enum, get_supportedLightmapBakeTypes, (app::SupportedRenderingFeatures * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EB1C70, app::LightmapsMode__Enum, get_supportedLightmapsModes, (app::SupportedRenderingFeatures * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02525630, void, FallbackMixedLightingModeByRef, (void* fallback_mode_ptr))
    IL2CPP_REGISTER_METHOD(0x02525810, bool, IsMixedLightingModeSupported, (app::MixedLightingMode__Enum mixed_mode))
    IL2CPP_REGISTER_METHOD(0x025258C0, void, IsMixedLightingModeSupportedByRef, (app::MixedLightingMode__Enum mixed_mode, void* is_supported_ptr))
    IL2CPP_REGISTER_METHOD(0x02525A90, bool, IsLightmapBakeTypeSupported, (app::LightmapBakeType__Enum bake_type))
    IL2CPP_REGISTER_METHOD(0x02525C40, void, IsLightmapBakeTypeSupportedByRef, (app::LightmapBakeType__Enum bake_type, void* is_supported_ptr))
    IL2CPP_REGISTER_METHOD(0x02525D70, void, IsLightmapsModeSupportedByRef, (app::LightmapsMode__Enum mode, void* is_supported_ptr))
    IL2CPP_REGISTER_METHOD(0x02525E30, void, cctor, ())
} // namespace app::classes::UnityEngine::Experimental::Rendering::SupportedRenderingFeatures
