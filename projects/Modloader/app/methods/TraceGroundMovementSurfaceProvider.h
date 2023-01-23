#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/TraceGroundMovementSurfaceProvider.h>

namespace app::classes::TraceGroundMovementSurfaceProvider {
    IL2CPP_REGISTER_METHOD(0x00B02010, app::SurfaceMaterialType__Enum, GetSurfaceType, (app::TraceGroundMovementSurfaceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TraceGroundMovementSurfaceProvider * this_ptr))
} // namespace app::classes::TraceGroundMovementSurfaceProvider
