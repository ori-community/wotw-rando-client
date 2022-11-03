#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SurfaceTypeContext {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::SurfaceTypeContext * this_ptr, app::SurfaceMaterialType__Enum surface_material_type))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::SurfaceMaterialType__Enum, get_SurfaceMaterialType, (app::SurfaceTypeContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_SurfaceMaterialType, (app::SurfaceTypeContext * this_ptr, app::SurfaceMaterialType__Enum value))
} // namespace app::classes::SurfaceTypeContext
