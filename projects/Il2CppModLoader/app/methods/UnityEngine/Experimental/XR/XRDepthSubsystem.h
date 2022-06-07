#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::XR::XRDepthSubsystem {
    IL2CPP_REGISTER_METHOD(0x031769D0, void, ctor, (app::XRDepthSubsystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03176A50, void, InvokePointCloudUpdatedEvent, (app::XRDepthSubsystem * this_ptr))
}
