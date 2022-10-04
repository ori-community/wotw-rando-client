#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/IVRChaperone_ForceBoundsVisible.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_CommitWorkingCopy.h>
#include <Il2CppModLoader/app/types/EChaperoneConfigFile__Enum.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_RevertWorkingCopy.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_GetWorkingPlayAreaSize.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_GetWorkingPlayAreaRect.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_GetWorkingCollisionBoundsInfo.h>
#include <Il2CppModLoader/app/types/HmdQuad_t__Array.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_GetLiveCollisionBoundsInfo.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_SetWorkingPlayAreaSize.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_SetWorkingCollisionBoundsInfo.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_ReloadFromDisk.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_GetLivePhysicalBoundsInfo.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_ExportLiveToBuffer.h>
#include <Il2CppModLoader/app/types/IVRChaperoneSetup_ImportFromBufferToWorking.h>
#include <Il2CppModLoader/app/types/IVRCompositor_SetTrackingSpace.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetTrackingSpace.h>
#include <Il2CppModLoader/app/types/IVRCompositor_WaitGetPoses.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetLastPoses.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetLastPoseForTrackedDeviceIndex.h>
#include <Il2CppModLoader/app/types/IVRCompositor_Submit.h>
#include <Il2CppModLoader/app/types/EColorSpace__Enum.h>
#include <Il2CppModLoader/app/types/Texture_t.h>
#include <Il2CppModLoader/app/types/EVRSubmitFlags__Enum.h>
#include <Il2CppModLoader/app/types/IVRCompositor_ClearLastSubmittedFrame.h>
#include <Il2CppModLoader/app/types/IVRCompositor_PostPresentHandoff.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetFrameTiming.h>
#include <Il2CppModLoader/app/types/Compositor_FrameTiming.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetFrameTimings.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetFrameTimeRemaining.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetCumulativeStats.h>
#include <Il2CppModLoader/app/types/Compositor_CumulativeStats.h>
#include <Il2CppModLoader/app/types/IVRCompositor_FadeToColor.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetCurrentFadeColor.h>
#include <Il2CppModLoader/app/types/IVRCompositor_FadeGrid.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetCurrentGridAlpha.h>
#include <Il2CppModLoader/app/types/IVRCompositor_SetSkyboxOverride.h>
#include <Il2CppModLoader/app/types/IVRCompositor_ClearSkyboxOverride.h>
#include <Il2CppModLoader/app/types/IVRCompositor_CompositorBringToFront.h>
#include <Il2CppModLoader/app/types/IVRCompositor_CompositorGoToBack.h>
#include <Il2CppModLoader/app/types/IVRCompositor_CompositorQuit.h>
#include <Il2CppModLoader/app/types/IVRCompositor_IsFullscreen.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetCurrentSceneFocusProcess.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetLastFrameRenderer.h>
#include <Il2CppModLoader/app/types/IVRCompositor_CanRenderScene.h>
#include <Il2CppModLoader/app/types/IVRCompositor_ShowMirrorWindow.h>
#include <Il2CppModLoader/app/types/IVRCompositor_HideMirrorWindow.h>
#include <Il2CppModLoader/app/types/IVRCompositor_IsMirrorWindowVisible.h>
#include <Il2CppModLoader/app/types/IVRCompositor_CompositorDumpImages.h>
#include <Il2CppModLoader/app/types/IVRCompositor_ShouldAppRenderWithLowResources.h>
#include <Il2CppModLoader/app/types/IVRCompositor_ForceInterleavedReprojectionOn.h>
#include <Il2CppModLoader/app/types/IVRCompositor_ForceReconnectProcess.h>
#include <Il2CppModLoader/app/types/IVRCompositor_SuspendRendering.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetMirrorTextureD3D11.h>
#include <Il2CppModLoader/app/types/IVRCompositor_ReleaseMirrorTextureD3D11.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetMirrorTextureGL.h>
#include <Il2CppModLoader/app/types/IVRCompositor_ReleaseSharedGLTexture.h>
#include <Il2CppModLoader/app/types/IVRCompositor_LockGLSharedTextureForAccess.h>
#include <Il2CppModLoader/app/types/IVRCompositor_UnlockGLSharedTextureForAccess.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetVulkanInstanceExtensionsRequired.h>
#include <Il2CppModLoader/app/types/IVRCompositor_GetVulkanDeviceExtensionsRequired.h>
#include <Il2CppModLoader/app/types/IVRCompositor_SetExplicitTimingMode.h>
#include <Il2CppModLoader/app/types/IVRCompositor_SubmitExplicitTimingData.h>
#include <Il2CppModLoader/app/types/IVROverlay_FindOverlay.h>
#include <Il2CppModLoader/app/types/EVROverlayError__Enum.h>
#include <Il2CppModLoader/app/types/IVROverlay_CreateOverlay.h>
#include <Il2CppModLoader/app/types/IVROverlay_DestroyOverlay.h>
#include <Il2CppModLoader/app/types/IVROverlay_SetHighQualityOverlay.h>
#include <Il2CppModLoader/app/types/IVROverlay_GetHighQualityOverlay.h>
#include <Il2CppModLoader/app/types/IVROverlay_GetOverlayKey.h>
#include <Il2CppModLoader/app/types/IVROverlay_GetOverlayName.h>
#include <Il2CppModLoader/app/types/IVROverlay_SetOverlayName.h>
#include <Il2CppModLoader/app/types/IVROverlay_GetOverlayImageData.h>
#include <Il2CppModLoader/app/types/IVROverlay_GetOverlayErrorNameFromEnum.h>
#include <Il2CppModLoader/app/types/IVROverlay_SetOverlayRenderingPid.h>
#include <Il2CppModLoader/app/types/IVROverlay_GetOverlayRenderingPid.h>
#include <Il2CppModLoader/app/types/IVROverlay_SetOverlayFlag.h>
#include <Il2CppModLoader/app/types/VROverlayFlags__Enum.h>
#include <Il2CppModLoader/app/types/IVROverlay_GetOverlayFlag.h>
#include <Il2CppModLoader/app/types/IVROverlay_SetOverlayColor.h>
#include <Il2CppModLoader/app/types/IVROverlay_GetOverlayColor.h>
#include <Il2CppModLoader/app/types/IVROverlay_SetOverlayAlpha.h>
#include <Il2CppModLoader/app/types/IVROverlay_GetOverlayAlpha.h>
#include <Il2CppModLoader/app/types/IVROverlay_SetOverlayTexelAspect.h>
#include <Il2CppModLoader/app/types/IVROverlay_GetOverlayTexelAspect.h>
#include <Il2CppModLoader/app/types/IVROverlay_SetOverlaySortOrder.h>
#include <Il2CppModLoader/app/types/IVROverlay_GetOverlaySortOrder.h>
#include <Il2CppModLoader/app/types/IVROverlay_SetOverlayWidthInMeters.h>
#include <Il2CppModLoader/app/types/IVROverlay_GetOverlayWidthInMeters.h>
#include <Il2CppModLoader/app/types/IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters.h>
#include <Il2CppModLoader/app/types/IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters.h>
#include <Il2CppModLoader/app/types/IVROverlay_SetOverlayTextureColorSpace.h>

namespace app::classes::types {
    namespace IVRChaperone_ForceBoundsVisible { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperone_ForceBoundsVisible__Class** type_info = (::app::IVRChaperone_ForceBoundsVisible__Class**)(modloader::win::memory::resolve_rva(0x0470FF88)); }
    namespace IVRChaperoneSetup_CommitWorkingCopy { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_CommitWorkingCopy__Class** type_info = (::app::IVRChaperoneSetup_CommitWorkingCopy__Class**)(modloader::win::memory::resolve_rva(0x047332F8)); }
    namespace EChaperoneConfigFile__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::EChaperoneConfigFile__Enum__Class** type_info = (::app::EChaperoneConfigFile__Enum__Class**)(modloader::win::memory::resolve_rva(0x047831C8)); }
    namespace IVRChaperoneSetup_RevertWorkingCopy { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_RevertWorkingCopy__Class** type_info = (::app::IVRChaperoneSetup_RevertWorkingCopy__Class**)(modloader::win::memory::resolve_rva(0x047241A0)); }
    namespace IVRChaperoneSetup_GetWorkingPlayAreaSize { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_GetWorkingPlayAreaSize__Class** type_info = (::app::IVRChaperoneSetup_GetWorkingPlayAreaSize__Class**)(modloader::win::memory::resolve_rva(0x04777D68)); }
    namespace IVRChaperoneSetup_GetWorkingPlayAreaRect { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_GetWorkingPlayAreaRect__Class** type_info = (::app::IVRChaperoneSetup_GetWorkingPlayAreaRect__Class**)(modloader::win::memory::resolve_rva(0x04762048)); }
    namespace IVRChaperoneSetup_GetWorkingCollisionBoundsInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo__Class** type_info = (::app::IVRChaperoneSetup_GetWorkingCollisionBoundsInfo__Class**)(modloader::win::memory::resolve_rva(0x04787E18)); }
    namespace HmdQuad_t__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::HmdQuad_t__Array__Class** type_info = (::app::HmdQuad_t__Array__Class**)(modloader::win::memory::resolve_rva(0x0470DD70)); }
    namespace IVRChaperoneSetup_GetLiveCollisionBoundsInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class** type_info = (::app::IVRChaperoneSetup_GetLiveCollisionBoundsInfo__Class**)(modloader::win::memory::resolve_rva(0x04716788)); }
    namespace IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class** type_info = (::app::IVRChaperoneSetup_GetWorkingSeatedZeroPoseToRawTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x0473DAE8)); }
    namespace IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose__Class** type_info = (::app::IVRChaperoneSetup_GetWorkingStandingZeroPoseToRawTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x04757920)); }
    namespace IVRChaperoneSetup_SetWorkingPlayAreaSize { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_SetWorkingPlayAreaSize__Class** type_info = (::app::IVRChaperoneSetup_SetWorkingPlayAreaSize__Class**)(modloader::win::memory::resolve_rva(0x04765F80)); }
    namespace IVRChaperoneSetup_SetWorkingCollisionBoundsInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_SetWorkingCollisionBoundsInfo__Class** type_info = (::app::IVRChaperoneSetup_SetWorkingCollisionBoundsInfo__Class**)(modloader::win::memory::resolve_rva(0x04777C10)); }
    namespace IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose__Class** type_info = (::app::IVRChaperoneSetup_SetWorkingSeatedZeroPoseToRawTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x0476B120)); }
    namespace IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose__Class** type_info = (::app::IVRChaperoneSetup_SetWorkingStandingZeroPoseToRawTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x04799AE0)); }
    namespace IVRChaperoneSetup_ReloadFromDisk { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_ReloadFromDisk__Class** type_info = (::app::IVRChaperoneSetup_ReloadFromDisk__Class**)(modloader::win::memory::resolve_rva(0x04751E88)); }
    namespace IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose__Class** type_info = (::app::IVRChaperoneSetup_GetLiveSeatedZeroPoseToRawTrackingPose__Class**)(modloader::win::memory::resolve_rva(0x0476B110)); }
    namespace IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo__Class** type_info = (::app::IVRChaperoneSetup_SetWorkingCollisionBoundsTagsInfo__Class**)(modloader::win::memory::resolve_rva(0x04710CC0)); }
    namespace IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo__Class** type_info = (::app::IVRChaperoneSetup_GetLiveCollisionBoundsTagsInfo__Class**)(modloader::win::memory::resolve_rva(0x0470BDF0)); }
    namespace IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo__Class** type_info = (::app::IVRChaperoneSetup_SetWorkingPhysicalBoundsInfo__Class**)(modloader::win::memory::resolve_rva(0x047569A0)); }
    namespace IVRChaperoneSetup_GetLivePhysicalBoundsInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class** type_info = (::app::IVRChaperoneSetup_GetLivePhysicalBoundsInfo__Class**)(modloader::win::memory::resolve_rva(0x0470C4A0)); }
    namespace IVRChaperoneSetup_ExportLiveToBuffer { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_ExportLiveToBuffer__Class** type_info = (::app::IVRChaperoneSetup_ExportLiveToBuffer__Class**)(modloader::win::memory::resolve_rva(0x04780230)); }
    namespace IVRChaperoneSetup_ImportFromBufferToWorking { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRChaperoneSetup_ImportFromBufferToWorking__Class** type_info = (::app::IVRChaperoneSetup_ImportFromBufferToWorking__Class**)(modloader::win::memory::resolve_rva(0x0472E8F8)); }
    namespace IVRCompositor_SetTrackingSpace { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_SetTrackingSpace__Class** type_info = (::app::IVRCompositor_SetTrackingSpace__Class**)(modloader::win::memory::resolve_rva(0x04782328)); }
    namespace IVRCompositor_GetTrackingSpace { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetTrackingSpace__Class** type_info = (::app::IVRCompositor_GetTrackingSpace__Class**)(modloader::win::memory::resolve_rva(0x0472E778)); }
    namespace IVRCompositor_WaitGetPoses { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_WaitGetPoses__Class** type_info = (::app::IVRCompositor_WaitGetPoses__Class**)(modloader::win::memory::resolve_rva(0x04779998)); }
    namespace IVRCompositor_GetLastPoses { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetLastPoses__Class** type_info = (::app::IVRCompositor_GetLastPoses__Class**)(modloader::win::memory::resolve_rva(0x0476CC60)); }
    namespace IVRCompositor_GetLastPoseForTrackedDeviceIndex { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetLastPoseForTrackedDeviceIndex__Class** type_info = (::app::IVRCompositor_GetLastPoseForTrackedDeviceIndex__Class**)(modloader::win::memory::resolve_rva(0x047223F0)); }
    namespace IVRCompositor_Submit { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_Submit__Class** type_info = (::app::IVRCompositor_Submit__Class**)(modloader::win::memory::resolve_rva(0x04760750)); }
    namespace EColorSpace__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::EColorSpace__Enum__Class** type_info = (::app::EColorSpace__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477C0E8)); }
    namespace Texture_t { IL2CPP_MODLOADER_DLLEXPORT ::app::Texture_t__Class** type_info = (::app::Texture_t__Class**)(modloader::win::memory::resolve_rva(0x04707428)); }
    namespace EVRSubmitFlags__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::EVRSubmitFlags__Enum__Class** type_info = (::app::EVRSubmitFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478C5F8)); }
    namespace IVRCompositor_ClearLastSubmittedFrame { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_ClearLastSubmittedFrame__Class** type_info = (::app::IVRCompositor_ClearLastSubmittedFrame__Class**)(modloader::win::memory::resolve_rva(0x04724768)); }
    namespace IVRCompositor_PostPresentHandoff { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_PostPresentHandoff__Class** type_info = (::app::IVRCompositor_PostPresentHandoff__Class**)(modloader::win::memory::resolve_rva(0x04727510)); }
    namespace IVRCompositor_GetFrameTiming { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetFrameTiming__Class** type_info = (::app::IVRCompositor_GetFrameTiming__Class**)(modloader::win::memory::resolve_rva(0x04775938)); }
    namespace Compositor_FrameTiming { IL2CPP_MODLOADER_DLLEXPORT ::app::Compositor_FrameTiming__Class** type_info = (::app::Compositor_FrameTiming__Class**)(modloader::win::memory::resolve_rva(0x0472A518)); }
    namespace IVRCompositor_GetFrameTimings { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetFrameTimings__Class** type_info = (::app::IVRCompositor_GetFrameTimings__Class**)(modloader::win::memory::resolve_rva(0x04777218)); }
    namespace IVRCompositor_GetFrameTimeRemaining { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetFrameTimeRemaining__Class** type_info = (::app::IVRCompositor_GetFrameTimeRemaining__Class**)(modloader::win::memory::resolve_rva(0x04705158)); }
    namespace IVRCompositor_GetCumulativeStats { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetCumulativeStats__Class** type_info = (::app::IVRCompositor_GetCumulativeStats__Class**)(modloader::win::memory::resolve_rva(0x04710E50)); }
    namespace Compositor_CumulativeStats { IL2CPP_MODLOADER_DLLEXPORT ::app::Compositor_CumulativeStats__Class** type_info = (::app::Compositor_CumulativeStats__Class**)(modloader::win::memory::resolve_rva(0x04783F90)); }
    namespace IVRCompositor_FadeToColor { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_FadeToColor__Class** type_info = (::app::IVRCompositor_FadeToColor__Class**)(modloader::win::memory::resolve_rva(0x0473ACE0)); }
    namespace IVRCompositor_GetCurrentFadeColor { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetCurrentFadeColor__Class** type_info = (::app::IVRCompositor_GetCurrentFadeColor__Class**)(modloader::win::memory::resolve_rva(0x0474C5D8)); }
    namespace IVRCompositor_FadeGrid { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_FadeGrid__Class** type_info = (::app::IVRCompositor_FadeGrid__Class**)(modloader::win::memory::resolve_rva(0x04741DA8)); }
    namespace IVRCompositor_GetCurrentGridAlpha { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetCurrentGridAlpha__Class** type_info = (::app::IVRCompositor_GetCurrentGridAlpha__Class**)(modloader::win::memory::resolve_rva(0x04751268)); }
    namespace IVRCompositor_SetSkyboxOverride { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_SetSkyboxOverride__Class** type_info = (::app::IVRCompositor_SetSkyboxOverride__Class**)(modloader::win::memory::resolve_rva(0x04726BF8)); }
    namespace IVRCompositor_ClearSkyboxOverride { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_ClearSkyboxOverride__Class** type_info = (::app::IVRCompositor_ClearSkyboxOverride__Class**)(modloader::win::memory::resolve_rva(0x047953F8)); }
    namespace IVRCompositor_CompositorBringToFront { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_CompositorBringToFront__Class** type_info = (::app::IVRCompositor_CompositorBringToFront__Class**)(modloader::win::memory::resolve_rva(0x04792AB0)); }
    namespace IVRCompositor_CompositorGoToBack { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_CompositorGoToBack__Class** type_info = (::app::IVRCompositor_CompositorGoToBack__Class**)(modloader::win::memory::resolve_rva(0x04762720)); }
    namespace IVRCompositor_CompositorQuit { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_CompositorQuit__Class** type_info = (::app::IVRCompositor_CompositorQuit__Class**)(modloader::win::memory::resolve_rva(0x04737FF0)); }
    namespace IVRCompositor_IsFullscreen { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_IsFullscreen__Class** type_info = (::app::IVRCompositor_IsFullscreen__Class**)(modloader::win::memory::resolve_rva(0x04757AA0)); }
    namespace IVRCompositor_GetCurrentSceneFocusProcess { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetCurrentSceneFocusProcess__Class** type_info = (::app::IVRCompositor_GetCurrentSceneFocusProcess__Class**)(modloader::win::memory::resolve_rva(0x0472AD88)); }
    namespace IVRCompositor_GetLastFrameRenderer { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetLastFrameRenderer__Class** type_info = (::app::IVRCompositor_GetLastFrameRenderer__Class**)(modloader::win::memory::resolve_rva(0x0471C168)); }
    namespace IVRCompositor_CanRenderScene { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_CanRenderScene__Class** type_info = (::app::IVRCompositor_CanRenderScene__Class**)(modloader::win::memory::resolve_rva(0x0471C5D0)); }
    namespace IVRCompositor_ShowMirrorWindow { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_ShowMirrorWindow__Class** type_info = (::app::IVRCompositor_ShowMirrorWindow__Class**)(modloader::win::memory::resolve_rva(0x0474F3A8)); }
    namespace IVRCompositor_HideMirrorWindow { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_HideMirrorWindow__Class** type_info = (::app::IVRCompositor_HideMirrorWindow__Class**)(modloader::win::memory::resolve_rva(0x0472B5A8)); }
    namespace IVRCompositor_IsMirrorWindowVisible { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_IsMirrorWindowVisible__Class** type_info = (::app::IVRCompositor_IsMirrorWindowVisible__Class**)(modloader::win::memory::resolve_rva(0x04746388)); }
    namespace IVRCompositor_CompositorDumpImages { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_CompositorDumpImages__Class** type_info = (::app::IVRCompositor_CompositorDumpImages__Class**)(modloader::win::memory::resolve_rva(0x0473FE10)); }
    namespace IVRCompositor_ShouldAppRenderWithLowResources { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_ShouldAppRenderWithLowResources__Class** type_info = (::app::IVRCompositor_ShouldAppRenderWithLowResources__Class**)(modloader::win::memory::resolve_rva(0x047399D0)); }
    namespace IVRCompositor_ForceInterleavedReprojectionOn { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_ForceInterleavedReprojectionOn__Class** type_info = (::app::IVRCompositor_ForceInterleavedReprojectionOn__Class**)(modloader::win::memory::resolve_rva(0x0475E390)); }
    namespace IVRCompositor_ForceReconnectProcess { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_ForceReconnectProcess__Class** type_info = (::app::IVRCompositor_ForceReconnectProcess__Class**)(modloader::win::memory::resolve_rva(0x047091B0)); }
    namespace IVRCompositor_SuspendRendering { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_SuspendRendering__Class** type_info = (::app::IVRCompositor_SuspendRendering__Class**)(modloader::win::memory::resolve_rva(0x047008E8)); }
    namespace IVRCompositor_GetMirrorTextureD3D11 { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetMirrorTextureD3D11__Class** type_info = (::app::IVRCompositor_GetMirrorTextureD3D11__Class**)(modloader::win::memory::resolve_rva(0x0471FEC0)); }
    namespace IVRCompositor_ReleaseMirrorTextureD3D11 { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_ReleaseMirrorTextureD3D11__Class** type_info = (::app::IVRCompositor_ReleaseMirrorTextureD3D11__Class**)(modloader::win::memory::resolve_rva(0x0477E780)); }
    namespace IVRCompositor_GetMirrorTextureGL { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetMirrorTextureGL__Class** type_info = (::app::IVRCompositor_GetMirrorTextureGL__Class**)(modloader::win::memory::resolve_rva(0x047912A8)); }
    namespace IVRCompositor_ReleaseSharedGLTexture { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_ReleaseSharedGLTexture__Class** type_info = (::app::IVRCompositor_ReleaseSharedGLTexture__Class**)(modloader::win::memory::resolve_rva(0x04771480)); }
    namespace IVRCompositor_LockGLSharedTextureForAccess { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_LockGLSharedTextureForAccess__Class** type_info = (::app::IVRCompositor_LockGLSharedTextureForAccess__Class**)(modloader::win::memory::resolve_rva(0x0473B810)); }
    namespace IVRCompositor_UnlockGLSharedTextureForAccess { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_UnlockGLSharedTextureForAccess__Class** type_info = (::app::IVRCompositor_UnlockGLSharedTextureForAccess__Class**)(modloader::win::memory::resolve_rva(0x04762AC8)); }
    namespace IVRCompositor_GetVulkanInstanceExtensionsRequired { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetVulkanInstanceExtensionsRequired__Class** type_info = (::app::IVRCompositor_GetVulkanInstanceExtensionsRequired__Class**)(modloader::win::memory::resolve_rva(0x04739BC8)); }
    namespace IVRCompositor_GetVulkanDeviceExtensionsRequired { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_GetVulkanDeviceExtensionsRequired__Class** type_info = (::app::IVRCompositor_GetVulkanDeviceExtensionsRequired__Class**)(modloader::win::memory::resolve_rva(0x0473E8C8)); }
    namespace IVRCompositor_SetExplicitTimingMode { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_SetExplicitTimingMode__Class** type_info = (::app::IVRCompositor_SetExplicitTimingMode__Class**)(modloader::win::memory::resolve_rva(0x04797558)); }
    namespace IVRCompositor_SubmitExplicitTimingData { IL2CPP_MODLOADER_DLLEXPORT ::app::IVRCompositor_SubmitExplicitTimingData__Class** type_info = (::app::IVRCompositor_SubmitExplicitTimingData__Class**)(modloader::win::memory::resolve_rva(0x04745278)); }
    namespace IVROverlay_FindOverlay { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_FindOverlay__Class** type_info = (::app::IVROverlay_FindOverlay__Class**)(modloader::win::memory::resolve_rva(0x0471BBF0)); }
    namespace EVROverlayError__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::EVROverlayError__Enum__Class** type_info = (::app::EVROverlayError__Enum__Class**)(modloader::win::memory::resolve_rva(0x047628C0)); }
    namespace IVROverlay_CreateOverlay { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_CreateOverlay__Class** type_info = (::app::IVROverlay_CreateOverlay__Class**)(modloader::win::memory::resolve_rva(0x04772940)); }
    namespace IVROverlay_DestroyOverlay { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_DestroyOverlay__Class** type_info = (::app::IVROverlay_DestroyOverlay__Class**)(modloader::win::memory::resolve_rva(0x0474D7B8)); }
    namespace IVROverlay_SetHighQualityOverlay { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_SetHighQualityOverlay__Class** type_info = (::app::IVROverlay_SetHighQualityOverlay__Class**)(modloader::win::memory::resolve_rva(0x04771858)); }
    namespace IVROverlay_GetHighQualityOverlay { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_GetHighQualityOverlay__Class** type_info = (::app::IVROverlay_GetHighQualityOverlay__Class**)(modloader::win::memory::resolve_rva(0x04717DF0)); }
    namespace IVROverlay_GetOverlayKey { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_GetOverlayKey__Class** type_info = (::app::IVROverlay_GetOverlayKey__Class**)(modloader::win::memory::resolve_rva(0x04726078)); }
    namespace IVROverlay_GetOverlayName { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_GetOverlayName__Class** type_info = (::app::IVROverlay_GetOverlayName__Class**)(modloader::win::memory::resolve_rva(0x04715E50)); }
    namespace IVROverlay_SetOverlayName { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_SetOverlayName__Class** type_info = (::app::IVROverlay_SetOverlayName__Class**)(modloader::win::memory::resolve_rva(0x0474B980)); }
    namespace IVROverlay_GetOverlayImageData { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_GetOverlayImageData__Class** type_info = (::app::IVROverlay_GetOverlayImageData__Class**)(modloader::win::memory::resolve_rva(0x04715B50)); }
    namespace IVROverlay_GetOverlayErrorNameFromEnum { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_GetOverlayErrorNameFromEnum__Class** type_info = (::app::IVROverlay_GetOverlayErrorNameFromEnum__Class**)(modloader::win::memory::resolve_rva(0x04731228)); }
    namespace IVROverlay_SetOverlayRenderingPid { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_SetOverlayRenderingPid__Class** type_info = (::app::IVROverlay_SetOverlayRenderingPid__Class**)(modloader::win::memory::resolve_rva(0x04720E18)); }
    namespace IVROverlay_GetOverlayRenderingPid { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_GetOverlayRenderingPid__Class** type_info = (::app::IVROverlay_GetOverlayRenderingPid__Class**)(modloader::win::memory::resolve_rva(0x04752790)); }
    namespace IVROverlay_SetOverlayFlag { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_SetOverlayFlag__Class** type_info = (::app::IVROverlay_SetOverlayFlag__Class**)(modloader::win::memory::resolve_rva(0x04780B50)); }
    namespace VROverlayFlags__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::VROverlayFlags__Enum__Class** type_info = (::app::VROverlayFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x047551C8)); }
    namespace IVROverlay_GetOverlayFlag { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_GetOverlayFlag__Class** type_info = (::app::IVROverlay_GetOverlayFlag__Class**)(modloader::win::memory::resolve_rva(0x04788B50)); }
    namespace IVROverlay_SetOverlayColor { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_SetOverlayColor__Class** type_info = (::app::IVROverlay_SetOverlayColor__Class**)(modloader::win::memory::resolve_rva(0x0471C2D0)); }
    namespace IVROverlay_GetOverlayColor { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_GetOverlayColor__Class** type_info = (::app::IVROverlay_GetOverlayColor__Class**)(modloader::win::memory::resolve_rva(0x04750960)); }
    namespace IVROverlay_SetOverlayAlpha { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_SetOverlayAlpha__Class** type_info = (::app::IVROverlay_SetOverlayAlpha__Class**)(modloader::win::memory::resolve_rva(0x0476A390)); }
    namespace IVROverlay_GetOverlayAlpha { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_GetOverlayAlpha__Class** type_info = (::app::IVROverlay_GetOverlayAlpha__Class**)(modloader::win::memory::resolve_rva(0x0475CF90)); }
    namespace IVROverlay_SetOverlayTexelAspect { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_SetOverlayTexelAspect__Class** type_info = (::app::IVROverlay_SetOverlayTexelAspect__Class**)(modloader::win::memory::resolve_rva(0x04748748)); }
    namespace IVROverlay_GetOverlayTexelAspect { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_GetOverlayTexelAspect__Class** type_info = (::app::IVROverlay_GetOverlayTexelAspect__Class**)(modloader::win::memory::resolve_rva(0x047945C8)); }
    namespace IVROverlay_SetOverlaySortOrder { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_SetOverlaySortOrder__Class** type_info = (::app::IVROverlay_SetOverlaySortOrder__Class**)(modloader::win::memory::resolve_rva(0x0470C6A8)); }
    namespace IVROverlay_GetOverlaySortOrder { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_GetOverlaySortOrder__Class** type_info = (::app::IVROverlay_GetOverlaySortOrder__Class**)(modloader::win::memory::resolve_rva(0x04782678)); }
    namespace IVROverlay_SetOverlayWidthInMeters { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_SetOverlayWidthInMeters__Class** type_info = (::app::IVROverlay_SetOverlayWidthInMeters__Class**)(modloader::win::memory::resolve_rva(0x04786610)); }
    namespace IVROverlay_GetOverlayWidthInMeters { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_GetOverlayWidthInMeters__Class** type_info = (::app::IVROverlay_GetOverlayWidthInMeters__Class**)(modloader::win::memory::resolve_rva(0x0475F488)); }
    namespace IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters__Class** type_info = (::app::IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters__Class**)(modloader::win::memory::resolve_rva(0x04784568)); }
    namespace IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class** type_info = (::app::IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters__Class**)(modloader::win::memory::resolve_rva(0x0475A160)); }
    namespace IVROverlay_SetOverlayTextureColorSpace { IL2CPP_MODLOADER_DLLEXPORT ::app::IVROverlay_SetOverlayTextureColorSpace__Class** type_info = (::app::IVROverlay_SetOverlayTextureColorSpace__Class**)(modloader::win::memory::resolve_rva(0x04725300)); }
}
