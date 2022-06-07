#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SurfaceToWwiseSwitchData {
    IL2CPP_REGISTER_METHOD(0x006740B0, app::Switch_1 *, GetSwitchFromSurfaceType, (app::SurfaceToWwiseSwitchData * this_ptr, app::SurfaceMaterialType__Enum surface_type))
    IL2CPP_REGISTER_METHOD(0x00674200, void, ctor, (app::SurfaceToWwiseSwitchData * this_ptr))
}
