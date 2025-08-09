#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/SurfaceToWwiseSwitchData.h>
#include <Modloader/app/structs/Switch_1.h>

namespace app::classes::SurfaceToWwiseSwitchData {
    IL2CPP_REGISTER_METHOD(
        0x006740B0,
        app::Switch_1*,
        GetSwitchFromSurfaceType,
        app::SurfaceToWwiseSwitchData* this_ptr,
        app::SurfaceMaterialType__Enum surface_type
    )
    IL2CPP_REGISTER_METHOD(0x00674200, void, ctor, app::SurfaceToWwiseSwitchData* this_ptr)
} // namespace app::classes::SurfaceToWwiseSwitchData
