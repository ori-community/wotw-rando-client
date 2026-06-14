#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TargetSpheres.h>
#include <Modloader/app/structs/TargetSpheres_Sphere.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TargetSpheres {
    IL2CPP_REGISTER_METHOD(
        0x00CE3830,
        app::TargetSpheres_Sphere*,
        GetRandomSphereFromClosestGroup,
        app::TargetSpheres* this_ptr,
        app::Transform* transform,
        app::Vector3 position
    )
    IL2CPP_REGISTER_METHOD(0x00CE3CE0, bool, IsInSphere, app::TargetSpheres* this_ptr, app::Transform* transform, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(
        0x00CE4110,
        bool,
        IsInSphereFuture,
        app::TargetSpheres* this_ptr,
        app::Transform* transform,
        app::Vector3 position,
        app::Vector3 sphere_vel,
        float max_future_time
    )
    IL2CPP_REGISTER_METHOD(0x00CE45A0, void, ctor, app::TargetSpheres* this_ptr)
} // namespace app::classes::TargetSpheres
