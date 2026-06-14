#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClearFlags__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/ComputeBuffer.h>
#include <Modloader/app/structs/ComputeShader.h>
#include <Modloader/app/structs/CubemapFace__Enum.h>
#include <Modloader/app/structs/CustomSampler.h>
#include <Modloader/app/structs/FastMemoryFlags__Enum.h>
#include <Modloader/app/structs/FilterMode__Enum.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MaterialPropertyBlock.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshTopology__Enum.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RenderBufferLoadAction__Enum.h>
#include <Modloader/app/structs/RenderBufferLoadAction__Enum__Array.h>
#include <Modloader/app/structs/RenderBufferStoreAction__Enum.h>
#include <Modloader/app/structs/RenderBufferStoreAction__Enum__Array.h>
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#include <Modloader/app/structs/RenderTargetIdentifier__Array.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/RenderTextureDescriptor.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/RenderTextureMemoryless__Enum.h>
#include <Modloader/app/structs/RenderTextureReadWrite__Enum.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/SkinnedMeshRenderer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SurfaceType__Enum.h>
#include <Modloader/app/structs/SurfaceUsage__Enum.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Vector4__Array.h>

namespace app::classes::UnityEngine::Rendering::CommandBuffer {
    IL2CPP_REGISTER_METHOD(0x02973C90, void, ctor, app::CommandBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02973CF0, void, SetInvertCulling, app::CommandBuffer* this_ptr, bool invert_culling)
    IL2CPP_REGISTER_METHOD(0x02973D50, void*, InitBuffer, )
    IL2CPP_REGISTER_METHOD(0x02973DA0, void, ReleaseBuffer, app::CommandBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02973DF0,
        void,
        SetComputeFloatParam,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t name_i_d,
        float val
    )
    IL2CPP_REGISTER_METHOD(
        0x02973E70,
        void,
        SetComputeVectorParam,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t name_i_d,
        app::Vector4 val
    )
    IL2CPP_REGISTER_METHOD(
        0x02973EF0,
        void,
        SetComputeMatrixParam,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t name_i_d,
        app::Matrix4x4 val
    )
    IL2CPP_REGISTER_METHOD(
        0x02973F70,
        void,
        Internal_SetComputeFloats,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t name_i_d,
        app::Single__Array* values
    )
    IL2CPP_REGISTER_METHOD(
        0x02973FF0,
        void,
        Internal_SetComputeTextureParam,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t kernel_index,
        int32_t name_i_d,
        app::RenderTargetIdentifier* rt,
        int32_t mip_level
    )
    IL2CPP_REGISTER_METHOD(
        0x02974080,
        void,
        SetComputeBufferParam,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t kernel_index,
        int32_t name_i_d,
        app::ComputeBuffer* buffer
    )
    IL2CPP_REGISTER_METHOD(
        0x02974110,
        void,
        SetSkinPoseBuffer,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t kernel_index,
        int32_t name_i_d,
        app::SkinnedMeshRenderer* skm
    )
    IL2CPP_REGISTER_METHOD(
        0x029741A0,
        void,
        Internal_DispatchCompute,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t kernel_index,
        int32_t thread_groups_x,
        int32_t thread_groups_y,
        int32_t thread_groups_z
    )
    IL2CPP_REGISTER_METHOD(
        0x02974230,
        void,
        Internal_DispatchComputeIndirect,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t kernel_index,
        app::ComputeBuffer* indirect_buffer,
        uint32_t args_offset
    )
    IL2CPP_REGISTER_METHOD(
        0x029742C0,
        void,
        Internal_ResolveAntiAliasedSurface,
        app::CommandBuffer* this_ptr,
        app::RenderTexture* rt,
        app::RenderTexture* target
    )
    IL2CPP_REGISTER_METHOD(0x02974330, void, set_name, app::CommandBuffer* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02974390, int32_t, get_sizeInBytes, app::CommandBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029743E0, void, Clear, app::CommandBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02974430,
        void,
        Internal_DrawMesh,
        app::CommandBuffer* this_ptr,
        app::Mesh* mesh,
        app::Matrix4x4 matrix,
        app::Material* material,
        int32_t submesh_index,
        int32_t shader_pass,
        app::MaterialPropertyBlock* properties
    )
    IL2CPP_REGISTER_METHOD(
        0x029744D0,
        void,
        Internal_DrawRenderer,
        app::CommandBuffer* this_ptr,
        app::Renderer* renderer,
        app::Material* material,
        int32_t submesh_index,
        int32_t shader_pass
    )
    IL2CPP_REGISTER_METHOD(
        0x02974560,
        void,
        Internal_DrawProcedural,
        app::CommandBuffer* this_ptr,
        app::Matrix4x4 matrix,
        app::Material* material,
        int32_t shader_pass,
        app::MeshTopology__Enum topology,
        int32_t vertex_count,
        int32_t instance_count,
        app::MaterialPropertyBlock* properties
    )
    IL2CPP_REGISTER_METHOD(0x02974610, void, SetViewport, app::CommandBuffer* this_ptr, app::Rect pixel_rect)
    IL2CPP_REGISTER_METHOD(
        0x02974670,
        void,
        CopyTexture_Internal,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier* src,
        int32_t src_element,
        int32_t src_mip,
        int32_t src_x,
        int32_t src_y,
        int32_t src_width,
        int32_t src_height,
        app::RenderTargetIdentifier* dst,
        int32_t dst_element,
        int32_t dst_mip,
        int32_t dst_x,
        int32_t dst_y,
        int32_t mode
    )
    IL2CPP_REGISTER_METHOD(
        0x02974700,
        void,
        Blit_Texture,
        app::CommandBuffer* this_ptr,
        app::Texture* source,
        app::RenderTargetIdentifier* dest,
        app::Material* mat,
        int32_t pass,
        app::Vector2 scale,
        app::Vector2 offset
    )
    IL2CPP_REGISTER_METHOD(
        0x029747B0,
        void,
        Blit_Identifier,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier* source,
        app::RenderTargetIdentifier* dest,
        app::Material* mat,
        int32_t pass,
        app::Vector2 scale,
        app::Vector2 offset
    )
    IL2CPP_REGISTER_METHOD(
        0x02974860,
        void,
        SwitchIntoFastMemory_1,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier* rt,
        app::SurfaceType__Enum surface_type,
        app::SurfaceUsage__Enum surface_usage,
        app::FastMemoryFlags__Enum fast_memory_flags,
        bool copy_contents,
        float spill_percentage
    )
    IL2CPP_REGISTER_METHOD(0x029748F0, void, SwitchOutOfFastMemory_1, app::CommandBuffer* this_ptr, app::RenderTargetIdentifier* rt, bool copy_contents)
    IL2CPP_REGISTER_METHOD(
        0x02974970,
        void,
        GetTemporaryRT_1,
        app::CommandBuffer* this_ptr,
        int32_t name_i_d,
        int32_t width,
        int32_t height,
        int32_t depth_buffer,
        app::FilterMode__Enum filter,
        app::RenderTextureFormat__Enum format,
        app::RenderTextureReadWrite__Enum read_write,
        int32_t anti_aliasing,
        bool enable_random_write,
        app::RenderTextureMemoryless__Enum memoryless_mode,
        bool use_dynamic_scale
    )
    IL2CPP_REGISTER_METHOD(
        0x02974A20,
        void,
        GetTemporaryRT_2,
        app::CommandBuffer* this_ptr,
        int32_t name_i_d,
        int32_t width,
        int32_t height,
        int32_t depth_buffer,
        app::FilterMode__Enum filter,
        app::RenderTextureFormat__Enum format,
        app::RenderTextureReadWrite__Enum read_write,
        int32_t anti_aliasing,
        bool enable_random_write,
        app::RenderTextureMemoryless__Enum memoryless_mode
    )
    IL2CPP_REGISTER_METHOD(
        0x02974AC0,
        void,
        GetTemporaryRT_3,
        app::CommandBuffer* this_ptr,
        int32_t name_i_d,
        int32_t width,
        int32_t height,
        int32_t depth_buffer,
        app::FilterMode__Enum filter,
        app::RenderTextureFormat__Enum format,
        app::RenderTextureReadWrite__Enum read_write,
        int32_t anti_aliasing,
        bool enable_random_write
    )
    IL2CPP_REGISTER_METHOD(
        0x02974BA0,
        void,
        GetTemporaryRT_4,
        app::CommandBuffer* this_ptr,
        int32_t name_i_d,
        int32_t width,
        int32_t height,
        int32_t depth_buffer,
        app::FilterMode__Enum filter,
        app::RenderTextureFormat__Enum format,
        app::RenderTextureReadWrite__Enum read_write,
        int32_t anti_aliasing
    )
    IL2CPP_REGISTER_METHOD(
        0x02974C70,
        void,
        GetTemporaryRT_5,
        app::CommandBuffer* this_ptr,
        int32_t name_i_d,
        int32_t width,
        int32_t height,
        int32_t depth_buffer,
        app::FilterMode__Enum filter,
        app::RenderTextureFormat__Enum format,
        app::RenderTextureReadWrite__Enum read_write
    )
    IL2CPP_REGISTER_METHOD(
        0x02974D40,
        void,
        GetTemporaryRT_6,
        app::CommandBuffer* this_ptr,
        int32_t name_i_d,
        int32_t width,
        int32_t height,
        int32_t depth_buffer,
        app::FilterMode__Enum filter,
        app::RenderTextureFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(
        0x02974D80,
        void,
        GetTemporaryRTWithDescriptor,
        app::CommandBuffer* this_ptr,
        int32_t name_i_d,
        app::RenderTextureDescriptor desc,
        app::FilterMode__Enum filter
    )
    IL2CPP_REGISTER_METHOD(
        0x02974E00,
        void,
        GetTemporaryRT_7,
        app::CommandBuffer* this_ptr,
        int32_t name_i_d,
        app::RenderTextureDescriptor desc,
        app::FilterMode__Enum filter
    )
    IL2CPP_REGISTER_METHOD(0x02974EA0, void, ReleaseTemporaryRT, app::CommandBuffer* this_ptr, int32_t name_i_d)
    IL2CPP_REGISTER_METHOD(
        0x02974F00,
        void,
        ClearRenderTarget_1,
        app::CommandBuffer* this_ptr,
        app::ClearFlags__Enum flags,
        app::Color background_color,
        float depth
    )
    IL2CPP_REGISTER_METHOD(
        0x02974F80,
        void,
        ClearRenderTarget_2,
        app::CommandBuffer* this_ptr,
        bool clear_depth,
        bool clear_color,
        app::Color background_color,
        float depth
    )
    IL2CPP_REGISTER_METHOD(0x02975000, void, ClearRenderTarget_3, app::CommandBuffer* this_ptr, bool clear_depth, bool clear_color, app::Color background_color)
    IL2CPP_REGISTER_METHOD(0x02975080, void, SetGlobalFloat, app::CommandBuffer* this_ptr, int32_t name_i_d, float value)
    IL2CPP_REGISTER_METHOD(0x029750F0, void, SetGlobalInt, app::CommandBuffer* this_ptr, int32_t name_i_d, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02975160, void, SetGlobalVector, app::CommandBuffer* this_ptr, int32_t name_i_d, app::Vector4 value)
    IL2CPP_REGISTER_METHOD(0x029751D0, void, SetGlobalColor, app::CommandBuffer* this_ptr, int32_t name_i_d, app::Color value)
    IL2CPP_REGISTER_METHOD(0x02975240, void, SetGlobalMatrix, app::CommandBuffer* this_ptr, int32_t name_i_d, app::Matrix4x4 value)
    IL2CPP_REGISTER_METHOD(0x029752B0, void, EnableShaderKeyword, app::CommandBuffer* this_ptr, int32_t keyword_i_d)
    IL2CPP_REGISTER_METHOD(0x02975310, void, DisableShaderKeyword, app::CommandBuffer* this_ptr, int32_t keyword_i_d)
    IL2CPP_REGISTER_METHOD(0x02975370, void, SetViewProjectionMatrices, app::CommandBuffer* this_ptr, app::Matrix4x4 view, app::Matrix4x4 proj)
    IL2CPP_REGISTER_METHOD(0x029753E0, void, SetGlobalVectorArray, app::CommandBuffer* this_ptr, int32_t name_i_d, app::Vector4__Array* values)
    IL2CPP_REGISTER_METHOD(0x02975450, void, SetGlobalVectorArrayEx, app::CommandBuffer* this_ptr, int32_t name_i_d, int32_t count, app::Vector4__Array* values)
    IL2CPP_REGISTER_METHOD(0x029754D0, void, SetGlobalTexture_Impl, app::CommandBuffer* this_ptr, int32_t name_i_d, app::RenderTargetIdentifier* rt)
    IL2CPP_REGISTER_METHOD(0x02975540, void, SetGlobalBuffer, app::CommandBuffer* this_ptr, int32_t name_i_d, app::ComputeBuffer* value)
    IL2CPP_REGISTER_METHOD(0x029755B0, void, LoadGlobalProperties, app::CommandBuffer* this_ptr, app::Int32__Array* name_i_d)
    IL2CPP_REGISTER_METHOD(0x02975610, void, SuspendJobsThreshold, app::CommandBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02975660, void, WakeupRenderThread, app::CommandBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029756B0, void, BeginSample_1, app::CommandBuffer* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02975710, void, EndSample_1, app::CommandBuffer* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02975770, void, BeginSample_2, app::CommandBuffer* this_ptr, app::CustomSampler* sampler)
    IL2CPP_REGISTER_METHOD(0x029757E0, void, EndSample_2, app::CommandBuffer* this_ptr, app::CustomSampler* sampler)
    IL2CPP_REGISTER_METHOD(0x02975850, void, BeginSampleInternal, app::CommandBuffer* this_ptr, void* sampler)
    IL2CPP_REGISTER_METHOD(0x029758B0, void, EndSampleInternal, app::CommandBuffer* this_ptr, void* sampler)
    IL2CPP_REGISTER_METHOD(0x02975910, void, SetRenderTarget_1, app::CommandBuffer* this_ptr, app::RenderTargetIdentifier rt)
    IL2CPP_REGISTER_METHOD(
        0x029759A0,
        void,
        SetRenderTarget_2,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier rt,
        int32_t mip_level,
        app::CubemapFace__Enum cubemap_face,
        int32_t depth_slice
    )
    IL2CPP_REGISTER_METHOD(
        0x02975BC0,
        void,
        SetRenderTarget_3,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier color,
        app::RenderTargetIdentifier depth
    )
    IL2CPP_REGISTER_METHOD(
        0x02975C70,
        void,
        SetRenderTarget_4,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier__Array* colors,
        app::RenderTargetIdentifier depth
    )
    IL2CPP_REGISTER_METHOD(
        0x02975EE0,
        void,
        SetRenderTargetSingle_Internal,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier rt,
        app::RenderBufferLoadAction__Enum color_load_action,
        app::RenderBufferStoreAction__Enum color_store_action,
        app::RenderBufferLoadAction__Enum depth_load_action,
        app::RenderBufferStoreAction__Enum depth_store_action
    )
    IL2CPP_REGISTER_METHOD(
        0x02975F80,
        void,
        SetRenderTargetColorDepth_Internal,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier color,
        app::RenderTargetIdentifier depth,
        app::RenderBufferLoadAction__Enum color_load_action,
        app::RenderBufferStoreAction__Enum color_store_action,
        app::RenderBufferLoadAction__Enum depth_load_action,
        app::RenderBufferStoreAction__Enum depth_store_action
    )
    IL2CPP_REGISTER_METHOD(
        0x02976020,
        void,
        SetRenderTargetMulti_Internal,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier__Array* colors,
        app::RenderTargetIdentifier depth,
        app::RenderBufferLoadAction__Enum__Array* color_load_actions,
        app::RenderBufferStoreAction__Enum__Array* color_store_actions,
        app::RenderBufferLoadAction__Enum depth_load_action,
        app::RenderBufferStoreAction__Enum depth_store_action
    )
    IL2CPP_REGISTER_METHOD(0x029760C0, void, Finalize, app::CommandBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02976150, void, Dispose_1, app::CommandBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02976200, void, Dispose_2, app::CommandBuffer* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(
        0x02973F70,
        void,
        SetComputeFloatParams,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t name_i_d,
        app::Single__Array* values
    )
    IL2CPP_REGISTER_METHOD(
        0x029762C0,
        void,
        SetComputeTextureParam,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t kernel_index,
        int32_t name_i_d,
        app::RenderTargetIdentifier rt
    )
    IL2CPP_REGISTER_METHOD(
        0x029741A0,
        void,
        DispatchCompute_1,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t kernel_index,
        int32_t thread_groups_x,
        int32_t thread_groups_y,
        int32_t thread_groups_z
    )
    IL2CPP_REGISTER_METHOD(
        0x02974230,
        void,
        DispatchCompute_2,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t kernel_index,
        app::ComputeBuffer* indirect_buffer,
        uint32_t args_offset
    )
    IL2CPP_REGISTER_METHOD(0x02976360, void, ResolveAntiAliasedSurface, app::CommandBuffer* this_ptr, app::RenderTexture* rt, app::RenderTexture* target)
    IL2CPP_REGISTER_METHOD(
        0x02976490,
        void,
        DrawMesh_1,
        app::CommandBuffer* this_ptr,
        app::Mesh* mesh,
        app::Matrix4x4 matrix,
        app::Material* material,
        int32_t submesh_index,
        int32_t shader_pass,
        app::MaterialPropertyBlock* properties
    )
    IL2CPP_REGISTER_METHOD(
        0x02976830,
        void,
        DrawMesh_2,
        app::CommandBuffer* this_ptr,
        app::Mesh* mesh,
        app::Matrix4x4 matrix,
        app::Material* material,
        int32_t submesh_index,
        int32_t shader_pass
    )
    IL2CPP_REGISTER_METHOD(
        0x029768A0,
        void,
        DrawMesh_3,
        app::CommandBuffer* this_ptr,
        app::Mesh* mesh,
        app::Matrix4x4 matrix,
        app::Material* material,
        int32_t submesh_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02976900,
        void,
        DrawRenderer,
        app::CommandBuffer* this_ptr,
        app::Renderer* renderer,
        app::Material* material,
        int32_t submesh_index,
        int32_t shader_pass
    )
    IL2CPP_REGISTER_METHOD(
        0x02976B20,
        void,
        DrawProcedural_1,
        app::CommandBuffer* this_ptr,
        app::Matrix4x4 matrix,
        app::Material* material,
        int32_t shader_pass,
        app::MeshTopology__Enum topology,
        int32_t vertex_count,
        int32_t instance_count,
        app::MaterialPropertyBlock* properties
    )
    IL2CPP_REGISTER_METHOD(
        0x02976CD0,
        void,
        DrawProcedural_2,
        app::CommandBuffer* this_ptr,
        app::Matrix4x4 matrix,
        app::Material* material,
        int32_t shader_pass,
        app::MeshTopology__Enum topology,
        int32_t vertex_count,
        int32_t instance_count
    )
    IL2CPP_REGISTER_METHOD(
        0x02976E80,
        void,
        DrawProcedural_3,
        app::CommandBuffer* this_ptr,
        app::Matrix4x4 matrix,
        app::Material* material,
        int32_t shader_pass,
        app::MeshTopology__Enum topology,
        int32_t vertex_count
    )
    IL2CPP_REGISTER_METHOD(0x02977030, void, CopyTexture, app::CommandBuffer* this_ptr, app::RenderTargetIdentifier src, app::RenderTargetIdentifier dst)
    IL2CPP_REGISTER_METHOD(0x02977100, void, Blit_1, app::CommandBuffer* this_ptr, app::Texture* source, app::RenderTargetIdentifier dest, app::Material* mat)
    IL2CPP_REGISTER_METHOD(
        0x02977150,
        void,
        Blit_2,
        app::CommandBuffer* this_ptr,
        app::Texture* source,
        app::RenderTargetIdentifier dest,
        app::Material* mat,
        int32_t pass
    )
    IL2CPP_REGISTER_METHOD(0x029771A0, void, Blit_3, app::CommandBuffer* this_ptr, app::RenderTargetIdentifier source, app::RenderTargetIdentifier dest)
    IL2CPP_REGISTER_METHOD(
        0x029771F0,
        void,
        Blit_4,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier source,
        app::RenderTargetIdentifier dest,
        app::Material* mat
    )
    IL2CPP_REGISTER_METHOD(
        0x02977240,
        void,
        Blit_5,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier source,
        app::RenderTargetIdentifier dest,
        app::Material* mat,
        int32_t pass
    )
    IL2CPP_REGISTER_METHOD(
        0x02977290,
        void,
        SwitchIntoFastMemory_2,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier rt,
        app::SurfaceType__Enum surface_type,
        app::SurfaceUsage__Enum surface_usage,
        app::FastMemoryFlags__Enum fast_memory_flags,
        bool copy_contents,
        float spill_percentage
    )
    IL2CPP_REGISTER_METHOD(0x02977340, void, SwitchOutOfFastMemory_2, app::CommandBuffer* this_ptr, app::RenderTargetIdentifier rt, bool copy_contents)
    IL2CPP_REGISTER_METHOD(0x029773C0, void, SetGlobalTexture, app::CommandBuffer* this_ptr, int32_t name_i_d, app::RenderTargetIdentifier value)
    IL2CPP_REGISTER_METHOD(
        0x02977430,
        void,
        SetComputeVectorParam_Injected,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t name_i_d,
        app::Vector4* val
    )
    IL2CPP_REGISTER_METHOD(
        0x029774B0,
        void,
        SetComputeMatrixParam_Injected,
        app::CommandBuffer* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t name_i_d,
        app::Matrix4x4* val
    )
    IL2CPP_REGISTER_METHOD(
        0x02977530,
        void,
        Internal_DrawMesh_Injected,
        app::CommandBuffer* this_ptr,
        app::Mesh* mesh,
        app::Matrix4x4* matrix,
        app::Material* material,
        int32_t submesh_index,
        int32_t shader_pass,
        app::MaterialPropertyBlock* properties
    )
    IL2CPP_REGISTER_METHOD(
        0x029775C0,
        void,
        Internal_DrawProcedural_Injected,
        app::CommandBuffer* this_ptr,
        app::Matrix4x4* matrix,
        app::Material* material,
        int32_t shader_pass,
        app::MeshTopology__Enum topology,
        int32_t vertex_count,
        int32_t instance_count,
        app::MaterialPropertyBlock* properties
    )
    IL2CPP_REGISTER_METHOD(0x02977650, void, SetViewport_Injected, app::CommandBuffer* this_ptr, app::Rect* pixel_rect)
    IL2CPP_REGISTER_METHOD(
        0x029776B0,
        void,
        Blit_Texture_Injected,
        app::CommandBuffer* this_ptr,
        app::Texture* source,
        app::RenderTargetIdentifier* dest,
        app::Material* mat,
        int32_t pass,
        app::Vector2* scale,
        app::Vector2* offset
    )
    IL2CPP_REGISTER_METHOD(
        0x02977740,
        void,
        Blit_Identifier_Injected,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier* source,
        app::RenderTargetIdentifier* dest,
        app::Material* mat,
        int32_t pass,
        app::Vector2* scale,
        app::Vector2* offset
    )
    IL2CPP_REGISTER_METHOD(
        0x029777D0,
        void,
        GetTemporaryRTWithDescriptor_Injected,
        app::CommandBuffer* this_ptr,
        int32_t name_i_d,
        app::RenderTextureDescriptor* desc,
        app::FilterMode__Enum filter
    )
    IL2CPP_REGISTER_METHOD(
        0x02977850,
        void,
        ClearRenderTarget_Injected,
        app::CommandBuffer* this_ptr,
        app::ClearFlags__Enum flags,
        app::Color* background_color,
        float depth
    )
    IL2CPP_REGISTER_METHOD(0x029778D0, void, SetGlobalVector_Injected, app::CommandBuffer* this_ptr, int32_t name_i_d, app::Vector4* value)
    IL2CPP_REGISTER_METHOD(0x02977940, void, SetGlobalColor_Injected, app::CommandBuffer* this_ptr, int32_t name_i_d, app::Color* value)
    IL2CPP_REGISTER_METHOD(0x029779B0, void, SetGlobalMatrix_Injected, app::CommandBuffer* this_ptr, int32_t name_i_d, app::Matrix4x4* value)
    IL2CPP_REGISTER_METHOD(0x02977A20, void, SetViewProjectionMatrices_Injected, app::CommandBuffer* this_ptr, app::Matrix4x4* view, app::Matrix4x4* proj)
    IL2CPP_REGISTER_METHOD(
        0x02977A90,
        void,
        SetRenderTargetSingle_Internal_Injected,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier* rt,
        app::RenderBufferLoadAction__Enum color_load_action,
        app::RenderBufferStoreAction__Enum color_store_action,
        app::RenderBufferLoadAction__Enum depth_load_action,
        app::RenderBufferStoreAction__Enum depth_store_action
    )
    IL2CPP_REGISTER_METHOD(
        0x02977B20,
        void,
        SetRenderTargetColorDepth_Internal_Injected,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier* color,
        app::RenderTargetIdentifier* depth,
        app::RenderBufferLoadAction__Enum color_load_action,
        app::RenderBufferStoreAction__Enum color_store_action,
        app::RenderBufferLoadAction__Enum depth_load_action,
        app::RenderBufferStoreAction__Enum depth_store_action
    )
    IL2CPP_REGISTER_METHOD(
        0x02977BB0,
        void,
        SetRenderTargetMulti_Internal_Injected,
        app::CommandBuffer* this_ptr,
        app::RenderTargetIdentifier__Array* colors,
        app::RenderTargetIdentifier* depth,
        app::RenderBufferLoadAction__Enum__Array* color_load_actions,
        app::RenderBufferStoreAction__Enum__Array* color_store_actions,
        app::RenderBufferLoadAction__Enum depth_load_action,
        app::RenderBufferStoreAction__Enum depth_store_action
    )
} // namespace app::classes::UnityEngine::Rendering::CommandBuffer
