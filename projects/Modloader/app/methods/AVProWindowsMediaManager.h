#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AVProWindowsMediaManager.h>
#include <Modloader/app/structs/AVProWindowsMediaPlugin_VideoFrameFormat__Enum.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Shader.h>

namespace app::classes::AVProWindowsMediaManager {
    IL2CPP_REGISTER_METHOD(0x0312C580, app::AVProWindowsMediaManager*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x0312C790, void, Awake, (app::AVProWindowsMediaManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312C830, void, OnDestroy, (app::AVProWindowsMediaManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312C840, bool, Init, (app::AVProWindowsMediaManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312CB90, void, SetUnityFeatures, (app::AVProWindowsMediaManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312CC30, void, GetConversionMethod, (app::AVProWindowsMediaManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312D090, app::IEnumerator*, FinalRenderCapture, (app::AVProWindowsMediaManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312D1D0, void, Update, (app::AVProWindowsMediaManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312D220, void, Deinit, (app::AVProWindowsMediaManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312D470, app::Shader*, GetPixelConversionShader, (app::AVProWindowsMediaManager * this_ptr, app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum format, bool use_b_t709))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::AVProWindowsMediaManager * this_ptr))
} // namespace app::classes::AVProWindowsMediaManager
