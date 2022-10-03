#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Screen {
    IL2CPP_REGISTER_METHOD(0x0297AB50, int32_t, get_width, ())
    IL2CPP_REGISTER_METHOD(0x0297ABA0, int32_t, get_height, ())
    IL2CPP_REGISTER_METHOD(0x0297ABF0, float, get_dpi, ())
    IL2CPP_REGISTER_METHOD(0x0297AC40, app::Resolution, get_currentResolution, ())
    IL2CPP_REGISTER_METHOD(0x003FC3D0, bool, get_fullScreen, ())
    IL2CPP_REGISTER_METHOD(0x0297ACC0, void, set_fullScreen, (bool value))
    IL2CPP_REGISTER_METHOD(0x003FC470, app::FullScreenMode__Enum, get_fullScreenMode, ())
    IL2CPP_REGISTER_METHOD(0x0297AD10, void, set_fullScreenMode, (app::FullScreenMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x014983B0, bool, get_hdrAllowed, ())
    IL2CPP_REGISTER_METHOD(0x01498400, void, set_hdrAllowed, (bool value))
    IL2CPP_REGISTER_METHOD(0x0297AD60, bool, get_hdrCompatible, ())
    IL2CPP_REGISTER_METHOD(0x0297ADB0, void, SetResolution_1, (int32_t width, int32_t height, app::FullScreenMode__Enum fullscreen_mode, int32_t preferred_refresh_rate))
    IL2CPP_REGISTER_METHOD(0x0297AE30, void, SetResolution_2, (int32_t width, int32_t height, app::FullScreenMode__Enum fullscreen_mode))
    IL2CPP_REGISTER_METHOD(0x0297AE50, void, SetResolution_3, (int32_t width, int32_t height, bool fullscreen, int32_t preferred_refresh_rate))
    IL2CPP_REGISTER_METHOD(0x0297AE70, void, SetResolution_4, (int32_t width, int32_t height, bool fullscreen))
    IL2CPP_REGISTER_METHOD(0x0297AEA0, app::Resolution__Array*, get_resolutions, ())
    IL2CPP_REGISTER_METHOD(0x0297AEF0, void, get_currentResolution_Injected, (app::Resolution * ret))
} // namespace app::classes::UnityEngine::Screen
