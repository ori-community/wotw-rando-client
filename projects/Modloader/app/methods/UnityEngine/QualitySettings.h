#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ColorSpace__Enum.h>

namespace app::classes::UnityEngine::QualitySettings {
    IL2CPP_REGISTER_METHOD(0x0252FC40, int32_t, get_pixelLightCount, )
    IL2CPP_REGISTER_METHOD(0x0252FC90, void, set_pixelLightCount, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0048D830, int32_t, get_masterTextureLimit, )
    IL2CPP_REGISTER_METHOD(0x0296A590, void, set_masterTextureLimit, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00482AA0, int32_t, get_vSyncCount, )
    IL2CPP_REGISTER_METHOD(0x013B7D80, void, set_vSyncCount, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0296A5E0, int32_t, get_antiAliasing, )
    IL2CPP_REGISTER_METHOD(0x0296A630, void, set_antiAliasing, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0296A680, void, set_asyncUploadTimeSlice, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00486A20, bool, get_streamingMipmapsActive, )
    IL2CPP_REGISTER_METHOD(0x0296A6D0, void, set_streamingMipmapsActive, bool value)
    IL2CPP_REGISTER_METHOD(0x00486AC0, float, get_streamingMipmapsMemoryBudget, )
    IL2CPP_REGISTER_METHOD(0x0296A720, void, set_streamingMipmapsMemoryBudget, float value)
    IL2CPP_REGISTER_METHOD(0x00482960, int32_t, get_maxQueuedFrames, )
    IL2CPP_REGISTER_METHOD(0x0296A780, void, set_maxQueuedFrames, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0296A7D0, app::ColorSpace__Enum, get_activeColorSpace, )
} // namespace app::classes::UnityEngine::QualitySettings
