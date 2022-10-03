#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::MeshCollider {
    IL2CPP_REGISTER_METHOD(0x030A3710, app::Mesh*, get_sharedMesh, (app::MeshCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030A3760, void, set_sharedMesh, (app::MeshCollider * this_ptr, app::Mesh* value))
    IL2CPP_REGISTER_METHOD(0x030A37C0, bool, get_convex, (app::MeshCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030A3810, void, set_convex, (app::MeshCollider * this_ptr, bool value))
} // namespace app::classes::UnityEngine::MeshCollider
