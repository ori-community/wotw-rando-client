#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::XR::ReferencePointUpdatedEventArgs {
    IL2CPP_REGISTER_METHOD(0x0024AEF0, void, set_ReferencePoint, (app::ReferencePointUpdatedEventArgs__Boxed * this_ptr, app::ReferencePoint value))
    IL2CPP_REGISTER_METHOD(0x00116290, void, set_PreviousTrackingState, (app::ReferencePointUpdatedEventArgs__Boxed * this_ptr, app::TrackingState__Enum value))
    IL2CPP_REGISTER_METHOD(0x0024AF10, void, set_PreviousPose, (app::ReferencePointUpdatedEventArgs__Boxed * this_ptr, app::Pose value))
}
