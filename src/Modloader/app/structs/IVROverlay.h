#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVROverlay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVROverlay_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVROverlay_DEFINED)
#define IL2CPP_STRUCT_IVROverlay_DEFINED
struct IVROverlay_FindOverlay;
struct IVROverlay_CreateOverlay;
struct IVROverlay_DestroyOverlay;
struct IVROverlay_SetHighQualityOverlay;
struct IVROverlay_GetHighQualityOverlay;
struct IVROverlay_GetOverlayKey;
struct IVROverlay_GetOverlayName;
struct IVROverlay_SetOverlayName;
struct IVROverlay_GetOverlayImageData;
struct IVROverlay_GetOverlayErrorNameFromEnum;
struct IVROverlay_SetOverlayRenderingPid;
struct IVROverlay_GetOverlayRenderingPid;
struct IVROverlay_SetOverlayFlag;
struct IVROverlay_GetOverlayFlag;
struct IVROverlay_SetOverlayColor;
struct IVROverlay_GetOverlayColor;
struct IVROverlay_SetOverlayAlpha;
struct IVROverlay_GetOverlayAlpha;
struct IVROverlay_SetOverlayTexelAspect;
struct IVROverlay_GetOverlayTexelAspect;
struct IVROverlay_SetOverlaySortOrder;
struct IVROverlay_GetOverlaySortOrder;
struct IVROverlay_SetOverlayWidthInMeters;
struct IVROverlay_GetOverlayWidthInMeters;
struct IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters;
struct IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters;
struct IVROverlay_SetOverlayTextureColorSpace;
struct IVROverlay_GetOverlayTextureColorSpace;
struct IVROverlay_SetOverlayTextureBounds;
struct IVROverlay_GetOverlayTextureBounds;
struct IVROverlay_GetOverlayRenderModel;
struct IVROverlay_SetOverlayRenderModel;
struct IVROverlay_GetOverlayTransformType;
struct IVROverlay_SetOverlayTransformAbsolute;
struct IVROverlay_GetOverlayTransformAbsolute;
struct IVROverlay_SetOverlayTransformTrackedDeviceRelative;
struct IVROverlay_GetOverlayTransformTrackedDeviceRelative;
struct IVROverlay_SetOverlayTransformTrackedDeviceComponent;
struct IVROverlay_GetOverlayTransformTrackedDeviceComponent;
struct IVROverlay_GetOverlayTransformOverlayRelative;
struct IVROverlay_SetOverlayTransformOverlayRelative;
struct IVROverlay_ShowOverlay;
struct IVROverlay_HideOverlay;
struct IVROverlay_IsOverlayVisible;
struct IVROverlay_GetTransformForOverlayCoordinates;
struct IVROverlay_PollNextOverlayEvent;
struct IVROverlay_GetOverlayInputMethod;
struct IVROverlay_SetOverlayInputMethod;
struct IVROverlay_GetOverlayMouseScale;
struct IVROverlay_SetOverlayMouseScale;
struct IVROverlay_ComputeOverlayIntersection;
struct IVROverlay_HandleControllerOverlayInteractionAsMouse;
struct IVROverlay_IsHoverTargetOverlay;
struct IVROverlay_GetGamepadFocusOverlay;
struct IVROverlay_SetGamepadFocusOverlay;
struct IVROverlay_SetOverlayNeighbor;
struct IVROverlay_MoveGamepadFocusToNeighbor;
struct IVROverlay_SetOverlayTexture;
struct IVROverlay_ClearOverlayTexture;
struct IVROverlay_SetOverlayRaw;
struct IVROverlay_SetOverlayFromFile;
struct IVROverlay_GetOverlayTexture;
struct IVROverlay_ReleaseNativeOverlayHandle;
struct IVROverlay_GetOverlayTextureSize;
struct IVROverlay_CreateDashboardOverlay;
struct IVROverlay_IsDashboardVisible;
struct IVROverlay_IsActiveDashboardOverlay;
struct IVROverlay_SetDashboardOverlaySceneProcess;
struct IVROverlay_GetDashboardOverlaySceneProcess;
struct IVROverlay_ShowDashboard;
struct IVROverlay_GetPrimaryDashboardDevice;
struct IVROverlay_ShowKeyboard;
struct IVROverlay_ShowKeyboardForOverlay;
struct IVROverlay_GetKeyboardText;
struct IVROverlay_HideKeyboard;
struct IVROverlay_SetKeyboardTransformAbsolute;
struct IVROverlay_SetKeyboardPositionForOverlay;
struct IVROverlay_SetOverlayIntersectionMask;
struct IVROverlay_GetOverlayFlags;
struct IVROverlay_ShowMessageOverlay;
struct IVROverlay_CloseMessageOverlay;
struct IVROverlay {
    struct IVROverlay_FindOverlay* FindOverlay;
    struct IVROverlay_CreateOverlay* CreateOverlay;
    struct IVROverlay_DestroyOverlay* DestroyOverlay;
    struct IVROverlay_SetHighQualityOverlay* SetHighQualityOverlay;
    struct IVROverlay_GetHighQualityOverlay* GetHighQualityOverlay;
    struct IVROverlay_GetOverlayKey* GetOverlayKey;
    struct IVROverlay_GetOverlayName* GetOverlayName;
    struct IVROverlay_SetOverlayName* SetOverlayName;
    struct IVROverlay_GetOverlayImageData* GetOverlayImageData;
    struct IVROverlay_GetOverlayErrorNameFromEnum* GetOverlayErrorNameFromEnum;
    struct IVROverlay_SetOverlayRenderingPid* SetOverlayRenderingPid;
    struct IVROverlay_GetOverlayRenderingPid* GetOverlayRenderingPid;
    struct IVROverlay_SetOverlayFlag* SetOverlayFlag;
    struct IVROverlay_GetOverlayFlag* GetOverlayFlag;
    struct IVROverlay_SetOverlayColor* SetOverlayColor;
    struct IVROverlay_GetOverlayColor* GetOverlayColor;
    struct IVROverlay_SetOverlayAlpha* SetOverlayAlpha;
    struct IVROverlay_GetOverlayAlpha* GetOverlayAlpha;
    struct IVROverlay_SetOverlayTexelAspect* SetOverlayTexelAspect;
    struct IVROverlay_GetOverlayTexelAspect* GetOverlayTexelAspect;
    struct IVROverlay_SetOverlaySortOrder* SetOverlaySortOrder;
    struct IVROverlay_GetOverlaySortOrder* GetOverlaySortOrder;
    struct IVROverlay_SetOverlayWidthInMeters* SetOverlayWidthInMeters;
    struct IVROverlay_GetOverlayWidthInMeters* GetOverlayWidthInMeters;
    struct IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters* SetOverlayAutoCurveDistanceRangeInMeters;
    struct IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters* GetOverlayAutoCurveDistanceRangeInMeters;
    struct IVROverlay_SetOverlayTextureColorSpace* SetOverlayTextureColorSpace;
    struct IVROverlay_GetOverlayTextureColorSpace* GetOverlayTextureColorSpace;
    struct IVROverlay_SetOverlayTextureBounds* SetOverlayTextureBounds;
    struct IVROverlay_GetOverlayTextureBounds* GetOverlayTextureBounds;
    struct IVROverlay_GetOverlayRenderModel* GetOverlayRenderModel;
    struct IVROverlay_SetOverlayRenderModel* SetOverlayRenderModel;
    struct IVROverlay_GetOverlayTransformType* GetOverlayTransformType;
    struct IVROverlay_SetOverlayTransformAbsolute* SetOverlayTransformAbsolute;
    struct IVROverlay_GetOverlayTransformAbsolute* GetOverlayTransformAbsolute;
    struct IVROverlay_SetOverlayTransformTrackedDeviceRelative* SetOverlayTransformTrackedDeviceRelative;
    struct IVROverlay_GetOverlayTransformTrackedDeviceRelative* GetOverlayTransformTrackedDeviceRelative;
    struct IVROverlay_SetOverlayTransformTrackedDeviceComponent* SetOverlayTransformTrackedDeviceComponent;
    struct IVROverlay_GetOverlayTransformTrackedDeviceComponent* GetOverlayTransformTrackedDeviceComponent;
    struct IVROverlay_GetOverlayTransformOverlayRelative* GetOverlayTransformOverlayRelative;
    struct IVROverlay_SetOverlayTransformOverlayRelative* SetOverlayTransformOverlayRelative;
    struct IVROverlay_ShowOverlay* ShowOverlay;
    struct IVROverlay_HideOverlay* HideOverlay;
    struct IVROverlay_IsOverlayVisible* IsOverlayVisible;
    struct IVROverlay_GetTransformForOverlayCoordinates* GetTransformForOverlayCoordinates;
    struct IVROverlay_PollNextOverlayEvent* PollNextOverlayEvent;
    struct IVROverlay_GetOverlayInputMethod* GetOverlayInputMethod;
    struct IVROverlay_SetOverlayInputMethod* SetOverlayInputMethod;
    struct IVROverlay_GetOverlayMouseScale* GetOverlayMouseScale;
    struct IVROverlay_SetOverlayMouseScale* SetOverlayMouseScale;
    struct IVROverlay_ComputeOverlayIntersection* ComputeOverlayIntersection;
    struct IVROverlay_HandleControllerOverlayInteractionAsMouse* HandleControllerOverlayInteractionAsMouse;
    struct IVROverlay_IsHoverTargetOverlay* IsHoverTargetOverlay;
    struct IVROverlay_GetGamepadFocusOverlay* GetGamepadFocusOverlay;
    struct IVROverlay_SetGamepadFocusOverlay* SetGamepadFocusOverlay;
    struct IVROverlay_SetOverlayNeighbor* SetOverlayNeighbor;
    struct IVROverlay_MoveGamepadFocusToNeighbor* MoveGamepadFocusToNeighbor;
    struct IVROverlay_SetOverlayTexture* SetOverlayTexture;
    struct IVROverlay_ClearOverlayTexture* ClearOverlayTexture;
    struct IVROverlay_SetOverlayRaw* SetOverlayRaw;
    struct IVROverlay_SetOverlayFromFile* SetOverlayFromFile;
    struct IVROverlay_GetOverlayTexture* GetOverlayTexture;
    struct IVROverlay_ReleaseNativeOverlayHandle* ReleaseNativeOverlayHandle;
    struct IVROverlay_GetOverlayTextureSize* GetOverlayTextureSize;
    struct IVROverlay_CreateDashboardOverlay* CreateDashboardOverlay;
    struct IVROverlay_IsDashboardVisible* IsDashboardVisible;
    struct IVROverlay_IsActiveDashboardOverlay* IsActiveDashboardOverlay;
    struct IVROverlay_SetDashboardOverlaySceneProcess* SetDashboardOverlaySceneProcess;
    struct IVROverlay_GetDashboardOverlaySceneProcess* GetDashboardOverlaySceneProcess;
    struct IVROverlay_ShowDashboard* ShowDashboard;
    struct IVROverlay_GetPrimaryDashboardDevice* GetPrimaryDashboardDevice;
    struct IVROverlay_ShowKeyboard* ShowKeyboard;
    struct IVROverlay_ShowKeyboardForOverlay* ShowKeyboardForOverlay;
    struct IVROverlay_GetKeyboardText* GetKeyboardText;
    struct IVROverlay_HideKeyboard* HideKeyboard;
    struct IVROverlay_SetKeyboardTransformAbsolute* SetKeyboardTransformAbsolute;
    struct IVROverlay_SetKeyboardPositionForOverlay* SetKeyboardPositionForOverlay;
    struct IVROverlay_SetOverlayIntersectionMask* SetOverlayIntersectionMask;
    struct IVROverlay_GetOverlayFlags* GetOverlayFlags;
    struct IVROverlay_ShowMessageOverlay* ShowMessageOverlay;
    struct IVROverlay_CloseMessageOverlay* CloseMessageOverlay;
};
#endif
#if !defined(IL2CPP_STRUCT_IVROverlay_FWDDECL)
#define IL2CPP_STRUCT_IVROverlay_FWDDECL
#include <Modloader/app/structs/IVROverlay_ClearOverlayTexture.h>
#include <Modloader/app/structs/IVROverlay_CloseMessageOverlay.h>
#include <Modloader/app/structs/IVROverlay_ComputeOverlayIntersection.h>
#include <Modloader/app/structs/IVROverlay_CreateDashboardOverlay.h>
#include <Modloader/app/structs/IVROverlay_CreateOverlay.h>
#include <Modloader/app/structs/IVROverlay_DestroyOverlay.h>
#include <Modloader/app/structs/IVROverlay_FindOverlay.h>
#include <Modloader/app/structs/IVROverlay_GetDashboardOverlaySceneProcess.h>
#include <Modloader/app/structs/IVROverlay_GetGamepadFocusOverlay.h>
#include <Modloader/app/structs/IVROverlay_GetHighQualityOverlay.h>
#include <Modloader/app/structs/IVROverlay_GetKeyboardText.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayAlpha.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayAutoCurveDistanceRangeInMeters.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayColor.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayErrorNameFromEnum.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayFlag.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayFlags.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayImageData.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayInputMethod.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayKey.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayMouseScale.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayName.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayRenderModel.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayRenderingPid.h>
#include <Modloader/app/structs/IVROverlay_GetOverlaySortOrder.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTexelAspect.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTexture.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTextureBounds.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTextureColorSpace.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTextureSize.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformAbsolute.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformOverlayRelative.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformTrackedDeviceComponent.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformTrackedDeviceRelative.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformType.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayWidthInMeters.h>
#include <Modloader/app/structs/IVROverlay_GetPrimaryDashboardDevice.h>
#include <Modloader/app/structs/IVROverlay_GetTransformForOverlayCoordinates.h>
#include <Modloader/app/structs/IVROverlay_HandleControllerOverlayInteractionAsMouse.h>
#include <Modloader/app/structs/IVROverlay_HideKeyboard.h>
#include <Modloader/app/structs/IVROverlay_HideOverlay.h>
#include <Modloader/app/structs/IVROverlay_IsActiveDashboardOverlay.h>
#include <Modloader/app/structs/IVROverlay_IsDashboardVisible.h>
#include <Modloader/app/structs/IVROverlay_IsHoverTargetOverlay.h>
#include <Modloader/app/structs/IVROverlay_IsOverlayVisible.h>
#include <Modloader/app/structs/IVROverlay_MoveGamepadFocusToNeighbor.h>
#include <Modloader/app/structs/IVROverlay_PollNextOverlayEvent.h>
#include <Modloader/app/structs/IVROverlay_ReleaseNativeOverlayHandle.h>
#include <Modloader/app/structs/IVROverlay_SetDashboardOverlaySceneProcess.h>
#include <Modloader/app/structs/IVROverlay_SetGamepadFocusOverlay.h>
#include <Modloader/app/structs/IVROverlay_SetHighQualityOverlay.h>
#include <Modloader/app/structs/IVROverlay_SetKeyboardPositionForOverlay.h>
#include <Modloader/app/structs/IVROverlay_SetKeyboardTransformAbsolute.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayAlpha.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayAutoCurveDistanceRangeInMeters.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayColor.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayFlag.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayFromFile.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayInputMethod.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayIntersectionMask.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayMouseScale.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayName.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayNeighbor.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayRaw.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayRenderModel.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayRenderingPid.h>
#include <Modloader/app/structs/IVROverlay_SetOverlaySortOrder.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTexelAspect.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTexture.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTextureBounds.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTextureColorSpace.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTransformAbsolute.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTransformOverlayRelative.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTransformTrackedDeviceComponent.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayTransformTrackedDeviceRelative.h>
#include <Modloader/app/structs/IVROverlay_SetOverlayWidthInMeters.h>
#include <Modloader/app/structs/IVROverlay_ShowDashboard.h>
#include <Modloader/app/structs/IVROverlay_ShowKeyboard.h>
#include <Modloader/app/structs/IVROverlay_ShowKeyboardForOverlay.h>
#include <Modloader/app/structs/IVROverlay_ShowMessageOverlay.h>
#include <Modloader/app/structs/IVROverlay_ShowOverlay.h>
#endif
#undef IL2CPP_STRUCT_IVROverlay_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVROverlay_DEFINED) && !defined(IL2CPP_STRUCT_IVROverlay_FWDDECL)
#include <Modloader/app/structs/IVROverlay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVROverlay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
