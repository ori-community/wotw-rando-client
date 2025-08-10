#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CameraClearFlags__Enum.h>
#include <Modloader/app/structs/CameraEvent__Enum.h>
#include <Modloader/app/structs/CameraType__Enum.h>
#include <Modloader/app/structs/Camera_GateFitMode__Enum.h>
#include <Modloader/app/structs/Camera_GateFitParameters.h>
#include <Modloader/app/structs/Camera_MonoOrStereoscopicEye__Enum.h>
#include <Modloader/app/structs/Camera_ProjectionMatrixMode__Enum.h>
#include <Modloader/app/structs/Camera_StereoscopicEye__Enum.h>
#include <Modloader/app/structs/Camera__Array.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/CommandBuffer__Array.h>
#include <Modloader/app/structs/ComputeQueueType__Enum.h>
#include <Modloader/app/structs/Cubemap.h>
#include <Modloader/app/structs/DepthTextureMode__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/OpaqueSortMode__Enum.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RenderBuffer.h>
#include <Modloader/app/structs/RenderBuffer__Array.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/RenderingPath__Enum.h>
#include <Modloader/app/structs/Scene.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/StereoTargetEyeMask__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/TransparencySortMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UnityEngine::Camera {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421050, float, get_nearClipPlane, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024210A0, void, set_nearClipPlane, app::Camera* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02421100, float, get_farClipPlane, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421150, void, set_farClipPlane, app::Camera* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x024211B0, float, get_fieldOfView, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421200, void, set_fieldOfView, app::Camera* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02421260, app::RenderingPath__Enum, get_renderingPath, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024212B0, void, set_renderingPath, app::Camera* this_ptr, app::RenderingPath__Enum value)
    IL2CPP_REGISTER_METHOD(0x02421310, app::RenderingPath__Enum, get_actualRenderingPath, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421360, void, Reset, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024213B0, bool, get_allowHDR, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421400, void, set_allowHDR, app::Camera* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02421460, bool, get_allowMSAA, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024214B0, void, set_allowMSAA, app::Camera* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02421510, bool, get_allowDynamicResolution, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421560, void, set_allowDynamicResolution, app::Camera* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024215C0, bool, get_forceIntoRenderTexture, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421610, void, set_forceIntoRenderTexture, app::Camera* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02421670, float, get_orthographicSize, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024216C0, void, set_orthographicSize, app::Camera* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02421720, bool, get_orthographic, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421770, void, set_orthographic, app::Camera* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024217D0, app::OpaqueSortMode__Enum, get_opaqueSortMode, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421820, void, set_opaqueSortMode, app::Camera* this_ptr, app::OpaqueSortMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x02421880, app::TransparencySortMode__Enum, get_transparencySortMode, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024218D0, void, set_transparencySortMode, app::Camera* this_ptr, app::TransparencySortMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x02421930, app::Vector3, get_transparencySortAxis, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024219B0, void, set_transparencySortAxis, app::Camera* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x02421A10, void, ResetTransparencySortSettings, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421A60, float, get_depth, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421AB0, void, set_depth, app::Camera* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02421B10, float, get_aspect, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421B60, void, set_aspect, app::Camera* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02421BC0, void, ResetAspect, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421C10, app::Vector3, get_velocity, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421C90, int32_t, get_cullingMask, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421CE0, void, set_cullingMask, app::Camera* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02421D40, int32_t, get_noCullingMask, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421D90, void, set_noCullingMask, app::Camera* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02421DF0, int32_t, get_eventMask, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421E40, void, set_eventMask, app::Camera* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02421EA0, bool, get_layerCullSpherical, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421EF0, void, set_layerCullSpherical, app::Camera* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02421F50, app::CameraType__Enum, get_cameraType, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02421FA0, void, set_cameraType, app::Camera* this_ptr, app::CameraType__Enum value)
    IL2CPP_REGISTER_METHOD(0x02422000, app::Single__Array*, GetLayerCullDistances, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422050, void, SetLayerCullDistances, app::Camera* this_ptr, app::Single__Array* d)
    IL2CPP_REGISTER_METHOD(0x02422000, app::Single__Array*, get_layerCullDistances, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024220B0, void, set_layerCullDistances, app::Camera* this_ptr, app::Single__Array* value)
    IL2CPP_REGISTER_METHOD(0x024221C0, int32_t, get_PreviewCullingLayer, )
    IL2CPP_REGISTER_METHOD(0x02422210, bool, get_useOcclusionCulling, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422260, void, set_useOcclusionCulling, app::Camera* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024222C0, app::Matrix4x4, get_cullingMatrix, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422370, void, set_cullingMatrix, app::Camera* this_ptr, app::Matrix4x4 value)
    IL2CPP_REGISTER_METHOD(0x024223D0, void, ResetCullingMatrix, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422420, app::Color, get_backgroundColor, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024224A0, void, set_backgroundColor, app::Camera* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x02422500, app::CameraClearFlags__Enum, get_clearFlags, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422550, void, set_clearFlags, app::Camera* this_ptr, app::CameraClearFlags__Enum value)
    IL2CPP_REGISTER_METHOD(0x024225B0, app::DepthTextureMode__Enum, get_depthTextureMode, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422600, void, set_depthTextureMode, app::Camera* this_ptr, app::DepthTextureMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x02422660, bool, get_clearStencilAfterLightingPass, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024226B0, void, set_clearStencilAfterLightingPass, app::Camera* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02422710, void, IncrementMotionVectorFrameIndex, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422760, void, SetReplacementShader, app::Camera* this_ptr, app::Shader* shader, app::String* replacement_tag)
    IL2CPP_REGISTER_METHOD(0x024227D0, void, ResetReplacementShader, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422820, app::Camera_ProjectionMatrixMode__Enum, get_projectionMatrixMode, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422870, bool, get_usePhysicalProperties, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024228C0, void, set_usePhysicalProperties, app::Camera* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02422920, app::Vector2, get_sensorSize, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422990, void, set_sensorSize, app::Camera* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x024229F0, app::Vector2, get_lensShift, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422A60, void, set_lensShift, app::Camera* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x02422AC0, float, get_focalLength, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422B10, void, set_focalLength, app::Camera* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02422B70, app::Camera_GateFitMode__Enum, get_gateFit, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422BC0, void, set_gateFit, app::Camera* this_ptr, app::Camera_GateFitMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x02422C20, app::Vector3, GetLocalSpaceAim, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422CA0, app::Rect, get_rect, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422D20, void, set_rect, app::Camera* this_ptr, app::Rect value)
    IL2CPP_REGISTER_METHOD(0x02422D80, app::Rect, get_pixelRect, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422E00, void, set_pixelRect, app::Camera* this_ptr, app::Rect value)
    IL2CPP_REGISTER_METHOD(0x02422E60, int32_t, get_pixelWidth, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422EB0, int32_t, get_pixelHeight, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422F00, int32_t, get_scaledPixelWidth, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422F50, int32_t, get_scaledPixelHeight, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422FA0, app::RenderTexture*, get_targetTexture, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02422FF0, void, set_targetTexture, app::Camera* this_ptr, app::RenderTexture* value)
    IL2CPP_REGISTER_METHOD(0x02423050, app::RenderTexture*, get_activeTexture, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024230A0, int32_t, get_targetDisplay, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024230F0, void, set_targetDisplay, app::Camera* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02423150, void, SetTargetBuffersImpl, app::Camera* this_ptr, app::RenderBuffer color, app::RenderBuffer depth)
    IL2CPP_REGISTER_METHOD(0x024231C0, void, SetTargetBuffers_1, app::Camera* this_ptr, app::RenderBuffer color_buffer, app::RenderBuffer depth_buffer)
    IL2CPP_REGISTER_METHOD(0x02423230, void, SetTargetBuffersMRTImpl, app::Camera* this_ptr, app::RenderBuffer__Array* color, app::RenderBuffer depth)
    IL2CPP_REGISTER_METHOD(0x024232A0, void, SetTargetBuffers_2, app::Camera* this_ptr, app::RenderBuffer__Array* color_buffer, app::RenderBuffer depth_buffer)
    IL2CPP_REGISTER_METHOD(0x02423310, app::String__Array*, GetCameraBufferWarnings, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02423360, app::Matrix4x4, get_cameraToWorldMatrix, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02423410, app::Matrix4x4, get_worldToCameraMatrix, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024234C0, void, set_worldToCameraMatrix, app::Camera* this_ptr, app::Matrix4x4 value)
    IL2CPP_REGISTER_METHOD(0x02423520, app::Matrix4x4, get_projectionMatrix, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024235D0, void, set_projectionMatrix, app::Camera* this_ptr, app::Matrix4x4 value)
    IL2CPP_REGISTER_METHOD(0x02423630, app::Matrix4x4, get_nonJitteredProjectionMatrix, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024236E0, void, set_nonJitteredProjectionMatrix, app::Camera* this_ptr, app::Matrix4x4 value)
    IL2CPP_REGISTER_METHOD(0x02423740, bool, get_useJitteredProjectionMatrixForTransparentRendering, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02423790, void, set_useJitteredProjectionMatrixForTransparentRendering, app::Camera* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024237F0, app::Matrix4x4, get_previousViewProjectionMatrix, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024238A0, void, ResetWorldToCameraMatrix, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024238F0, void, ResetProjectionMatrix, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02423940, app::Matrix4x4, CalculateObliqueMatrix, app::Camera* this_ptr, app::Vector4 clip_plane)
    IL2CPP_REGISTER_METHOD(
        0x02423A00,
        app::Vector3,
        WorldToScreenPoint_1,
        app::Camera* this_ptr,
        app::Vector3 position,
        app::Camera_MonoOrStereoscopicEye__Enum eye
    )
    IL2CPP_REGISTER_METHOD(
        0x02423AA0,
        app::Vector3,
        WorldToViewportPoint_1,
        app::Camera* this_ptr,
        app::Vector3 position,
        app::Camera_MonoOrStereoscopicEye__Enum eye
    )
    IL2CPP_REGISTER_METHOD(
        0x02423B40,
        app::Vector3,
        ViewportToWorldPoint_1,
        app::Camera* this_ptr,
        app::Vector3 position,
        app::Camera_MonoOrStereoscopicEye__Enum eye
    )
    IL2CPP_REGISTER_METHOD(
        0x02423BE0,
        app::Vector3,
        ScreenToWorldPoint_1,
        app::Camera* this_ptr,
        app::Vector3 position,
        app::Camera_MonoOrStereoscopicEye__Enum eye
    )
    IL2CPP_REGISTER_METHOD(0x02423C80, app::Vector3, WorldToScreenPoint_2, app::Camera* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02423D20, app::Vector3, WorldToViewportPoint_2, app::Camera* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02423DC0, app::Vector3, ViewportToWorldPoint_2, app::Camera* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02423E60, app::Vector3, ScreenToWorldPoint_2, app::Camera* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02423F00, app::Vector3, ScreenToViewportPoint, app::Camera* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02423F90, app::Vector3, ViewportToScreenPoint, app::Camera* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02424020, app::Vector2, GetFrustumPlaneSizeAt, app::Camera* this_ptr, float distance)
    IL2CPP_REGISTER_METHOD(0x024240A0, app::Ray, ViewportPointToRay_1, app::Camera* this_ptr, app::Vector2 pos, app::Camera_MonoOrStereoscopicEye__Enum eye)
    IL2CPP_REGISTER_METHOD(0x02424150, app::Ray, ViewportPointToRay_2, app::Camera* this_ptr, app::Vector3 pos, app::Camera_MonoOrStereoscopicEye__Enum eye)
    IL2CPP_REGISTER_METHOD(0x024242A0, app::Ray, ViewportPointToRay_3, app::Camera* this_ptr, app::Vector3 pos)
    IL2CPP_REGISTER_METHOD(0x024243F0, app::Ray, ScreenPointToRay_1, app::Camera* this_ptr, app::Vector2 pos, app::Camera_MonoOrStereoscopicEye__Enum eye)
    IL2CPP_REGISTER_METHOD(0x024244A0, app::Ray, ScreenPointToRay_2, app::Camera* this_ptr, app::Vector3 pos, app::Camera_MonoOrStereoscopicEye__Enum eye)
    IL2CPP_REGISTER_METHOD(0x024245F0, app::Ray, ScreenPointToRay_3, app::Camera* this_ptr, app::Vector3 pos)
    IL2CPP_REGISTER_METHOD(0x02424740, app::GameObject*, RaycastTry, app::Camera* this_ptr, app::Ray ray, float distance, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(0x024247C0, app::GameObject*, RaycastTry2D, app::Camera* this_ptr, app::Ray ray, float distance, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(
        0x02424840,
        void,
        CalculateFrustumCornersInternal,
        app::Camera* this_ptr,
        app::Rect viewport,
        float z,
        app::Camera_MonoOrStereoscopicEye__Enum eye,
        app::Vector3__Array* out_corners
    )
    IL2CPP_REGISTER_METHOD(
        0x024248D0,
        void,
        CalculateFrustumCorners,
        app::Camera* this_ptr,
        app::Rect viewport,
        float z,
        app::Camera_MonoOrStereoscopicEye__Enum eye,
        app::Vector3__Array* out_corners
    )
    IL2CPP_REGISTER_METHOD(
        0x02424A50,
        void,
        CalculateProjectionMatrixFromPhysicalPropertiesInternal,
        app::Matrix4x4* output,
        float focal_length,
        app::Vector2 sensor_size,
        app::Vector2 lens_shift,
        float near_clip,
        float far_clip,
        float gate_aspect,
        app::Camera_GateFitMode__Enum gate_fit_mode
    )
    IL2CPP_REGISTER_METHOD(
        0x02424B00,
        void,
        CalculateProjectionMatrixFromPhysicalProperties,
        app::Matrix4x4* output,
        float focal_length,
        app::Vector2 sensor_size,
        app::Vector2 lens_shift,
        float near_clip,
        float far_clip,
        app::Camera_GateFitParameters gate_fit_parameters
    )
    IL2CPP_REGISTER_METHOD(0x02424BB0, float, FocalLengthToFOV, float focal_length, float sensor_size)
    IL2CPP_REGISTER_METHOD(0x02424C20, float, FOVToFocalLength, float fov, float sensor_size)
    IL2CPP_REGISTER_METHOD(0x02424C90, app::Camera*, get_main, )
    IL2CPP_REGISTER_METHOD(0x02424CE0, app::Camera*, get_current, )
    IL2CPP_REGISTER_METHOD(0x02424D30, app::Scene, get_scene, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02424DA0, void, set_scene, app::Camera* this_ptr, app::Scene value)
    IL2CPP_REGISTER_METHOD(0x02424E00, bool, get_stereoEnabled, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02424E50, float, get_stereoSeparation, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02424EA0, void, set_stereoSeparation, app::Camera* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02424F00, float, get_stereoConvergence, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02424F50, void, set_stereoConvergence, app::Camera* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02424FB0, bool, get_areVRStereoViewMatricesWithinSingleCullTolerance, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02425000, app::StereoTargetEyeMask__Enum, get_stereoTargetEye, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02425050, void, set_stereoTargetEye, app::Camera* this_ptr, app::StereoTargetEyeMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x024250B0, app::Camera_MonoOrStereoscopicEye__Enum, get_stereoActiveEye, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02425100, app::Matrix4x4, GetStereoNonJitteredProjectionMatrix, app::Camera* this_ptr, app::Camera_StereoscopicEye__Enum eye)
    IL2CPP_REGISTER_METHOD(0x024251C0, app::Matrix4x4, GetStereoViewMatrix, app::Camera* this_ptr, app::Camera_StereoscopicEye__Enum eye)
    IL2CPP_REGISTER_METHOD(0x02425280, void, CopyStereoDeviceProjectionMatrixToNonJittered, app::Camera* this_ptr, app::Camera_StereoscopicEye__Enum eye)
    IL2CPP_REGISTER_METHOD(0x024252E0, app::Matrix4x4, GetStereoProjectionMatrix, app::Camera* this_ptr, app::Camera_StereoscopicEye__Enum eye)
    IL2CPP_REGISTER_METHOD(0x024253A0, void, SetStereoProjectionMatrix, app::Camera* this_ptr, app::Camera_StereoscopicEye__Enum eye, app::Matrix4x4 matrix)
    IL2CPP_REGISTER_METHOD(0x02425410, void, ResetStereoProjectionMatrices, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02425460, void, SetStereoViewMatrix, app::Camera* this_ptr, app::Camera_StereoscopicEye__Enum eye, app::Matrix4x4 matrix)
    IL2CPP_REGISTER_METHOD(0x024254D0, void, ResetStereoViewMatrices, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02425520, int32_t, GetAllCamerasCount, )
    IL2CPP_REGISTER_METHOD(0x02425570, int32_t, GetAllCamerasImpl, app::Camera__Array* cam)
    IL2CPP_REGISTER_METHOD(0x02425520, int32_t, get_allCamerasCount, )
    IL2CPP_REGISTER_METHOD(0x024255C0, app::Camera__Array*, get_allCameras, )
    IL2CPP_REGISTER_METHOD(0x024256C0, int32_t, GetAllCameras, app::Camera__Array* cameras)
    IL2CPP_REGISTER_METHOD(0x02425820, bool, RenderToCubemapImpl, app::Camera* this_ptr, app::Texture* tex, int32_t face_mask)
    IL2CPP_REGISTER_METHOD(0x02425890, bool, RenderToCubemap_1, app::Camera* this_ptr, app::Cubemap* cubemap, int32_t face_mask)
    IL2CPP_REGISTER_METHOD(0x024258A0, bool, RenderToCubemap_2, app::Camera* this_ptr, app::Cubemap* cubemap)
    IL2CPP_REGISTER_METHOD(0x02425890, bool, RenderToCubemap_3, app::Camera* this_ptr, app::RenderTexture* cubemap, int32_t face_mask)
    IL2CPP_REGISTER_METHOD(0x024258A0, bool, RenderToCubemap_4, app::Camera* this_ptr, app::RenderTexture* cubemap)
    IL2CPP_REGISTER_METHOD(
        0x02425910,
        bool,
        RenderToCubemapEyeImpl,
        app::Camera* this_ptr,
        app::RenderTexture* cubemap,
        int32_t face_mask,
        app::Camera_MonoOrStereoscopicEye__Enum stereo_eye
    )
    IL2CPP_REGISTER_METHOD(
        0x02425910,
        bool,
        RenderToCubemap_5,
        app::Camera* this_ptr,
        app::RenderTexture* cubemap,
        int32_t face_mask,
        app::Camera_MonoOrStereoscopicEye__Enum stereo_eye
    )
    IL2CPP_REGISTER_METHOD(0x02425990, void, Render, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024259E0, void, RenderWithShader, app::Camera* this_ptr, app::Shader* shader, app::String* replacement_tag)
    IL2CPP_REGISTER_METHOD(0x02425A50, void, RenderDontRestore, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02425AA0, void, SetupCurrent, app::Camera* cur)
    IL2CPP_REGISTER_METHOD(0x02425AF0, void, CopyFrom, app::Camera* this_ptr, app::Camera* other)
    IL2CPP_REGISTER_METHOD(0x02425B50, int32_t, get_commandBufferCount, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02425BA0, void, RemoveCommandBuffers, app::Camera* this_ptr, app::CameraEvent__Enum evt)
    IL2CPP_REGISTER_METHOD(0x02425C00, void, RemoveAllCommandBuffers, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02425C50, void, AddCommandBufferImpl, app::Camera* this_ptr, app::CameraEvent__Enum evt, app::CommandBuffer* buffer)
    IL2CPP_REGISTER_METHOD(
        0x02425CC0,
        void,
        AddCommandBufferAsyncImpl,
        app::Camera* this_ptr,
        app::CameraEvent__Enum evt,
        app::CommandBuffer* buffer,
        app::ComputeQueueType__Enum queue_type
    )
    IL2CPP_REGISTER_METHOD(0x02425D40, void, RemoveCommandBufferImpl, app::Camera* this_ptr, app::CameraEvent__Enum evt, app::CommandBuffer* buffer)
    IL2CPP_REGISTER_METHOD(0x02425DB0, void, AddCommandBuffer, app::Camera* this_ptr, app::CameraEvent__Enum evt, app::CommandBuffer* buffer)
    IL2CPP_REGISTER_METHOD(
        0x02425F20,
        void,
        AddCommandBufferAsync,
        app::Camera* this_ptr,
        app::CameraEvent__Enum evt,
        app::CommandBuffer* buffer,
        app::ComputeQueueType__Enum queue_type
    )
    IL2CPP_REGISTER_METHOD(0x024260B0, void, RemoveCommandBuffer, app::Camera* this_ptr, app::CameraEvent__Enum evt, app::CommandBuffer* buffer)
    IL2CPP_REGISTER_METHOD(0x02426220, app::CommandBuffer__Array*, GetCommandBuffers, app::Camera* this_ptr, app::CameraEvent__Enum evt)
    IL2CPP_REGISTER_METHOD(0x02426280, void, FireOnPreCull, app::Camera* cam)
    IL2CPP_REGISTER_METHOD(0x02426320, void, FireOnPreRender, app::Camera* cam)
    IL2CPP_REGISTER_METHOD(0x024263C0, void, FireOnPostRender, app::Camera* cam)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnlyUsedForTesting1, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnlyUsedForTesting2, app::Camera* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02426460, void, get_transparencySortAxis_Injected, app::Camera* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x024264C0, void, set_transparencySortAxis_Injected, app::Camera* this_ptr, app::Vector3* value)
    IL2CPP_REGISTER_METHOD(0x02426520, void, get_velocity_Injected, app::Camera* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02426580, void, get_cullingMatrix_Injected, app::Camera* this_ptr, app::Matrix4x4* ret)
    IL2CPP_REGISTER_METHOD(0x024265E0, void, set_cullingMatrix_Injected, app::Camera* this_ptr, app::Matrix4x4* value)
    IL2CPP_REGISTER_METHOD(0x02426640, void, get_backgroundColor_Injected, app::Camera* this_ptr, app::Color* ret)
    IL2CPP_REGISTER_METHOD(0x024266A0, void, set_backgroundColor_Injected, app::Camera* this_ptr, app::Color* value)
    IL2CPP_REGISTER_METHOD(0x02426700, void, get_sensorSize_Injected, app::Camera* this_ptr, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(0x02426760, void, set_sensorSize_Injected, app::Camera* this_ptr, app::Vector2* value)
    IL2CPP_REGISTER_METHOD(0x024267C0, void, get_lensShift_Injected, app::Camera* this_ptr, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(0x02426820, void, set_lensShift_Injected, app::Camera* this_ptr, app::Vector2* value)
    IL2CPP_REGISTER_METHOD(0x02426880, void, GetLocalSpaceAim_Injected, app::Camera* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x024268E0, void, get_rect_Injected, app::Camera* this_ptr, app::Rect* ret)
    IL2CPP_REGISTER_METHOD(0x02426940, void, set_rect_Injected, app::Camera* this_ptr, app::Rect* value)
    IL2CPP_REGISTER_METHOD(0x024269A0, void, get_pixelRect_Injected, app::Camera* this_ptr, app::Rect* ret)
    IL2CPP_REGISTER_METHOD(0x02426A00, void, set_pixelRect_Injected, app::Camera* this_ptr, app::Rect* value)
    IL2CPP_REGISTER_METHOD(0x02426A60, void, SetTargetBuffersImpl_Injected, app::Camera* this_ptr, app::RenderBuffer* color, app::RenderBuffer* depth)
    IL2CPP_REGISTER_METHOD(0x02426AD0, void, SetTargetBuffersMRTImpl_Injected, app::Camera* this_ptr, app::RenderBuffer__Array* color, app::RenderBuffer* depth)
    IL2CPP_REGISTER_METHOD(0x02426B40, void, get_cameraToWorldMatrix_Injected, app::Camera* this_ptr, app::Matrix4x4* ret)
    IL2CPP_REGISTER_METHOD(0x02426BA0, void, get_worldToCameraMatrix_Injected, app::Camera* this_ptr, app::Matrix4x4* ret)
    IL2CPP_REGISTER_METHOD(0x02426C00, void, set_worldToCameraMatrix_Injected, app::Camera* this_ptr, app::Matrix4x4* value)
    IL2CPP_REGISTER_METHOD(0x02426C60, void, get_projectionMatrix_Injected, app::Camera* this_ptr, app::Matrix4x4* ret)
    IL2CPP_REGISTER_METHOD(0x02426CC0, void, set_projectionMatrix_Injected, app::Camera* this_ptr, app::Matrix4x4* value)
    IL2CPP_REGISTER_METHOD(0x02426D20, void, get_nonJitteredProjectionMatrix_Injected, app::Camera* this_ptr, app::Matrix4x4* ret)
    IL2CPP_REGISTER_METHOD(0x02426D80, void, set_nonJitteredProjectionMatrix_Injected, app::Camera* this_ptr, app::Matrix4x4* value)
    IL2CPP_REGISTER_METHOD(0x02426DE0, void, get_previousViewProjectionMatrix_Injected, app::Camera* this_ptr, app::Matrix4x4* ret)
    IL2CPP_REGISTER_METHOD(0x02426E40, void, CalculateObliqueMatrix_Injected, app::Camera* this_ptr, app::Vector4* clip_plane, app::Matrix4x4* ret)
    IL2CPP_REGISTER_METHOD(
        0x02426EB0,
        void,
        WorldToScreenPoint_Injected,
        app::Camera* this_ptr,
        app::Vector3* position,
        app::Camera_MonoOrStereoscopicEye__Enum eye,
        app::Vector3* ret
    )
    IL2CPP_REGISTER_METHOD(
        0x02426F30,
        void,
        WorldToViewportPoint_Injected,
        app::Camera* this_ptr,
        app::Vector3* position,
        app::Camera_MonoOrStereoscopicEye__Enum eye,
        app::Vector3* ret
    )
    IL2CPP_REGISTER_METHOD(
        0x02426FB0,
        void,
        ViewportToWorldPoint_Injected,
        app::Camera* this_ptr,
        app::Vector3* position,
        app::Camera_MonoOrStereoscopicEye__Enum eye,
        app::Vector3* ret
    )
    IL2CPP_REGISTER_METHOD(
        0x02427030,
        void,
        ScreenToWorldPoint_Injected,
        app::Camera* this_ptr,
        app::Vector3* position,
        app::Camera_MonoOrStereoscopicEye__Enum eye,
        app::Vector3* ret
    )
    IL2CPP_REGISTER_METHOD(0x024270B0, void, ScreenToViewportPoint_Injected, app::Camera* this_ptr, app::Vector3* position, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02427120, void, ViewportToScreenPoint_Injected, app::Camera* this_ptr, app::Vector3* position, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02427190, void, GetFrustumPlaneSizeAt_Injected, app::Camera* this_ptr, float distance, app::Vector2* ret)
    IL2CPP_REGISTER_METHOD(
        0x02427200,
        void,
        ViewportPointToRay_Injected,
        app::Camera* this_ptr,
        app::Vector2* pos,
        app::Camera_MonoOrStereoscopicEye__Enum eye,
        app::Ray* ret
    )
    IL2CPP_REGISTER_METHOD(
        0x02427280,
        void,
        ScreenPointToRay_Injected,
        app::Camera* this_ptr,
        app::Vector2* pos,
        app::Camera_MonoOrStereoscopicEye__Enum eye,
        app::Ray* ret
    )
    IL2CPP_REGISTER_METHOD(0x02427300, app::GameObject*, RaycastTry_Injected, app::Camera* this_ptr, app::Ray* ray, float distance, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(0x02427380, app::GameObject*, RaycastTry2D_Injected, app::Camera* this_ptr, app::Ray* ray, float distance, int32_t layer_mask)
    IL2CPP_REGISTER_METHOD(
        0x02427400,
        void,
        CalculateFrustumCornersInternal_Injected,
        app::Camera* this_ptr,
        app::Rect* viewport,
        float z,
        app::Camera_MonoOrStereoscopicEye__Enum eye,
        app::Vector3__Array* out_corners
    )
    IL2CPP_REGISTER_METHOD(
        0x02427490,
        void,
        CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected,
        app::Matrix4x4* output,
        float focal_length,
        app::Vector2* sensor_size,
        app::Vector2* lens_shift,
        float near_clip,
        float far_clip,
        float gate_aspect,
        app::Camera_GateFitMode__Enum gate_fit_mode
    )
    IL2CPP_REGISTER_METHOD(0x02427520, void, get_scene_Injected, app::Camera* this_ptr, app::Scene* ret)
    IL2CPP_REGISTER_METHOD(0x02427580, void, set_scene_Injected, app::Camera* this_ptr, app::Scene* value)
    IL2CPP_REGISTER_METHOD(
        0x024275E0,
        void,
        GetStereoNonJitteredProjectionMatrix_Injected,
        app::Camera* this_ptr,
        app::Camera_StereoscopicEye__Enum eye,
        app::Matrix4x4* ret
    )
    IL2CPP_REGISTER_METHOD(0x02427650, void, GetStereoViewMatrix_Injected, app::Camera* this_ptr, app::Camera_StereoscopicEye__Enum eye, app::Matrix4x4* ret)
    IL2CPP_REGISTER_METHOD(
        0x024276C0,
        void,
        GetStereoProjectionMatrix_Injected,
        app::Camera* this_ptr,
        app::Camera_StereoscopicEye__Enum eye,
        app::Matrix4x4* ret
    )
    IL2CPP_REGISTER_METHOD(
        0x02427730,
        void,
        SetStereoProjectionMatrix_Injected,
        app::Camera* this_ptr,
        app::Camera_StereoscopicEye__Enum eye,
        app::Matrix4x4* matrix
    )
    IL2CPP_REGISTER_METHOD(0x024277A0, void, SetStereoViewMatrix_Injected, app::Camera* this_ptr, app::Camera_StereoscopicEye__Enum eye, app::Matrix4x4* matrix)
} // namespace app::classes::UnityEngine::Camera
