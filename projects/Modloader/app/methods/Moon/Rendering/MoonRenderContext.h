#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/ClearFlagMode__Enum.h>
#include <Modloader/app/structs/ClearFlags__Enum.h>
#include <Modloader/app/structs/ClearSettings.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/ComputeBuffer.h>
#include <Modloader/app/structs/ComputeShader.h>
#include <Modloader/app/structs/CullResults.h>
#include <Modloader/app/structs/CustomSampler.h>
#include <Modloader/app/structs/DrawRendererSettings.h>
#include <Modloader/app/structs/FilterRenderersSettings.h>
#include <Modloader/app/structs/FilterResults.h>
#include <Modloader/app/structs/Int2.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/MoonRenderContext.h>
#include <Modloader/app/structs/MoonRenderContext_Sample.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset.h>
#include <Modloader/app/structs/Nullable_1_Moon_Rendering_Viewport_.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/RenderStateBlock.h>
#include <Modloader/app/structs/RenderTarget.h>
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#include <Modloader/app/structs/RenderTargetIdentifier__Array.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/ScriptableCullingParameters.h>
#include <Modloader/app/structs/ScriptableRenderContext.h>
#include <Modloader/app/structs/SrpSampler.h>
#include <Modloader/app/structs/SrpSampler_Scope__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Vector4__Array.h>

namespace app::classes::Moon::Rendering::MoonRenderContext {
    IL2CPP_REGISTER_METHOD(
        0x0078DB50,
        void,
        SetRenderTargetArray,
        app::MoonRenderContext* this_ptr,
        app::RenderTargetIdentifier color,
        int32_t slice,
        app::Nullable_1_Moon_Rendering_Viewport_ viewport,
        app::ClearSettings clear
    )
    IL2CPP_REGISTER_METHOD(0x0078DC10, void, SwitchToFastMemory, app::MoonRenderContext* this_ptr, app::RenderTargetIdentifier rt, bool copy_contents)
    IL2CPP_REGISTER_METHOD(0x0078DCC0, void, SwitchOutOfFastMemory, app::MoonRenderContext* this_ptr, app::RenderTargetIdentifier rt, bool copy_contents)
    IL2CPP_REGISTER_METHOD(0x0078DD50, void, ResolveAntiAliasedSurface, app::MoonRenderContext* this_ptr, app::RenderTarget* src, app::RenderTarget* dest)
    IL2CPP_REGISTER_METHOD(
        0x0078DEC0,
        void,
        SetRenderTarget_1,
        app::MoonRenderContext* this_ptr,
        app::RenderTargetIdentifier color_and_or_depth,
        app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ depth,
        app::Nullable_1_Moon_Rendering_Viewport_ viewport,
        app::ClearSettings clear
    )
    IL2CPP_REGISTER_METHOD(
        0x0078E110,
        void,
        SetRenderTarget_2,
        app::MoonRenderContext* this_ptr,
        app::RenderTargetIdentifier__Array* color_r_ts,
        app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ depth_rt_or_null,
        app::Nullable_1_Moon_Rendering_Viewport_ viewport,
        app::ClearSettings clear
    )
    IL2CPP_REGISTER_METHOD(
        0x0078E950,
        void,
        ClearRenderTarget_1,
        app::MoonRenderContext* this_ptr,
        app::Nullable_1_Moon_Rendering_Viewport_ viewport,
        app::ClearSettings clear,
        int32_t rt_count
    )
    IL2CPP_REGISTER_METHOD(0x0078EB20, void, ClearRenderTarget_2, app::MoonRenderContext* this_ptr, app::ClearSettings clear)
    IL2CPP_REGISTER_METHOD(0x0078EC00, void, SetFlag, app::ClearFlags__Enum* flags, app::ClearFlags__Enum flag, app::ClearFlagMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x0078EC20, void, SetViewport, app::MoonRenderContext* this_ptr, app::Nullable_1_UnityEngine_Rect_ pixel_rect)
    IL2CPP_REGISTER_METHOD(0x0078ED10, void, SetScreenParams, app::MoonRenderContext* this_ptr, app::Int2 size)
    IL2CPP_REGISTER_METHOD(0x0078EE70, void, SetGlobalFloat_1, app::MoonRenderContext* this_ptr, app::String* name, float value)
    IL2CPP_REGISTER_METHOD(0x0078EF30, void, SetGlobalInt_1, app::MoonRenderContext* this_ptr, app::String* name, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0078EFF0, void, SetGlobalFloat_2, app::MoonRenderContext* this_ptr, int32_t name_i_d, float value)
    IL2CPP_REGISTER_METHOD(0x0078F070, void, SetGlobalInt_2, app::MoonRenderContext* this_ptr, int32_t name_i_d, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0078F0F0, void, SetGlobalVector_1, app::MoonRenderContext* this_ptr, app::String* name, app::Vector4 value)
    IL2CPP_REGISTER_METHOD(0x0078F1C0, void, SetGlobalVector_2, app::MoonRenderContext* this_ptr, int32_t name_i_d, app::Vector4 value)
    IL2CPP_REGISTER_METHOD(0x0078F240, void, SetGlobalVectorArray_1, app::MoonRenderContext* this_ptr, app::String* name, app::Vector4__Array* values)
    IL2CPP_REGISTER_METHOD(0x0078F300, void, SetGlobalVectorArray_2, app::MoonRenderContext* this_ptr, int32_t name_i_d, app::Vector4__Array* values)
    IL2CPP_REGISTER_METHOD(
        0x0078F380,
        void,
        SetGlobalVectorArrayEx,
        app::MoonRenderContext* this_ptr,
        int32_t name_i_d,
        int32_t count,
        app::Vector4__Array* values
    )
    IL2CPP_REGISTER_METHOD(0x0078F410, void, LoadGlobalProperties, app::MoonRenderContext* this_ptr, app::Int32__Array* property_ids)
    IL2CPP_REGISTER_METHOD(0x0078F480, void, SuspendJobsThreshold, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0078F4E0, void, WakeupRenderThread, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0078F540, void, SetGlobalColor_1, app::MoonRenderContext* this_ptr, app::String* name, app::Color value)
    IL2CPP_REGISTER_METHOD(0x0078F610, void, SetGlobalColor_2, app::MoonRenderContext* this_ptr, int32_t name_i_d, app::Color value)
    IL2CPP_REGISTER_METHOD(0x0078F690, void, SetGlobalMatrix_1, app::MoonRenderContext* this_ptr, app::String* name, app::Matrix4x4 value)
    IL2CPP_REGISTER_METHOD(0x0078F780, void, SetGlobalMatrix_2, app::MoonRenderContext* this_ptr, int32_t name_i_d, app::Matrix4x4 value)
    IL2CPP_REGISTER_METHOD(0x0078F820, void, SetGlobalTexture_1, app::MoonRenderContext* this_ptr, app::String* name, app::RenderTargetIdentifier value)
    IL2CPP_REGISTER_METHOD(0x0078F900, void, SetGlobalTexture_2, app::MoonRenderContext* this_ptr, int32_t name_i_d, app::RenderTargetIdentifier value)
    IL2CPP_REGISTER_METHOD(0x0078F990, void, SetGlobalBuffer_1, app::MoonRenderContext* this_ptr, app::String* name, app::ComputeBuffer* value)
    IL2CPP_REGISTER_METHOD(0x0078FA50, void, SetGlobalBuffer_2, app::MoonRenderContext* this_ptr, int32_t name_i_d, app::ComputeBuffer* value)
    IL2CPP_REGISTER_METHOD(0x0078FAD0, void, EnableShaderKeyword, app::MoonRenderContext* this_ptr, int32_t keyword)
    IL2CPP_REGISTER_METHOD(0x0078FB40, void, DisableShaderKeyword, app::MoonRenderContext* this_ptr, int32_t keyword)
    IL2CPP_REGISTER_METHOD(0x0078FBB0, void, SetShaderKeyword, app::MoonRenderContext* this_ptr, int32_t keyword, bool enabled)
    IL2CPP_REGISTER_METHOD(0x0078FC80, void, CopyTexture, app::MoonRenderContext* this_ptr, app::RenderTargetIdentifier src, app::RenderTargetIdentifier dst)
    IL2CPP_REGISTER_METHOD(
        0x0078FD80,
        void,
        DispatchCompute_1,
        app::MoonRenderContext* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t kernel_index,
        int32_t thread_groups_x,
        int32_t thread_groups_y,
        int32_t thread_groups_z
    )
    IL2CPP_REGISTER_METHOD(
        0x0078FDB0,
        void,
        DispatchCompute_2,
        app::MoonRenderContext* this_ptr,
        app::ComputeShader* compute_shader,
        int32_t kernel_index,
        app::ComputeBuffer* indirect_buffer,
        uint32_t args_offset
    )
    IL2CPP_REGISTER_METHOD(
        0x0078FE40,
        void,
        Blit_1,
        app::MoonRenderContext* this_ptr,
        app::RenderTargetIdentifier source,
        app::RenderTargetIdentifier destination
    )
    IL2CPP_REGISTER_METHOD(
        0x0078FF30,
        void,
        Blit_2,
        app::MoonRenderContext* this_ptr,
        app::RenderTargetIdentifier source,
        app::RenderTargetIdentifier destination,
        app::Material* material,
        int32_t pass
    )
    IL2CPP_REGISTER_METHOD(
        0x00790040,
        void,
        BlitTri_1,
        app::MoonRenderContext* this_ptr,
        app::RenderTargetIdentifier source,
        app::RenderTargetIdentifier destination,
        app::Material* material,
        int32_t pass,
        app::Nullable_1_UnityEngine_Vector4_ source_s_t,
        app::Nullable_1_UnityEngine_Rect_ destination_viewport,
        app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ depth,
        int32_t smart_cnt,
        bool source_is_m_s
    )
    IL2CPP_REGISTER_METHOD(
        0x00790220,
        void,
        BlitTri_2,
        app::MoonRenderContext* this_ptr,
        app::RenderTargetIdentifier source,
        app::RenderTargetIdentifier destination,
        app::Material* material,
        int32_t pass,
        app::Nullable_1_UnityEngine_Vector2_ source_scale,
        app::Vector2 source_offset,
        app::Nullable_1_UnityEngine_Rect_ destination_viewport,
        app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ depth,
        int32_t smart_cnt,
        bool source_is_m_s
    )
    IL2CPP_REGISTER_METHOD(
        0x007903D0,
        void,
        BlitTri_3,
        app::MoonRenderContext* this_ptr,
        app::RenderTargetIdentifier source,
        app::RenderTargetIdentifier__Array* destination,
        app::Material* material,
        int32_t pass,
        app::Nullable_1_UnityEngine_Vector2_ source_scale,
        app::Vector2 source_offset,
        app::Nullable_1_UnityEngine_Rect_ destination_viewport,
        app::Nullable_1_UnityEngine_Rendering_RenderTargetIdentifier_ depth,
        int32_t smart_cnt,
        bool source_is_m_s
    )
    IL2CPP_REGISTER_METHOD(
        0x007905A0,
        void,
        DrawRenderer,
        app::MoonRenderContext* this_ptr,
        app::Renderer* renderer,
        app::Material* material,
        int32_t submesh_index,
        int32_t shader_pass
    )
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::CommandBuffer*, get_cmd, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007905D0, void, Dispose, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x007905E0,
        void,
        BeginRender,
        app::MoonRenderContext* this_ptr,
        app::ScriptableRenderContext context,
        app::MoonRenderPipelineAsset* asset
    )
    IL2CPP_REGISTER_METHOD(0x00790620, void, EndRender, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00790620, void, Submit, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00790630, void, ExecuteCachedCommandBuffer, app::MoonRenderContext* this_ptr, app::CommandBuffer* cached_cmd)
    IL2CPP_REGISTER_METHOD(0x00790660, void, FlushAndSubmit, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007906E0, void, FlushCommandBuffer, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00790770, void, SubmitContext, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007907E0, void, MarkCommandBufferAsUsed, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00790A00, void, RecycleCommandBuffers, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00790C20, void, DisposeCommandBuffers, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Begin, app::MoonRenderContext* this_ptr, app::CustomSampler* sampler)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, End, app::MoonRenderContext* this_ptr, app::CustomSampler* sampler)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetupSampling, app::MoonRenderContext* this_ptr, app::MoonRenderPipelineAsset* asset)
    IL2CPP_REGISTER_METHOD(0x00417870, app::MoonRenderContext_Sample, GetSample_1, app::MoonRenderContext* this_ptr, app::SrpSampler sampler)
    IL2CPP_REGISTER_METHOD(
        0x00417870,
        app::MoonRenderContext_Sample,
        GetSample_2,
        app::MoonRenderContext* this_ptr,
        app::String* name,
        app::SrpSampler_Scope__Enum scope
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PushSample, app::MoonRenderContext* this_ptr, app::SrpSampler sampler)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PopSample, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FlushSamples, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00790620, void, EndSamplesAndSubmit, app::MoonRenderContext* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LogSample, app::MoonRenderContext* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x00790EF0, void, SetupCameraProperties, app::MoonRenderContext* this_ptr, app::Camera* camera, bool stereo_setup)
    IL2CPP_REGISTER_METHOD(
        0x00790F40,
        void,
        Cull,
        app::MoonRenderContext* this_ptr,
        app::ScriptableCullingParameters* culling_params,
        app::CullResults* cull_results
    )
    IL2CPP_REGISTER_METHOD(0x00790F60, app::ScriptableCullingParameters, GetCullingParameters, app::MoonRenderContext* this_ptr, app::Camera* camera)
    IL2CPP_REGISTER_METHOD(0x007910B0, bool, IsValidToRender, app::MoonRenderContext* this_ptr, app::Camera* camera)
    IL2CPP_REGISTER_METHOD(
        0x00791130,
        void,
        DrawRenderers_1,
        app::MoonRenderContext* this_ptr,
        app::FilterResults renderers,
        app::DrawRendererSettings* draw_settings,
        app::FilterRenderersSettings filter_settings,
        bool only_prewarm
    )
    IL2CPP_REGISTER_METHOD(
        0x007911C0,
        void,
        DrawRenderers_2,
        app::MoonRenderContext* this_ptr,
        app::FilterResults renderers,
        app::DrawRendererSettings* draw_settings,
        app::FilterRenderersSettings filter_settings,
        app::RenderStateBlock render_state_block
    )
    IL2CPP_REGISTER_METHOD(0x007912B0, void, DrawSkybox, app::MoonRenderContext* this_ptr, app::Camera* camera)
    IL2CPP_REGISTER_METHOD(0x00791320, void, ctor, app::MoonRenderContext* this_ptr)
} // namespace app::classes::Moon::Rendering::MoonRenderContext
