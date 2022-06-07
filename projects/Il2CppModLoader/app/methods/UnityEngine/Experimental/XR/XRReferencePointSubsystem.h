#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::XR::XRReferencePointSubsystem {
    IL2CPP_REGISTER_METHOD(0x031771B0, void, ctor, (app::XRReferencePointSubsystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03177230, void, InvokeReferencePointUpdatedEvent, (app::XRReferencePointSubsystem * this_ptr, app::ReferencePoint updated_reference_point, app::TrackingState__Enum previous_tracking_state, app::Pose previous_pose))
}
