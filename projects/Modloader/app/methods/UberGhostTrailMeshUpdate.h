#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Color32__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/UberGhostTrail.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_Quad__Array.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UberGhostTrailMeshUpdate {
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::Mesh*, get_TrailMesh, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F1250, bool, get_HasMaterial, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F13A0, app::Renderer*, get_TargetRenderer, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F14C0, bool, get_IsDead, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D6470, bool, get_Visible, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A5B6A0, void, set_Visible, app::UberGhostTrailMeshUpdate* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0124F970, void, OnBecameVisible, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124F960, void, OnBecameInvisible, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D41F0, float, get_TrailTime, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F16C0, void, Awake, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F1930, void, SetPos, app::UberGhostTrailMeshUpdate* this_ptr, app::Vector3 pos)
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnEnable, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F1EF0, void, ReallocateBuffers, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F2250, void, UpdateMaterialsBuf, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F23A0, void, SetSettings, app::UberGhostTrailMeshUpdate* this_ptr, app::UberGhostTrail* trail)
    IL2CPP_REGISTER_METHOD(0x013F27F0, void, OnDestroy, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F2890, app::Vector2, RandomVec, app::UberGhostTrailMeshUpdate* this_ptr, app::Vector2 val)
    IL2CPP_REGISTER_METHOD(0x013F2970, void, Update, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x013F29A0,
        void,
        SpawnSingleTrailSprite,
        app::UberGhostTrailMeshUpdate* this_ptr,
        float posx,
        float posy,
        app::Vector4 size,
        app::Vector3 euler,
        app::Quaternion rotate,
        app::Vector3 scale
    )
    IL2CPP_REGISTER_METHOD(0x013F3780, void, UpdateQuads, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F4000, void, RemoveQuad, app::UberGhostTrailMeshUpdate* this_ptr, int32_t quad, int32_t texture)
    IL2CPP_REGISTER_METHOD(0x013F4260, float, GetVertexX, app::UberGhostTrailMeshUpdate* this_ptr, float sizex, float sizey, float c, float s)
    IL2CPP_REGISTER_METHOD(0x013F4280, float, GetVertexY, app::UberGhostTrailMeshUpdate* this_ptr, float sizex, float sizey, float c, float s)
    IL2CPP_REGISTER_METHOD(0x013F42A0, void, UpdateTrailMesh, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F4E90, void, UpdateMeshVertPart, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F5960, void, SetPropertiesOnMaterial, app::UberGhostTrailMeshUpdate* this_ptr, app::Material* new_mat)
    IL2CPP_REGISTER_METHOD(0x013F5C00, void, ctor, app::UberGhostTrailMeshUpdate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015E3480, void, ResizeOrCreate_1, app::UberGhostTrailMeshUpdate* this_ptr, app::Object__Array** arr, int32_t size)
    IL2CPP_REGISTER_METHOD(0x02FF59A0, app::Object__Array*, EnsureBuffer_1, app::UberGhostTrailMeshUpdate* this_ptr, app::Object__Array* arr, int32_t min_size)
    IL2CPP_REGISTER_METHOD(0x015E3480, void, ResizeOrCreate_2, app::UberGhostTrailMeshUpdate* this_ptr, app::Vector3__Array** arr, int32_t size)
    IL2CPP_REGISTER_METHOD(0x015E3480, void, ResizeOrCreate_3, app::UberGhostTrailMeshUpdate* this_ptr, app::Vector2__Array** arr, int32_t size)
    IL2CPP_REGISTER_METHOD(0x015E3480, void, ResizeOrCreate_4, app::UberGhostTrailMeshUpdate* this_ptr, app::Color32__Array** arr, int32_t size)
    IL2CPP_REGISTER_METHOD(
        0x015E3480,
        void,
        ResizeOrCreate_5,
        app::UberGhostTrailMeshUpdate* this_ptr,
        app::UberGhostTrailMeshUpdate_Quad__Array** arr,
        int32_t size
    )
    IL2CPP_REGISTER_METHOD(0x015E3480, void, ResizeOrCreate_6, app::UberGhostTrailMeshUpdate* this_ptr, app::Boolean__Array** arr, int32_t size)
    IL2CPP_REGISTER_METHOD(0x02FF5870, app::Int32__Array*, EnsureBuffer_2, app::UberGhostTrailMeshUpdate* this_ptr, app::Int32__Array* arr, int32_t min_size)
} // namespace app::classes::UberGhostTrailMeshUpdate
