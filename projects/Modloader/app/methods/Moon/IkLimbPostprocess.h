#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IkLimbPostprocess.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::IkLimbPostprocess {
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (app::IkLimbPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B11E70, void, CacheSolver, (app::IkLimbPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B11F00, void, Awake, (app::IkLimbPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B12030, void, OnDrawGizmosSelected, (app::IkLimbPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B12AD0, void, Process, (app::IkLimbPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01B13220, float, RayFracToPlane, (app::Vector3 ray_origin, app::Vector3 ray_dir, app::Vector3 plane_point, app::Vector3 plane_normal))
    IL2CPP_REGISTER_METHOD(0x01B133E0, app::Vector3, RayPlaneIntersection, (app::Vector3 ray_origin, app::Vector3 ray_dir, app::Vector3 plane_point, app::Vector3 plane_normal))
    IL2CPP_REGISTER_METHOD(0x01B13680, bool, PerformCachedCast, (app::IkLimbPostprocess * this_ptr, app::Vector3 cast_origin, app::Vector3 cast_dir, float cast_dist, app::Vector3* surface_point, app::Vector3* surface_normal))
    IL2CPP_REGISTER_METHOD(0x01B13930, void, CacheCast, (app::IkLimbPostprocess * this_ptr, app::Vector3 cast_origin, app::Vector3 cast_dir, app::Vector3 surface_point, app::Vector3 surface_normal))
    IL2CPP_REGISTER_METHOD(0x01B139A0, void, Cast, (app::IkLimbPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B140F0, float, ComputeGroundWeight, (app::IkLimbPostprocess * this_ptr, app::Vector3 local_position))
    IL2CPP_REGISTER_METHOD(0x01B14200, app::Vector3, Perpendicular3, (app::Vector3 v))
    IL2CPP_REGISTER_METHOD(0x01B14250, void, ctor, (app::IkLimbPostprocess * this_ptr))
} // namespace app::classes::Moon::IkLimbPostprocess
