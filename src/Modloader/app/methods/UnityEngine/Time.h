#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Time {
    IL2CPP_REGISTER_METHOD(0x006D41F0, float, get_time, )
    IL2CPP_REGISTER_METHOD(0x02C6A530, float, get_timeSinceLevelLoad, )
    IL2CPP_REGISTER_METHOD(0x010F26B0, float, get_deltaTime, )
    IL2CPP_REGISTER_METHOD(0x02C6A580, float, get_fixedTime, )
    IL2CPP_REGISTER_METHOD(0x02C6A5D0, float, get_unscaledTime, )
    IL2CPP_REGISTER_METHOD(0x02C6A620, float, get_unscaledDeltaTime, )
    IL2CPP_REGISTER_METHOD(0x010F2600, float, get_fixedDeltaTime, )
    IL2CPP_REGISTER_METHOD(0x010F2650, void, set_fixedDeltaTime, float value)
    IL2CPP_REGISTER_METHOD(0x02C6A670, void, set_fixedDeltaTimeNoMax, float value)
    IL2CPP_REGISTER_METHOD(0x010F2550, float, get_maximumDeltaTime, )
    IL2CPP_REGISTER_METHOD(0x010F25A0, void, set_maximumDeltaTime, float value)
    IL2CPP_REGISTER_METHOD(0x02C6A6D0, float, get_smoothDeltaTime, )
    IL2CPP_REGISTER_METHOD(0x02C6A720, float, get_timeScale, )
    IL2CPP_REGISTER_METHOD(0x02C6A770, void, set_timeScale, float value)
    IL2CPP_REGISTER_METHOD(0x00C0CB50, int32_t, get_frameCount, )
    IL2CPP_REGISTER_METHOD(0x02C6A7D0, int32_t, get_renderedFrameCount, )
    IL2CPP_REGISTER_METHOD(0x02C6A820, float, get_realtimeSinceStartup, )
    IL2CPP_REGISTER_METHOD(0x02C6A870, void, set_captureFramerate, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02C6A8C0, bool, get_unFixFixedUpdate, )
    IL2CPP_REGISTER_METHOD(0x02C6A910, void, set_unFixFixedUpdate, bool value)
    IL2CPP_REGISTER_METHOD(0x02C6A960, void, set_deltaTimeOverride, double value)
} // namespace app::classes::UnityEngine::Time
