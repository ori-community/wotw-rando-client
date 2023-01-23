#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReferencePointUpdatedEventArgs__Boxed.h>
#include <Modloader/app/structs/ReferencePoint.h>
#include <Modloader/app/structs/TrackingState__Enum.h>
#include <Modloader/app/structs/Pose.h>

namespace app::classes::UnityEngine::Experimental::XR::ReferencePointUpdatedEventArgs {
    IL2CPP_REGISTER_METHOD(0x0024AEF0, void, set_ReferencePoint, (app::ReferencePointUpdatedEventArgs__Boxed * this_ptr, app::ReferencePoint value))
    IL2CPP_REGISTER_METHOD(0x00116290, void, set_PreviousTrackingState, (app::ReferencePointUpdatedEventArgs__Boxed * this_ptr, app::TrackingState__Enum value))
    IL2CPP_REGISTER_METHOD(0x0024AF10, void, set_PreviousPose, (app::ReferencePointUpdatedEventArgs__Boxed * this_ptr, app::Pose value))
} // namespace app::classes::UnityEngine::Experimental::XR::ReferencePointUpdatedEventArgs
