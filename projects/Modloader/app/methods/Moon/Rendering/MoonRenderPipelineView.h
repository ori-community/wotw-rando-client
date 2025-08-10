#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/CullResults.h>
#include <Modloader/app/structs/Dictionary_2_Swing_Int2_Moon_Rendering_SrpSampler___Array.h>
#include <Modloader/app/structs/DrawRendererSettings.h>
#include <Modloader/app/structs/FilterMode__Enum.h>
#include <Modloader/app/structs/FilterResults.h>
#include <Modloader/app/structs/Int2.h>
#include <Modloader/app/structs/List_1_GodRayModifier_.h>
#include <Modloader/app/structs/List_1_IRenderPostprocessor_.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_RenderQueues__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineDebug_Slice__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineSettings.h>
#include <Modloader/app/structs/MoonRenderPipelineSettings_Slice__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineView.h>
#include <Modloader/app/structs/MoonRenderPipelineViewType__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineView_CachedCBType__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineView_FilterBounds.h>
#include <Modloader/app/structs/MoonRenderPipelineView_ReleaseReason__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame.h>
#include <Modloader/app/structs/Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds_.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock_.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/RenderFlags__Enum.h>
#include <Modloader/app/structs/RenderTarget.h>
#include <Modloader/app/structs/RenderTargetDescriptor.h>
#include <Modloader/app/structs/RenderTargetType__Enum.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/RendererCullingCategoryResults__Array.h>
#include <Modloader/app/structs/RenderingSettingsPerScene.h>
#include <Modloader/app/structs/ScriptableRenderContext.h>
#include <Modloader/app/structs/ShaderPassName.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Viewport.h>

namespace app::classes::Moon::Rendering::MoonRenderPipelineView {
    IL2CPP_REGISTER_METHOD(0x007A3190, bool, get_isGameView, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005150C0, bool, get_isSceneView, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007A31A0, bool, get_hasLinearMotionBlur, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x007A31C0,
        void,
        ctor_1,
        app::MoonRenderPipelineView* this_ptr,
        app::MoonRenderPipelineViewType__Enum view_type,
        app::MoonRenderPipelineAsset* owner,
        app::MoonRenderPipelineSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x007A3210, void, ReleaseEmissivityRTs, app::MoonRenderPipelineView* this_ptr, app::CommandBuffer* cmd)
    IL2CPP_REGISTER_METHOD(0x007A3620, void, ReleaseIsrRTs, app::MoonRenderPipelineView* this_ptr, app::CommandBuffer* cmd)
    IL2CPP_REGISTER_METHOD(0x007A38E0, void, ReleaseHistRTs, app::MoonRenderPipelineView* this_ptr, app::CommandBuffer* cmd)
    IL2CPP_REGISTER_METHOD(0x007A3CF0, void, Dispose, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_dynamicResolutionScale, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_dynamicResolutionScale, app::MoonRenderPipelineView* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00724020, float, get_dynamicResolutionScaleY, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00724030, void, set_dynamicResolutionScaleY, app::MoonRenderPipelineView* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(
        0x007A4020,
        void,
        Render,
        app::MoonRenderPipelineView* this_ptr,
        app::ScriptableRenderContext context,
        app::Camera* camera,
        double current_d_r_s_scale,
        double current_d_r_s_scale_y,
        bool isr_dirty
    )
    IL2CPP_REGISTER_METHOD(0x007A45C0, int32_t, get_NumActiveLightsInTLC, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x007A45D0,
        void,
        InvalidateCachedCB,
        app::MoonRenderPipelineView* this_ptr,
        app::MoonRenderPipelineView_CachedCBType__Enum type,
        int32_t frame
    )
    IL2CPP_REGISTER_METHOD(0x007A4690, void, InvalidateCachedCBs, app::MoonRenderPipelineView* this_ptr, app::MoonRenderPipelineView_CachedCBType__Enum type)
    IL2CPP_REGISTER_METHOD(0x007A4770, void, InvalidateAllCachedCBs, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007A49D0, app::CommandBuffer*, GetEmissivityCB, app::MoonRenderPipelineView* this_ptr, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x007A4A30, app::Camera*, get_camera, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007A4A40, app::FilterResults, get_visibleRenderers, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007A4A50, app::Int2, get_SceneResolution, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007A4A60, void, initResolutionAndFormat, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x007A4DE0,
        void,
        getRTDescriptor,
        app::MoonRenderPipelineView* this_ptr,
        app::RenderTargetDescriptor* desc,
        app::RenderTargetType__Enum type,
        app::Int2 size,
        app::RenderTextureFormat__Enum format,
        int32_t depth_buffer_bits,
        app::FilterMode__Enum filter_mode,
        app::RenderTexture* external,
        int32_t msaa_samples,
        bool bind_m_s,
        bool drs
    )
    IL2CPP_REGISTER_METHOD(0x007A4E50, int32_t, RoundToMultiple, int32_t d, int32_t multiple)
    IL2CPP_REGISTER_METHOD(
        0x007A4F20,
        void,
        render,
        app::MoonRenderPipelineView* this_ptr,
        app::Camera* camera,
        float current_d_r_s_scale,
        float current_d_r_s_scale_y,
        bool isr_dirty
    )
    IL2CPP_REGISTER_METHOD(
        0x007AAB70,
        void,
        renderPosts,
        app::MoonRenderPipelineView* this_ptr,
        app::List_1_IRenderPostprocessor_* posts,
        app::RenderTarget* source,
        app::RenderTarget* destination,
        app::RenderTarget* final_dest,
        float current_d_r_s_scale,
        float current_d_r_s_scale_y
    )
    IL2CPP_REGISTER_METHOD(0x007AB0E0, void, releasePostRT, app::MoonRenderPipelineView* this_ptr, app::RenderTarget* rt)
    IL2CPP_REGISTER_METHOD(
        0x007AB230,
        void,
        renderScene,
        app::MoonRenderPipelineView* this_ptr,
        app::RenderTarget* scene_r_t1,
        app::RenderTarget* scene_r_t2,
        float current_d_r_s_scale,
        float current_d_r_s_scale_y,
        bool isr_dirty
    )
    IL2CPP_REGISTER_METHOD(0x007AB430, void, renderUI, app::MoonRenderPipelineView* this_ptr, app::Camera* ui_cam, app::RenderTarget* ui_r_t)
    IL2CPP_REGISTER_METHOD(0x007AB890, app::DrawRendererSettings, getDrawRendererSettings, app::Camera* sort_camera, app::ShaderPassName shader_pass_name)
    IL2CPP_REGISTER_METHOD(
        0x007AB980,
        void,
        drawRenderers,
        app::MoonRenderPipelineView* this_ptr,
        app::CullResults* cull_results,
        app::DrawRendererSettings* renderer_settings,
        app::ShaderPassName shader_pass_name,
        app::Nullable_1_Moon_Rendering_MoonRenderPipelineView_FilterBounds_ filter_bounds,
        int32_t layer_mask,
        app::RenderFlags__Enum render_flags,
        app::MoonRenderPipelineAsset_RenderQueues__Enum render_queues,
        app::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock_ render_state_block,
        bool only_prepare
    )
    IL2CPP_REGISTER_METHOD(0x007AC2C0, app::CommandBuffer*, getCommandBuffer, app::String* name)
    IL2CPP_REGISTER_METHOD(0x007AC490, void, Dispose_Sliced, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x007AC6C0,
        void,
        render_Sliced,
        app::MoonRenderPipelineView* this_ptr,
        app::RenderTarget* scene_r_t1,
        app::RenderTarget* scene_r_t2,
        float current_d_r_s_scale,
        float current_d_r_s_scale_y,
        bool isr_dirty
    )
    IL2CPP_REGISTER_METHOD(0x007AC950, void, OnEnable, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007ACB60, void, SetEmissivitySpreads, float sv0, float sv1, float sv2, float sv3)
    IL2CPP_REGISTER_METHOD(0x007ACC50, void, SetEmissivityIntensities, float iv0, float iv1, float iv2, float iv3)
    IL2CPP_REGISTER_METHOD(0x007ACD40, float, HaltonSeq, app::MoonRenderPipelineView* this_ptr, int32_t prime, int32_t index)
    IL2CPP_REGISTER_METHOD(0x007ACE60, void, InitializeHalton_2_3, app::MoonRenderPipelineView* this_ptr, app::Vector2__Array* seq)
    IL2CPP_REGISTER_METHOD(0x007ACF50, app::Matrix4x4, GetJitteredPerspectiveProjectionMatrix, app::Camera* camera, app::Int2 size, app::Vector2 offset)
    IL2CPP_REGISTER_METHOD(0x007AD190, app::Matrix4x4, GetNonJitteredPerspectiveProjectionMatrix, app::Camera* camera)
    IL2CPP_REGISTER_METHOD(0x007AD230, float, GetCurrentBlitColorHiResOpaque3DBlurThreshold, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007AD3A0, float, GetCurrentAlphaDepthThreshold, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007AD510, void, Update, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007AD780, void, ctor_2, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007B00A0, void, allocateGodRayRTs, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007B09C0, void, DisposeGodRayRTs, app::MoonRenderPipelineView* this_ptr, app::CommandBuffer* cmd)
    IL2CPP_REGISTER_METHOD(
        0x007B0D70,
        void,
        setupGodRayRTs,
        app::MoonRenderPipelineView* this_ptr,
        app::Int2 size,
        float current_d_r_s_scale,
        float current_d_r_s_scale_y
    )
    IL2CPP_REGISTER_METHOD(0x007B0FF0, void, releaseGodRayRTs, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007B1310, app::Texture*, getGodraysRT, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007B13E0, bool, godraysNeedHDR, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007B1410, void, setupSliceRTs, app::MoonRenderPipelineView* this_ptr, app::Int2 size)
    IL2CPP_REGISTER_METHOD(
        0x007B2070,
        void,
        releaseRT,
        app::MoonRenderPipelineView* this_ptr,
        app::RenderTarget* rt,
        app::MoonRenderPipelineView_ReleaseReason__Enum reason
    )
    IL2CPP_REGISTER_METHOD(0x007B21B0, void, InitResources, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x007B2400,
        void,
        EmissivityDownMip,
        app::MoonRenderPipelineView* this_ptr,
        app::CommandBuffer* cmd,
        app::RenderTarget* src,
        app::RenderTarget* tmp,
        app::RenderTarget* dst,
        float radius,
        float mul,
        int32_t pass,
        float blur_limit
    )
    IL2CPP_REGISTER_METHOD(
        0x007B2A10,
        void,
        PrepareDarkeningRender,
        app::MoonRenderPipelineView* this_ptr,
        app::DrawRendererSettings* renderer_settings,
        app::MoonRenderPipelineView_FilterBounds* cull_bounds,
        int32_t slice_index,
        app::RenderFlags__Enum darkening_render_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x007B2C40,
        void,
        PrepareEmissivityRenderers,
        app::MoonRenderPipelineView* this_ptr,
        bool do_depth_precull,
        app::DrawRendererSettings renderer_settings,
        app::RenderFlags__Enum emissivity_render_flags,
        app::MoonRenderPipelineView_FilterBounds cull_bounds,
        bool do_emissivity
    )
    IL2CPP_REGISTER_METHOD(
        0x007B2EF0,
        void,
        DarkeningRender,
        app::MoonRenderPipelineView* this_ptr,
        app::RenderTarget* curr_scene_r_t,
        app::DrawRendererSettings* renderer_settings,
        app::MoonRenderPipelineView_FilterBounds* cull_bounds,
        int32_t slice_index,
        bool allow_darkening_composition,
        app::RenderFlags__Enum darkening_render_flags,
        app::Viewport* scene_viewport
    )
    IL2CPP_REGISTER_METHOD(
        0x007B38F0,
        void,
        EmissivityRender,
        app::MoonRenderPipelineView* this_ptr,
        app::RenderTarget* alpha_mask_tex,
        bool do_depth_precull,
        app::DrawRendererSettings* renderer_settings,
        app::RenderFlags__Enum emissivity_render_flags,
        app::MoonRenderPipelineView_FilterBounds* cull_bounds,
        bool do_emissivity,
        app::Vector2* slice_scale,
        int32_t* num_emissivity_slices
    )
    IL2CPP_REGISTER_METHOD(0x007B4510, int32_t, AllocateOldGodRayBlurRT, app::MoonRenderPipelineView* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x007B4650, int32_t, AllocateUnusedGodRayBlurRT, app::MoonRenderPipelineView* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(
        0x007B47E0,
        void,
        GodRaysRender,
        app::MoonRenderPipelineView* this_ptr,
        app::RenderTarget* alpha_mask_tex,
        app::List_1_GodRayModifier_* god_rays,
        app::Vector2 slice_scale,
        float z_world_near,
        float z_world_far
    )
    IL2CPP_REGISTER_METHOD(0x007B52B0, app::RenderingSettingsPerScene*, get_CurrentPerSceneSettings, )
    IL2CPP_REGISTER_METHOD(0x007B53B0, bool, get_AllowDofOnAllSlices, )
    IL2CPP_REGISTER_METHOD(0x007B5490, void, ForceAllowDofOnAllSlices, )
    IL2CPP_REGISTER_METHOD(0x007B5590, void, ForceFXAADepthPrecull, )
    IL2CPP_REGISTER_METHOD(0x007B5690, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x007B58F0, void, UpdateSceneRenderingSettings, app::RenderingSettingsPerScene* settings)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, DeferredLightingEnabled, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x007B59B0,
        void,
        OnCullingCategoryResultsReady,
        app::MoonRenderPipelineView* this_ptr,
        app::RendererCullingCategoryResults__Array* visible_renderer_categories
    )
    IL2CPP_REGISTER_METHOD(
        0x007B5B30,
        float,
        _calculateResolutionBasedAdditionalDownsamplingRatio,
        app::MoonRenderPipelineView* this_ptr,
        float scene_r_t_height,
        bool* use_alt_downsampling
    )
    IL2CPP_REGISTER_METHOD(
        0x007B5CF0,
        void,
        _calculateAltDownsamplingRatio,
        app::MoonRenderPipelineView* this_ptr,
        float scene_r_t_height,
        float slice_scale,
        bool* use_alt_downsampling,
        float* alt_downsampling_scale
    )
    IL2CPP_REGISTER_METHOD(
        0x007B5EC0,
        void,
        OnRenderImage,
        app::MoonRenderPipelineView* this_ptr,
        app::RenderTarget* scene_r_t1,
        app::RenderTarget* scene_r_t2,
        float current_d_r_s_scale,
        float current_d_r_s_scale_y,
        bool isr_dirty
    )
    IL2CPP_REGISTER_METHOD(
        0x007D3760,
        void,
        setupdarkeningPostCB,
        app::MoonRenderPipelineView* this_ptr,
        app::CommandBuffer* cmd,
        int32_t currentframe_index,
        int32_t prev_frame_index
    )
    IL2CPP_REGISTER_METHOD(
        0x007D41A0,
        void,
        setupEmissivityPostCB,
        app::MoonRenderPipelineView* this_ptr,
        app::CommandBuffer* cmd,
        int32_t currentframe_index,
        int32_t prev_frame_index
    )
    IL2CPP_REGISTER_METHOD(
        0x007D5E60,
        app::MoonRenderPipelineView_FilterBounds,
        getCullBounds,
        app::MoonRenderPipelineView* this_ptr,
        float z_world_near,
        float z_world_far
    )
    IL2CPP_REGISTER_METHOD(0x007D5F40, void, setSlicingParams_1, app::MoonRenderPipelineView* this_ptr, float z_near, float z_far, float z_expand)
    IL2CPP_REGISTER_METHOD(0x007D60C0, void, setSlicingParams_2, app::MoonRenderPipelineView* this_ptr, app::Vector4* slicing_params)
    IL2CPP_REGISTER_METHOD(0x007D61F0, void, disableSlicingParams, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007D6260, void, resetRTIndices, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007D6400, int32_t, popRTIndex, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007D6460, void, acquireMRT, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007D6BB0, void, flipMRT, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x007D6BD0,
        void,
        finishMRT,
        app::MoonRenderPipelineView* this_ptr,
        int32_t slice_index,
        float z_near,
        float z_far,
        app::Vector4* slicing_params,
        app::MoonRenderPipelineView_FilterBounds* cull_bounds,
        app::Vector2* slice_scale,
        app::Viewport* slice_viewport,
        app::Vector4* slice_u_v_scale,
        app::Vector4* uv_max_region,
        float sampling,
        bool do_depth_precull
    )
    IL2CPP_REGISTER_METHOD(0x007D6D20, void, updateMRT, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007D7040, void, enableDepthPrecull, app::MoonRenderPipelineView* this_ptr, bool enabled)
    IL2CPP_REGISTER_METHOD(0x007D7240, void, isr_onPreRenderFrame, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007D7740, void, blur_onPreRenderFrame, app::MoonRenderPipelineView* this_ptr, int32_t slice_count)
    IL2CPP_REGISTER_METHOD(
        0x007D7B10,
        void,
        blur_onPreRenderSlice,
        app::MoonRenderPipelineView* this_ptr,
        float z_world_near,
        float z_world_far,
        bool allow_motion_blur,
        app::Vector3 motion_blur_amount,
        app::Vector2 r_t_pixel_size
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, motionBlur_init, app::MoonRenderPipelineView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007D7F60, void, motionBlur_update, app::MoonRenderPipelineView* this_ptr, float dt)
    IL2CPP_REGISTER_METHOD(0x007D83A0, void, motionBlur_setInterestZones, app::MoonRenderPipelineView* this_ptr, float z_near, float z_far)
    IL2CPP_REGISTER_METHOD(0x007D86F0, void, GatherTimings, app::MoonRenderPipelineView* this_ptr, app::MoonRenderPipelineView_SrpProfilerFrame* frame)
    IL2CPP_REGISTER_METHOD(0x007D90D0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01550D20, void, alloc_1, app::Object__Array** array, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01550D20, void, alloc_2, app::MoonRenderPipelineSettings_Slice__Array** array, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01550D20, void, alloc_3, app::MoonRenderPipelineDebug_Slice__Array** array, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01550D20, void, alloc_4, app::Dictionary_2_Swing_Int2_Moon_Rendering_SrpSampler___Array** array, int32_t size)
} // namespace app::classes::Moon::Rendering::MoonRenderPipelineView
