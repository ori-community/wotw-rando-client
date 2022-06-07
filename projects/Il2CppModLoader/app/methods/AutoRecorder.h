#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AutoRecorder {
    IL2CPP_REGISTER_METHOD(0x0085C8C0, void, StartRecording, (app::AutoRecorder * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x0085C9D0, void, StopRecording, (app::AutoRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085CA30, void, TakeScreenshot, (app::AutoRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AutoRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085CDD0, void, cctor, ())
}
