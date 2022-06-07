#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::XR::XRCameraSubsystem {
    IL2CPP_REGISTER_METHOD(0x03176840, void, ctor, (app::XRCameraSubsystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031768C0, void, InvokeFrameReceivedEvent, (app::XRCameraSubsystem * this_ptr))
}
