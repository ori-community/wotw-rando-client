#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Experimental::XR::XRSessionSubsystem {
    IL2CPP_REGISTER_METHOD(0x031773D0, void, ctor, (app::XRSessionSubsystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177450, void, InvokeTrackingStateChangedEvent, (app::XRSessionSubsystem * this_ptr, app::TrackingState__Enum new_state))
} // namespace app::classes::UnityEngine::Experimental::XR::XRSessionSubsystem
