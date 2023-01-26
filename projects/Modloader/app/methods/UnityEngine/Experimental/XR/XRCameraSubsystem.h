#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XRCameraSubsystem.h>

namespace app::classes::UnityEngine::Experimental::XR::XRCameraSubsystem {
    IL2CPP_REGISTER_METHOD(0x03176840, void, ctor, (app::XRCameraSubsystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031768C0, void, InvokeFrameReceivedEvent, (app::XRCameraSubsystem * this_ptr))
} // namespace app::classes::UnityEngine::Experimental::XR::XRCameraSubsystem
