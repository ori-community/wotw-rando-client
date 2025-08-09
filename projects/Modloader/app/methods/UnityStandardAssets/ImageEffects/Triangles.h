#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Mesh__Array.h>
#include <Modloader/app/structs/Triangles.h>

namespace app::classes::UnityStandardAssets::ImageEffects::Triangles {
    IL2CPP_REGISTER_METHOD(0x02D6A530, bool, HasMeshes, )
    IL2CPP_REGISTER_METHOD(0x02D6A6C0, void, Cleanup, )
    IL2CPP_REGISTER_METHOD(0x02D6A950, app::Mesh__Array*, GetMeshes, int32_t total_width, int32_t total_height)
    IL2CPP_REGISTER_METHOD(0x02D6ADB0, app::Mesh*, GetMesh, int32_t tri_count, int32_t tri_offset, int32_t total_width, int32_t total_height)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Triangles* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::UnityStandardAssets::ImageEffects::Triangles
