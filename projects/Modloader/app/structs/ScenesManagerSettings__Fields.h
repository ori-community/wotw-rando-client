#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManagerSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManagerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerSettings__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ScenesManagerSettings__Fields_DEFINED
struct __declspec(align(8)) ScenesManagerSettings__Fields {
    bool AutoLoadingUnloading;
    bool CanLoadScenes;
    bool AllowDestroying;
    float UnloadDelay;
    bool DoExperimentalTimeslicedEnabling;
    bool DoTimeslicedSceneAwake;
    bool DoTimesliceSceneDisable;
    float DistanceMovedAwayFromSceneBeforeDisabling;
    float ExtendCameraBoundsForVisiblility;
    float TimeslicedSceneAwakeBudget;
    float TimesliceDisableBudget;
    bool TimesliceDestroyScenes;
    float TimesliceDestroyBudget;
    float TimesliceResourceDestroyBudget;
    float TimesliceResourceReconstructionBudget;
    float TimesliceLightCanvasSetPosBudget;
    bool AllowInstantSceneUnloads;
    struct LayerMask RaycastMask;
    float MaxPredictionDistance;
    float LoadExtapolateDistance;
    float EnableExtrapolateDistance;
    bool ShouldClampSceneLoadingPrediction;
    bool UseSmoothPredictedPosition;
    float SmoothPredictedPositionSpeed;
    bool TimeslicePrediction;
    bool UsePredictiveSceneEnabling;
    float MaxTotalHopDistance;
    float MaxSingleHopDistance;
    bool UseSceneLoadingQueue;
    float QueueProcessDelayTime;
    bool EvacuateQueueWhenUnloading;
    int32_t MaxParallelSceneLoads;
    bool ShouldLoadNearbyConnectedScenesBasedOnUtility;
    int32_t MinUtilityToPreventUnloading;
    int32_t MaxUtilityBeforeConsideredUneeded;
    int32_t MaxUtilityToLoad;
    int32_t MinUtilityToBlockCamera;
    int32_t MaxUtilityToEnableScene;
    int32_t MinUtilityToDisableScene;
    bool UseUtilitySceneDisabling;
    bool UseUtilitySceneEnabling;
    bool BlockCameraOnQueuedScenes;
    bool DontBlockCamOnDisabledScenes;
    bool OnlyBlockOnSingleHopScenes;
    float MaxCameraSmoothingDistance;
    float CameraBlockCheckDistanceMultiplier;
    struct Vector2 MinMaxBlockSpeedValue;
    struct Vector2 MinMaxBlockTargetMoveValue;
    bool DebugOutput;
    bool EnableQuadTreeDebug;
    bool EnableCameraDebug;
    bool EnableExtrapolatedPositionDebug;
    bool EnablePredictionDebug;
    bool EnableSmoothingDebug;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManagerSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenesManagerSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ScenesManagerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManagerSettings__Fields_FWDDECL)
#include <Modloader/app/structs/ScenesManagerSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManagerSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
