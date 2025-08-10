#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/ComputeBuffer.h>
#include <Modloader/app/structs/CubemapFace__Enum.h>
#include <Modloader/app/structs/Internal_DrawTextureArguments.h>
#include <Modloader/app/structs/LightProbeProxyVolume.h>
#include <Modloader/app/structs/LightProbeUsage__Enum.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MaterialPropertyBlock.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshTopology__Enum.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RenderBuffer.h>
#include <Modloader/app/structs/RenderBuffer__Array.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/ShadowCastingMode__Enum.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2__Array.h>

namespace app::classes::UnityEngine::Graphics {
    IL2CPP_REGISTER_METHOD(0x0252A790, int32_t, Internal_GetMaxDrawMeshInstanceCount, )
    IL2CPP_REGISTER_METHOD(0x0252A7E0, void, Internal_SetNullRT, )
    IL2CPP_REGISTER_METHOD(
        0x0252A830,
        void,
        Internal_SetRTSimple,
        app::RenderBuffer color,
        app::RenderBuffer depth,
        int32_t mip,
        app::CubemapFace__Enum face,
        int32_t depth_slice
    )
    IL2CPP_REGISTER_METHOD(
        0x0252A940,
        void,
        Internal_SetMRTSimple,
        app::RenderBuffer__Array* color,
        app::RenderBuffer depth,
        int32_t mip,
        app::CubemapFace__Enum face,
        int32_t depth_slice
    )
    IL2CPP_REGISTER_METHOD(0x0252AA50, void, Internal_SetRandomWriteTargetBuffer, int32_t index, app::ComputeBuffer* uav, bool preserve_counter_value)
    IL2CPP_REGISTER_METHOD(0x0252AAC0, void, ClearRandomWriteTargets, )
    IL2CPP_REGISTER_METHOD(0x0252AB10, void, CopyTexture_Full, app::Texture* src, app::Texture* dst)
    IL2CPP_REGISTER_METHOD(0x0252AB70, void, Internal_DrawMeshNow2, app::Mesh* mesh, int32_t subset_index, app::Matrix4x4 matrix)
    IL2CPP_REGISTER_METHOD(0x0252AC60, void, Internal_DrawTexture, app::Internal_DrawTextureArguments* args)
    IL2CPP_REGISTER_METHOD(
        0x0252ACB0,
        void,
        Internal_DrawMesh,
        app::Mesh* mesh,
        int32_t submesh_index,
        app::Matrix4x4 matrix,
        app::Material* material,
        int32_t layer,
        app::Camera* camera,
        app::MaterialPropertyBlock* properties,
        app::ShadowCastingMode__Enum cast_shadows,
        bool receive_shadows,
        app::Transform* probe_anchor,
        app::LightProbeUsage__Enum light_probe_usage,
        app::LightProbeProxyVolume* light_probe_proxy_volume
    )
    IL2CPP_REGISTER_METHOD(
        0x0252AE20,
        void,
        Internal_DrawProceduralIndirect,
        app::MeshTopology__Enum topology,
        app::ComputeBuffer* buffer_with_args,
        int32_t args_offset
    )
    IL2CPP_REGISTER_METHOD(
        0x0252AE90,
        void,
        Internal_BlitMaterial,
        app::Texture* source,
        app::RenderTexture* dest,
        app::Material* mat,
        int32_t pass,
        bool set_r_t
    )
    IL2CPP_REGISTER_METHOD(
        0x0252AF20,
        void,
        Internal_BlitMultiTap,
        app::Texture* source,
        app::RenderTexture* dest,
        app::Material* mat,
        app::Vector2__Array* offsets
    )
    IL2CPP_REGISTER_METHOD(0x0252AFA0, void, Blit2, app::Texture* source, app::RenderTexture* dest)
    IL2CPP_REGISTER_METHOD(0x0252B000, void, ExecuteCommandBuffer, app::CommandBuffer* buffer)
    IL2CPP_REGISTER_METHOD(
        0x0252B050,
        void,
        SetRenderTargetImpl_1,
        app::RenderBuffer color_buffer,
        app::RenderBuffer depth_buffer,
        int32_t mip_level,
        app::CubemapFace__Enum face,
        int32_t depth_slice
    )
    IL2CPP_REGISTER_METHOD(0x0252B200, void, SetRenderTargetImpl_2, app::RenderTexture* rt, int32_t mip_level, app::CubemapFace__Enum face, int32_t depth_slice)
    IL2CPP_REGISTER_METHOD(
        0x0252B560,
        void,
        SetRenderTargetImpl_3,
        app::RenderBuffer__Array* color_buffers,
        app::RenderBuffer depth_buffer,
        int32_t mip_level,
        app::CubemapFace__Enum face,
        int32_t depth_slice
    )
    IL2CPP_REGISTER_METHOD(0x0252B710, void, SetRenderTarget_1, app::RenderTexture* rt, int32_t mip_level, app::CubemapFace__Enum face, int32_t depth_slice)
    IL2CPP_REGISTER_METHOD(0x0252B7F0, void, SetRenderTarget_2, app::RenderBuffer__Array* color_buffers, app::RenderBuffer depth_buffer)
    IL2CPP_REGISTER_METHOD(0x0252B9F0, void, SetRandomWriteTarget_1, int32_t index, app::ComputeBuffer* uav, bool preserve_counter_value)
    IL2CPP_REGISTER_METHOD(0x0252BBD0, void, CopyTexture, app::Texture* src, app::Texture* dst)
    IL2CPP_REGISTER_METHOD(
        0x0252BCC0,
        void,
        DrawTextureImpl,
        app::Rect screen_rect,
        app::Texture* texture,
        app::Rect source_rect,
        int32_t left_border,
        int32_t right_border,
        int32_t top_border,
        int32_t bottom_border,
        app::Color color,
        app::Material* mat,
        int32_t pass
    )
    IL2CPP_REGISTER_METHOD(
        0x0252BE60,
        void,
        DrawTexture_1,
        app::Rect screen_rect,
        app::Texture* texture,
        app::Rect source_rect,
        int32_t left_border,
        int32_t right_border,
        int32_t top_border,
        int32_t bottom_border,
        app::Color color,
        app::Material* mat,
        int32_t pass
    )
    IL2CPP_REGISTER_METHOD(0x0252C040, void, DrawMeshNow_1, app::Mesh* mesh, app::Matrix4x4 matrix, int32_t material_index)
    IL2CPP_REGISTER_METHOD(0x0252C240, void, DrawMeshNow_2, app::Mesh* mesh, app::Matrix4x4 matrix)
    IL2CPP_REGISTER_METHOD(
        0x0252C320,
        void,
        DrawMesh_1,
        app::Mesh* mesh,
        app::Matrix4x4 matrix,
        app::Material* material,
        int32_t layer,
        app::Camera* camera,
        int32_t submesh_index,
        app::MaterialPropertyBlock* properties,
        bool cast_shadows,
        bool receive_shadows,
        bool use_light_probes
    )
    IL2CPP_REGISTER_METHOD(
        0x0252C490,
        void,
        DrawMesh_2,
        app::Mesh* mesh,
        app::Matrix4x4 matrix,
        app::Material* material,
        int32_t layer,
        app::Camera* camera,
        int32_t submesh_index,
        app::MaterialPropertyBlock* properties,
        app::ShadowCastingMode__Enum cast_shadows,
        bool receive_shadows,
        app::Transform* probe_anchor,
        app::LightProbeUsage__Enum light_probe_usage,
        app::LightProbeProxyVolume* light_probe_proxy_volume
    )
    IL2CPP_REGISTER_METHOD(
        0x0252C730,
        void,
        DrawProceduralIndirect,
        app::MeshTopology__Enum topology,
        app::ComputeBuffer* buffer_with_args,
        int32_t args_offset
    )
    IL2CPP_REGISTER_METHOD(0x0252C850, void, Blit_1, app::Texture* source, app::RenderTexture* dest)
    IL2CPP_REGISTER_METHOD(0x0252C940, void, Blit_2, app::Texture* source, app::RenderTexture* dest, app::Material* mat, int32_t pass)
    IL2CPP_REGISTER_METHOD(0x0252CA20, void, Blit_3, app::Texture* source, app::RenderTexture* dest, app::Material* mat)
    IL2CPP_REGISTER_METHOD(0x0252CAF0, void, Blit_4, app::Texture* source, app::Material* mat, int32_t pass)
    IL2CPP_REGISTER_METHOD(0x0252CBC0, void, BlitMultiTap, app::Texture* source, app::RenderTexture* dest, app::Material* mat, app::Vector2__Array* offsets)
    IL2CPP_REGISTER_METHOD(
        0x0252CD10,
        void,
        DrawTexture_2,
        app::Rect screen_rect,
        app::Texture* texture,
        app::Rect source_rect,
        int32_t left_border,
        int32_t right_border,
        int32_t top_border,
        int32_t bottom_border,
        app::Color color
    )
    IL2CPP_REGISTER_METHOD(0x0252CE60, void, SetRenderTarget_3, app::RenderTexture* rt)
    IL2CPP_REGISTER_METHOD(0x0252CF90, void, SetRandomWriteTarget_2, int32_t index, app::ComputeBuffer* uav)
    IL2CPP_REGISTER_METHOD(0x0252D040, void, cctor, )
    IL2CPP_REGISTER_METHOD(
        0x0252D100,
        void,
        Internal_SetRTSimple_Injected,
        app::RenderBuffer* color,
        app::RenderBuffer* depth,
        int32_t mip,
        app::CubemapFace__Enum face,
        int32_t depth_slice
    )
    IL2CPP_REGISTER_METHOD(
        0x0252D190,
        void,
        Internal_SetMRTSimple_Injected,
        app::RenderBuffer__Array* color,
        app::RenderBuffer* depth,
        int32_t mip,
        app::CubemapFace__Enum face,
        int32_t depth_slice
    )
    IL2CPP_REGISTER_METHOD(0x0252D220, void, Internal_DrawMeshNow2_Injected, app::Mesh* mesh, int32_t subset_index, app::Matrix4x4* matrix)
    IL2CPP_REGISTER_METHOD(
        0x0252D290,
        void,
        Internal_DrawMesh_Injected,
        app::Mesh* mesh,
        int32_t submesh_index,
        app::Matrix4x4* matrix,
        app::Material* material,
        int32_t layer,
        app::Camera* camera,
        app::MaterialPropertyBlock* properties,
        app::ShadowCastingMode__Enum cast_shadows,
        bool receive_shadows,
        app::Transform* probe_anchor,
        app::LightProbeUsage__Enum light_probe_usage,
        app::LightProbeProxyVolume* light_probe_proxy_volume
    )
} // namespace app::classes::UnityEngine::Graphics
