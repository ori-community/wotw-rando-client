#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XRDepthSubsystem.h>

namespace app::classes::UnityEngine::Experimental::XR::XRDepthSubsystem {
    IL2CPP_REGISTER_METHOD(0x031769D0, void, ctor, (app::XRDepthSubsystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03176A50, void, InvokePointCloudUpdatedEvent, (app::XRDepthSubsystem * this_ptr))
} // namespace app::classes::UnityEngine::Experimental::XR::XRDepthSubsystem
