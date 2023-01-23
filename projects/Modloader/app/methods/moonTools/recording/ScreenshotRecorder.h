#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ScreenshotRecorder.h>

namespace app::classes::moonTools::recording::ScreenshotRecorder {
    IL2CPP_REGISTER_METHOD(0x00F717F0, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x00F718C0, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x00F71BA0, app::String*, get_OutputDirectory, (app::ScreenshotRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F71EB0, void, OnEnable, (app::ScreenshotRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F720C0, void, OnDisable, (app::ScreenshotRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F72360, void, Update, (app::ScreenshotRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F72700, void, OnEndOfFrame, (app::ScreenshotRecorder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476FAE8, ScreenshotRecorder_OnEndOfFrame__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F72870, void, ctor, (app::ScreenshotRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F72900, void, cctor, ())
} // namespace app::classes::moonTools::recording::ScreenshotRecorder
