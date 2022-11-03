#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::ScreenCapture {
    IL2CPP_REGISTER_METHOD(0x031C4D80, void, CaptureScreenshot_1, (app::String * filename))
    IL2CPP_REGISTER_METHOD(0x031C4DE0, void, CaptureScreenshot_2, (app::String * filename, int32_t super_size, app::ScreenCapture_StereoScreenCaptureMode__Enum capture_mode))
} // namespace app::classes::UnityEngine::ScreenCapture
