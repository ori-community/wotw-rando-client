#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SessionTrackingStateChangedEventArgs__Boxed.h>
#include <Modloader/app/structs/TrackingState__Enum.h>

namespace app::classes::UnityEngine::Experimental::XR::SessionTrackingStateChangedEventArgs {
    IL2CPP_REGISTER_METHOD(0x00127510, void, set_NewState, (app::SessionTrackingStateChangedEventArgs__Boxed * this_ptr, app::TrackingState__Enum value))
}
