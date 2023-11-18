#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SkinnedMeshLod.h>
#include <Modloader/app/structs/SkinnedMeshRenderer.h>
#include <Modloader/app/structs/SkinnedMeshRenderer__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SkinnedMeshLod {
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_CurrentLevel, (app::SkinnedMeshLod * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BD280, void, set_CurrentLevel, (app::SkinnedMeshLod * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x006BD290, void, OnValidate, (app::SkinnedMeshLod * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BD290, void, CollectComponents, (app::SkinnedMeshLod * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BD390, void, SetLodLevel, (app::SkinnedMeshLod * this_ptr, int32_t level))
    IL2CPP_REGISTER_METHOD(0x006BD6A0, app::SkinnedMeshRenderer*, GetRendererByName, (app::SkinnedMeshLod * this_ptr, app::SkinnedMeshRenderer__Array* renderers, app::String* name))
    IL2CPP_REGISTER_METHOD(0x006BD760, void, UpdateMeshRenderer, (app::SkinnedMeshLod * this_ptr, app::SkinnedMeshRenderer* new_mesh_renderer, app::SkinnedMeshRenderer* active_renderer))
    IL2CPP_REGISTER_METHOD(0x006BDE70, void, ctor, (app::SkinnedMeshLod * this_ptr))
} // namespace app::classes::SkinnedMeshLod
