#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayerParams__Array.h>
#include <Modloader/app/structs/LayeredRenderSettings_LayeredRenderSettingsOverride.h>
#include <Modloader/app/structs/Renderer.h>

namespace app::classes::LayeredRenderSettings {
    IL2CPP_REGISTER_METHOD(0x00F267A0, app::LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum, get_CurrentPlatformOverride, ())
    IL2CPP_REGISTER_METHOD(0x00F26840, app::LayeredRenderSettings_LayerParams__Array*, get_Layers, (app::LayeredRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F26BB0, float, get_FarPlane, (app::LayeredRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F26BE0, app::LayeredRenderSettings_LayerParams__Array*, GetLayersForOverride, (app::LayeredRenderSettings * this_ptr, app::LayeredRenderSettings_LayeredRenderSettingsPlatformOverride__Enum override_platform))
    IL2CPP_REGISTER_METHOD(0x00F26CC0, void, CopyFrom, (app::LayeredRenderSettings * this_ptr, app::LayeredRenderSettings* copy))
    IL2CPP_REGISTER_METHOD(0x00F27010, void, ctor, (app::LayeredRenderSettings * this_ptr, app::LayeredRenderSettings* copy))
    IL2CPP_REGISTER_METHOD(0x00F274F0, bool, get_IsGameplay, (app::LayeredRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F27500, int32_t, GetLayerIndexForRenderer, (app::LayeredRenderSettings * this_ptr, app::Renderer* renderer))
    IL2CPP_REGISTER_METHOD(0x00F27790, void, Validate, (app::LayeredRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ISerializationCallbackReceiver_OnBeforeSerialize, (app::LayeredRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F27DC0, void, ISerializationCallbackReceiver_OnAfterDeserialize, (app::LayeredRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F27EB0, void, RefreshOverride, (app::LayeredRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F28100, app::LayeredRenderSettings_LayeredRenderSettingsOverride, EvaluateOverride, (app::LayeredRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::LayeredRenderSettings
