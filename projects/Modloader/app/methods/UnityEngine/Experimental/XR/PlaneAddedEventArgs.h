#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BoundedPlane.h>
#include <Modloader/app/structs/PlaneAddedEventArgs__Boxed.h>
#include <Modloader/app/structs/XRPlaneSubsystem.h>

namespace app::classes::UnityEngine::Experimental::XR::PlaneAddedEventArgs {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_PlaneSubsystem, app::PlaneAddedEventArgs__Boxed* this_ptr, app::XRPlaneSubsystem* value)
    IL2CPP_REGISTER_METHOD(0x0024AE60, void, set_Plane, app::PlaneAddedEventArgs__Boxed* this_ptr, app::BoundedPlane value)
} // namespace app::classes::UnityEngine::Experimental::XR::PlaneAddedEventArgs
