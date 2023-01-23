#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CVRCompositor.h>
#include <Modloader/app/structs/ETrackingUniverseOrigin__Enum.h>
#include <Modloader/app/structs/EVRCompositorError__Enum.h>
#include <Modloader/app/structs/TrackedDevicePose_t__Array.h>
#include <Modloader/app/structs/TrackedDevicePose_t.h>
#include <Modloader/app/structs/EVREye__Enum.h>
#include <Modloader/app/structs/Texture_t.h>
#include <Modloader/app/structs/VRTextureBounds_t.h>
#include <Modloader/app/structs/EVRSubmitFlags__Enum.h>
#include <Modloader/app/structs/Compositor_FrameTiming.h>
#include <Modloader/app/structs/Compositor_CumulativeStats.h>
#include <Modloader/app/structs/HmdColor_t.h>
#include <Modloader/app/structs/Texture_t__Array.h>
#include <Modloader/app/structs/void.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRCompositor {
    IL2CPP_REGISTER_METHOD(0x01677C10, void, ctor, (app::CVRCompositor * this_ptr, void* p_interface))
    IL2CPP_REGISTER_METHOD(0x01677DC0, void, SetTrackingSpace, (app::CVRCompositor * this_ptr, app::ETrackingUniverseOrigin__Enum e_origin))
    IL2CPP_REGISTER_METHOD(0x01677DE0, app::ETrackingUniverseOrigin__Enum, GetTrackingSpace, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01677E00, app::EVRCompositorError__Enum, WaitGetPoses, (app::CVRCompositor * this_ptr, app::TrackedDevicePose_t__Array* p_render_pose_array, app::TrackedDevicePose_t__Array* p_game_pose_array))
    IL2CPP_REGISTER_METHOD(0x01677E50, app::EVRCompositorError__Enum, GetLastPoses, (app::CVRCompositor * this_ptr, app::TrackedDevicePose_t__Array* p_render_pose_array, app::TrackedDevicePose_t__Array* p_game_pose_array))
    IL2CPP_REGISTER_METHOD(0x01677EA0, app::EVRCompositorError__Enum, GetLastPoseForTrackedDeviceIndex, (app::CVRCompositor * this_ptr, uint32_t un_device_index, app::TrackedDevicePose_t* p_output_pose, app::TrackedDevicePose_t* p_output_game_pose))
    IL2CPP_REGISTER_METHOD(0x01677ED0, app::EVRCompositorError__Enum, Submit, (app::CVRCompositor * this_ptr, app::EVREye__Enum e_eye, app::Texture_t* p_texture, app::VRTextureBounds_t* p_bounds, app::EVRSubmitFlags__Enum n_submit_flags))
    IL2CPP_REGISTER_METHOD(0x01677F00, void, ClearLastSubmittedFrame, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007FB020, void, PostPresentHandoff, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01677F20, bool, GetFrameTiming, (app::CVRCompositor * this_ptr, app::Compositor_FrameTiming* p_timing, uint32_t un_frames_ago))
    IL2CPP_REGISTER_METHOD(0x01677F40, uint32_t, GetFrameTimings, (app::CVRCompositor * this_ptr, app::Compositor_FrameTiming* p_timing, uint32_t n_frames))
    IL2CPP_REGISTER_METHOD(0x01677F60, float, GetFrameTimeRemaining, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01677F80, void, GetCumulativeStats, (app::CVRCompositor * this_ptr, app::Compositor_CumulativeStats* p_stats, uint32_t n_stats_size_in_bytes))
    IL2CPP_REGISTER_METHOD(0x01677FA0, void, FadeToColor, (app::CVRCompositor * this_ptr, float f_seconds, float f_red, float f_green, float f_blue, float f_alpha, bool b_background))
    IL2CPP_REGISTER_METHOD(0x01677FE0, app::HmdColor_t, GetCurrentFadeColor, (app::CVRCompositor * this_ptr, bool b_background))
    IL2CPP_REGISTER_METHOD(0x01678020, void, FadeGrid, (app::CVRCompositor * this_ptr, float f_seconds, bool b_fade_in))
    IL2CPP_REGISTER_METHOD(0x01678050, float, GetCurrentGridAlpha, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01678080, app::EVRCompositorError__Enum, SetSkyboxOverride, (app::CVRCompositor * this_ptr, app::Texture_t__Array* p_textures))
    IL2CPP_REGISTER_METHOD(0x016780C0, void, ClearSkyboxOverride, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016780F0, void, CompositorBringToFront, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01678120, void, CompositorGoToBack, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01678150, void, CompositorQuit, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01678180, bool, IsFullscreen, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016781B0, uint32_t, GetCurrentSceneFocusProcess, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016781E0, uint32_t, GetLastFrameRenderer, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01678210, bool, CanRenderScene, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01678240, void, ShowMirrorWindow, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01678270, void, HideMirrorWindow, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016782A0, bool, IsMirrorWindowVisible, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016782D0, void, CompositorDumpImages, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01678300, bool, ShouldAppRenderWithLowResources, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01678330, void, ForceInterleavedReprojectionOn, (app::CVRCompositor * this_ptr, bool b_override))
    IL2CPP_REGISTER_METHOD(0x01678360, void, ForceReconnectProcess, (app::CVRCompositor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01678390, void, SuspendRendering, (app::CVRCompositor * this_ptr, bool b_suspend))
    IL2CPP_REGISTER_METHOD(0x016783C0, app::EVRCompositorError__Enum, GetMirrorTextureD3D11, (app::CVRCompositor * this_ptr, app::EVREye__Enum e_eye, void* p_d3_d11_device_or_resource, app::void** pp_d3_d11_shader_resource_view))
    IL2CPP_REGISTER_METHOD(0x016783F0, void, ReleaseMirrorTextureD3D11, (app::CVRCompositor * this_ptr, void* p_d3_d11_shader_resource_view))
    IL2CPP_REGISTER_METHOD(0x01678420, app::EVRCompositorError__Enum, GetMirrorTextureGL, (app::CVRCompositor * this_ptr, app::EVREye__Enum e_eye, uint32_t* pgl_texture_id, void* pgl_shared_texture_handle))
    IL2CPP_REGISTER_METHOD(0x01678450, bool, ReleaseSharedGLTexture, (app::CVRCompositor * this_ptr, uint32_t gl_texture_id, void* gl_shared_texture_handle))
    IL2CPP_REGISTER_METHOD(0x01678480, void, LockGLSharedTextureForAccess, (app::CVRCompositor * this_ptr, void* gl_shared_texture_handle))
    IL2CPP_REGISTER_METHOD(0x016784B0, void, UnlockGLSharedTextureForAccess, (app::CVRCompositor * this_ptr, void* gl_shared_texture_handle))
    IL2CPP_REGISTER_METHOD(0x016784E0, uint32_t, GetVulkanInstanceExtensionsRequired, (app::CVRCompositor * this_ptr, app::StringBuilder* pch_value, uint32_t un_buffer_size))
    IL2CPP_REGISTER_METHOD(0x01678510, uint32_t, GetVulkanDeviceExtensionsRequired, (app::CVRCompositor * this_ptr, void* p_physical_device, app::StringBuilder* pch_value, uint32_t un_buffer_size))
    IL2CPP_REGISTER_METHOD(0x01678540, void, SetExplicitTimingMode, (app::CVRCompositor * this_ptr, bool b_explicit_timing_mode))
    IL2CPP_REGISTER_METHOD(0x01678570, app::EVRCompositorError__Enum, SubmitExplicitTimingData, (app::CVRCompositor * this_ptr))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRCompositor
