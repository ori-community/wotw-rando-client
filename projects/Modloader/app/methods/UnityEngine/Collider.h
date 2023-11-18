#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/PhysicMaterial.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::Collider {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Collider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0309F6C0, bool, get_enabled, (app::Collider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0309F710, void, set_enabled, (app::Collider * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0309F770, app::Rigidbody*, get_attachedRigidbody, (app::Collider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0309F7C0, bool, get_isTrigger, (app::Collider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0309F810, void, set_isTrigger, (app::Collider * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0309F870, float, get_contactOffset, (app::Collider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0309F8C0, void, set_contactOffset, (app::Collider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0309F920, app::Vector3, ClosestPoint, (app::Collider * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0309F9B0, app::Bounds, get_bounds, (app::Collider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0309FA40, app::PhysicMaterial*, get_sharedMaterial, (app::Collider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0309FA90, void, set_sharedMaterial, (app::Collider * this_ptr, app::PhysicMaterial* value))
    IL2CPP_REGISTER_METHOD(0x0309FAF0, app::PhysicMaterial*, get_material, (app::Collider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0309FB40, void, set_material, (app::Collider * this_ptr, app::PhysicMaterial* value))
    IL2CPP_REGISTER_METHOD(0x0309FBA0, app::RaycastHit, Raycast_1, (app::Collider * this_ptr, app::Ray ray, float max_distance, bool* has_hit))
    IL2CPP_REGISTER_METHOD(0x0309FC80, bool, Raycast_2, (app::Collider * this_ptr, app::Ray ray, app::RaycastHit* hit_info, float max_distance))
    IL2CPP_REGISTER_METHOD(0x0309FD70, void, Internal_ClosestPointOnBounds, (app::Collider * this_ptr, app::Vector3 point, app::Vector3* out_pos, float* distance))
    IL2CPP_REGISTER_METHOD(0x0309FDF0, app::Vector3, ClosestPointOnBounds, (app::Collider * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0309FF40, void, ClosestPoint_Injected, (app::Collider * this_ptr, app::Vector3* position, app::Vector3* ret))
    IL2CPP_REGISTER_METHOD(0x0309FFB0, void, get_bounds_Injected, (app::Collider * this_ptr, app::Bounds* ret))
    IL2CPP_REGISTER_METHOD(0x030A0010, void, Raycast_Injected, (app::Collider * this_ptr, app::Ray* ray, float max_distance, bool* has_hit, app::RaycastHit* ret))
    IL2CPP_REGISTER_METHOD(0x030A00A0, void, Internal_ClosestPointOnBounds_Injected, (app::Collider * this_ptr, app::Vector3* point, app::Vector3* out_pos, float* distance))
} // namespace app::classes::UnityEngine::Collider
