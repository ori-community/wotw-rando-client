#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRCompositor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRCompositor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRCompositor_DEFINED)
#define IL2CPP_STRUCT_IVRCompositor_DEFINED
struct IVRCompositor_SetTrackingSpace;
struct IVRCompositor_GetTrackingSpace;
struct IVRCompositor_WaitGetPoses;
struct IVRCompositor_GetLastPoses;
struct IVRCompositor_GetLastPoseForTrackedDeviceIndex;
struct IVRCompositor_Submit;
struct IVRCompositor_ClearLastSubmittedFrame;
struct IVRCompositor_PostPresentHandoff;
struct IVRCompositor_GetFrameTiming;
struct IVRCompositor_GetFrameTimings;
struct IVRCompositor_GetFrameTimeRemaining;
struct IVRCompositor_GetCumulativeStats;
struct IVRCompositor_FadeToColor;
struct IVRCompositor_GetCurrentFadeColor;
struct IVRCompositor_FadeGrid;
struct IVRCompositor_GetCurrentGridAlpha;
struct IVRCompositor_SetSkyboxOverride;
struct IVRCompositor_ClearSkyboxOverride;
struct IVRCompositor_CompositorBringToFront;
struct IVRCompositor_CompositorGoToBack;
struct IVRCompositor_CompositorQuit;
struct IVRCompositor_IsFullscreen;
struct IVRCompositor_GetCurrentSceneFocusProcess;
struct IVRCompositor_GetLastFrameRenderer;
struct IVRCompositor_CanRenderScene;
struct IVRCompositor_ShowMirrorWindow;
struct IVRCompositor_HideMirrorWindow;
struct IVRCompositor_IsMirrorWindowVisible;
struct IVRCompositor_CompositorDumpImages;
struct IVRCompositor_ShouldAppRenderWithLowResources;
struct IVRCompositor_ForceInterleavedReprojectionOn;
struct IVRCompositor_ForceReconnectProcess;
struct IVRCompositor_SuspendRendering;
struct IVRCompositor_GetMirrorTextureD3D11;
struct IVRCompositor_ReleaseMirrorTextureD3D11;
struct IVRCompositor_GetMirrorTextureGL;
struct IVRCompositor_ReleaseSharedGLTexture;
struct IVRCompositor_LockGLSharedTextureForAccess;
struct IVRCompositor_UnlockGLSharedTextureForAccess;
struct IVRCompositor_GetVulkanInstanceExtensionsRequired;
struct IVRCompositor_GetVulkanDeviceExtensionsRequired;
struct IVRCompositor_SetExplicitTimingMode;
struct IVRCompositor_SubmitExplicitTimingData;
struct IVRCompositor {
    struct IVRCompositor_SetTrackingSpace* SetTrackingSpace;
    struct IVRCompositor_GetTrackingSpace* GetTrackingSpace;
    struct IVRCompositor_WaitGetPoses* WaitGetPoses;
    struct IVRCompositor_GetLastPoses* GetLastPoses;
    struct IVRCompositor_GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex;
    struct IVRCompositor_Submit* Submit;
    struct IVRCompositor_ClearLastSubmittedFrame* ClearLastSubmittedFrame;
    struct IVRCompositor_PostPresentHandoff* PostPresentHandoff;
    struct IVRCompositor_GetFrameTiming* GetFrameTiming;
    struct IVRCompositor_GetFrameTimings* GetFrameTimings;
    struct IVRCompositor_GetFrameTimeRemaining* GetFrameTimeRemaining;
    struct IVRCompositor_GetCumulativeStats* GetCumulativeStats;
    struct IVRCompositor_FadeToColor* FadeToColor;
    struct IVRCompositor_GetCurrentFadeColor* GetCurrentFadeColor;
    struct IVRCompositor_FadeGrid* FadeGrid;
    struct IVRCompositor_GetCurrentGridAlpha* GetCurrentGridAlpha;
    struct IVRCompositor_SetSkyboxOverride* SetSkyboxOverride;
    struct IVRCompositor_ClearSkyboxOverride* ClearSkyboxOverride;
    struct IVRCompositor_CompositorBringToFront* CompositorBringToFront;
    struct IVRCompositor_CompositorGoToBack* CompositorGoToBack;
    struct IVRCompositor_CompositorQuit* CompositorQuit;
    struct IVRCompositor_IsFullscreen* IsFullscreen;
    struct IVRCompositor_GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess;
    struct IVRCompositor_GetLastFrameRenderer* GetLastFrameRenderer;
    struct IVRCompositor_CanRenderScene* CanRenderScene;
    struct IVRCompositor_ShowMirrorWindow* ShowMirrorWindow;
    struct IVRCompositor_HideMirrorWindow* HideMirrorWindow;
    struct IVRCompositor_IsMirrorWindowVisible* IsMirrorWindowVisible;
    struct IVRCompositor_CompositorDumpImages* CompositorDumpImages;
    struct IVRCompositor_ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources;
    struct IVRCompositor_ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn;
    struct IVRCompositor_ForceReconnectProcess* ForceReconnectProcess;
    struct IVRCompositor_SuspendRendering* SuspendRendering;
    struct IVRCompositor_GetMirrorTextureD3D11* GetMirrorTextureD3D11;
    struct IVRCompositor_ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11;
    struct IVRCompositor_GetMirrorTextureGL* GetMirrorTextureGL;
    struct IVRCompositor_ReleaseSharedGLTexture* ReleaseSharedGLTexture;
    struct IVRCompositor_LockGLSharedTextureForAccess* LockGLSharedTextureForAccess;
    struct IVRCompositor_UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess;
    struct IVRCompositor_GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired;
    struct IVRCompositor_GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired;
    struct IVRCompositor_SetExplicitTimingMode* SetExplicitTimingMode;
    struct IVRCompositor_SubmitExplicitTimingData* SubmitExplicitTimingData;
};
#endif
#if !defined(IL2CPP_STRUCT_IVRCompositor_FWDDECL)
#define IL2CPP_STRUCT_IVRCompositor_FWDDECL
#include <Modloader/app/structs/IVRCompositor_CanRenderScene.h>
#include <Modloader/app/structs/IVRCompositor_ClearLastSubmittedFrame.h>
#include <Modloader/app/structs/IVRCompositor_ClearSkyboxOverride.h>
#include <Modloader/app/structs/IVRCompositor_CompositorBringToFront.h>
#include <Modloader/app/structs/IVRCompositor_CompositorDumpImages.h>
#include <Modloader/app/structs/IVRCompositor_CompositorGoToBack.h>
#include <Modloader/app/structs/IVRCompositor_CompositorQuit.h>
#include <Modloader/app/structs/IVRCompositor_FadeGrid.h>
#include <Modloader/app/structs/IVRCompositor_FadeToColor.h>
#include <Modloader/app/structs/IVRCompositor_ForceInterleavedReprojectionOn.h>
#include <Modloader/app/structs/IVRCompositor_ForceReconnectProcess.h>
#include <Modloader/app/structs/IVRCompositor_GetCumulativeStats.h>
#include <Modloader/app/structs/IVRCompositor_GetCurrentFadeColor.h>
#include <Modloader/app/structs/IVRCompositor_GetCurrentGridAlpha.h>
#include <Modloader/app/structs/IVRCompositor_GetCurrentSceneFocusProcess.h>
#include <Modloader/app/structs/IVRCompositor_GetFrameTimeRemaining.h>
#include <Modloader/app/structs/IVRCompositor_GetFrameTiming.h>
#include <Modloader/app/structs/IVRCompositor_GetFrameTimings.h>
#include <Modloader/app/structs/IVRCompositor_GetLastFrameRenderer.h>
#include <Modloader/app/structs/IVRCompositor_GetLastPoseForTrackedDeviceIndex.h>
#include <Modloader/app/structs/IVRCompositor_GetLastPoses.h>
#include <Modloader/app/structs/IVRCompositor_GetMirrorTextureD3D11.h>
#include <Modloader/app/structs/IVRCompositor_GetMirrorTextureGL.h>
#include <Modloader/app/structs/IVRCompositor_GetTrackingSpace.h>
#include <Modloader/app/structs/IVRCompositor_GetVulkanDeviceExtensionsRequired.h>
#include <Modloader/app/structs/IVRCompositor_GetVulkanInstanceExtensionsRequired.h>
#include <Modloader/app/structs/IVRCompositor_HideMirrorWindow.h>
#include <Modloader/app/structs/IVRCompositor_IsFullscreen.h>
#include <Modloader/app/structs/IVRCompositor_IsMirrorWindowVisible.h>
#include <Modloader/app/structs/IVRCompositor_LockGLSharedTextureForAccess.h>
#include <Modloader/app/structs/IVRCompositor_PostPresentHandoff.h>
#include <Modloader/app/structs/IVRCompositor_ReleaseMirrorTextureD3D11.h>
#include <Modloader/app/structs/IVRCompositor_ReleaseSharedGLTexture.h>
#include <Modloader/app/structs/IVRCompositor_SetExplicitTimingMode.h>
#include <Modloader/app/structs/IVRCompositor_SetSkyboxOverride.h>
#include <Modloader/app/structs/IVRCompositor_SetTrackingSpace.h>
#include <Modloader/app/structs/IVRCompositor_ShouldAppRenderWithLowResources.h>
#include <Modloader/app/structs/IVRCompositor_ShowMirrorWindow.h>
#include <Modloader/app/structs/IVRCompositor_Submit.h>
#include <Modloader/app/structs/IVRCompositor_SubmitExplicitTimingData.h>
#include <Modloader/app/structs/IVRCompositor_SuspendRendering.h>
#include <Modloader/app/structs/IVRCompositor_UnlockGLSharedTextureForAccess.h>
#include <Modloader/app/structs/IVRCompositor_WaitGetPoses.h>
#endif
#undef IL2CPP_STRUCT_IVRCompositor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRCompositor_DEFINED) && !defined(IL2CPP_STRUCT_IVRCompositor_FWDDECL)
#include <Modloader/app/structs/IVRCompositor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRCompositor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
