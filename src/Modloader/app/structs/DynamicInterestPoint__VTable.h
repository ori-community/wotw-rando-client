#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInterestPoint__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInterestPoint__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInterestPoint__VTable_DEFINED)
#define IL2CPP_STRUCT_DynamicInterestPoint__VTable_DEFINED
struct DynamicInterestPoint__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_CameraTargetActive;
    VirtualInvokeData get_CameraTargetPosition;
    VirtualInvokeData get_CameraTargetPadding;
    VirtualInvokeData get_CameraInfluencePosition;
    VirtualInvokeData AdjustCameraTargetWeight;
    VirtualInvokeData get_CameraInfluenceMinDist;
    VirtualInvokeData get_CameraInfluenceMaxDist;
    VirtualInvokeData get_CameraZoomFactor;
    VirtualInvokeData get_TargetType;
    VirtualInvokeData GetTargetData;
    VirtualInvokeData OnSceneRootPostEnable;
    VirtualInvokeData OnSceneRootPreDisable;
    VirtualInvokeData get_FOVInfluencerIsValid;
    VirtualInvokeData get_FOVInfluencerWeight;
    VirtualInvokeData get_FOVInfluencerOffset;
    VirtualInvokeData get_FOVInfluencerTargetZ;
    VirtualInvokeData OnDestroy;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicInterestPoint__VTable_FWDDECL)
#define IL2CPP_STRUCT_DynamicInterestPoint__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_DynamicInterestPoint__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInterestPoint__VTable_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInterestPoint__VTable_FWDDECL)
#include <Modloader/app/structs/DynamicInterestPoint__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInterestPoint__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
