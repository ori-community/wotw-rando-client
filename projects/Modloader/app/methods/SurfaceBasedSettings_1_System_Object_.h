#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PhysicMaterial.h>
#include <Modloader/app/structs/SurfaceBasedSettings_1_System_Object_.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::SurfaceBasedSettings_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D1CC50, app::Object*, GetValue_1, app::SurfaceBasedSettings_1_System_Object_* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x01D1CD90, app::Object*, GetValue_2, app::SurfaceBasedSettings_1_System_Object_* this_ptr, app::PhysicMaterial* material)
    IL2CPP_REGISTER_METHOD(
        0x01D1CE70,
        app::Object*,
        GetValue_3,
        app::SurfaceBasedSettings_1_System_Object_* this_ptr,
        app::SurfaceMaterialType__Enum material_type
    )
    IL2CPP_REGISTER_METHOD(0x01D1D120, void, ctor, app::SurfaceBasedSettings_1_System_Object_* this_ptr)
} // namespace app::classes::SurfaceBasedSettings_1_System_Object_
