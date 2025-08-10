#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BoneWeight.h>
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/HideFlags__Enum.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MaterialPropertyBlock.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshTrail.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>

namespace app::classes::MeshTrail {
    IL2CPP_REGISTER_METHOD(0x011354B0, app::Mesh*, get_RenderMesh, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B41E60, int32_t, get_ParticleCount, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AA42E0, bool, get_IsSuspended, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AA42F0, void, set_IsSuspended, app::MeshTrail* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PropertyChanged, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03107D30, void, Dispose, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03107D40, void, SetCustomMaterialPropertyBlock, app::MeshTrail* this_ptr, app::MaterialPropertyBlock* material_property_block)
    IL2CPP_REGISTER_METHOD(0x03107D50, void, UpdateMaterialShaderBlock, app::MeshTrail* this_ptr, app::MaterialPropertyBlock* material_property_block)
    IL2CPP_REGISTER_METHOD(0x031084D0, void, DebugRender, app::MeshTrail* this_ptr, app::CommandBuffer* command_buffer)
    IL2CPP_REGISTER_METHOD(0x03108A20, float, I2S, int32_t value)
    IL2CPP_REGISTER_METHOD(
        0x03108A30,
        void,
        Simulate,
        app::MeshTrail* this_ptr,
        app::CommandBuffer* command_buffer,
        app::Vector3 camera_position,
        float delta_time
    )
    IL2CPP_REGISTER_METHOD(0x0310A790, void, RebuildRenderMesh, app::MeshTrail* this_ptr, app::Mesh** target_mesh, app::HideFlags__Enum hide_flags)
    IL2CPP_REGISTER_METHOD(0x0310AE70, void, Clear, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310AEB0, void, Reinitialize, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310AED0, void, PrecomputeRuntimeData, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310AEB0, void, Start, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310AFB0, void, PreloadComputeShader, )
    IL2CPP_REGISTER_METHOD(0x0310B080, void, RuntimeInitialize, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0310C1F0,
        void,
        InitLifetimeAnimatedParametersTexture,
        app::MeshTrail* this_ptr,
        app::Texture2D** target_texture,
        app::HideFlags__Enum hide_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x0310C450,
        void,
        InitLifetimeAdditiveVelocityTexture,
        app::MeshTrail* this_ptr,
        app::Texture2D** target_texture,
        app::HideFlags__Enum hide_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x0310C6B0,
        void,
        InitInitialSpeedAnimatedParametersTexture,
        app::MeshTrail* this_ptr,
        app::Texture2D** target_texture,
        app::HideFlags__Enum hide_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x0310C8F0,
        void,
        InitDistanceAnimatedParametersTexture,
        app::MeshTrail* this_ptr,
        app::Texture2D** target_texture,
        app::HideFlags__Enum hide_flags
    )
    IL2CPP_REGISTER_METHOD(0x03107D30, void, OnDestroy, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310CB30, void, Cleanup, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310D000, void, UpdateSkinningMatrices, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310D2D0, int32_t, GetBoneIndexWithLargestWeight, app::MeshTrail* this_ptr, app::BoneWeight bone_weight)
    IL2CPP_REGISTER_METHOD(0x0310D310, void, InitializeEmitters, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0310DB50,
        app::Single__Array*,
        GetTrianglesWeight,
        app::MeshTrail* this_ptr,
        app::Int32__Array* indices,
        app::Vector3__Array* vertices,
        app::Vector2__Array* uvs
    )
    IL2CPP_REGISTER_METHOD(0x0310E9B0, app::Texture2D*, CreateAnimatedParametersTexture, app::MeshTrail* this_ptr, app::HideFlags__Enum hide_flags)
    IL2CPP_REGISTER_METHOD(0x0310EC00, void, OnEnable, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310EE00, void, OnDisable, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310EE70, void, Update, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310F4E0, void, OnDrawGizmos, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310F8C0, void, EnterTimelinePreview, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310FA40, void, ExitTimelinePreview, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310FB40, void, OnTimelineStateChanged, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310FD80, void, TimelineSample, app::MeshTrail* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x0310FEB0, void, ApplyStoredBuffers, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310FED0, void, StoreBuffers, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0310FEF0, void, ctor, app::MeshTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03110DB0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x0154A350, void, DestroyASAP_1, app::Object** obj)
    IL2CPP_REGISTER_METHOD(0x0154A350, void, DestroyASAP_2, app::Texture2D** obj)
    IL2CPP_REGISTER_METHOD(0x0154A350, void, DestroyASAP_3, app::Mesh** obj)
    IL2CPP_REGISTER_METHOD(0x0154A350, void, DestroyASAP_4, app::Material** obj)
} // namespace app::classes::MeshTrail
