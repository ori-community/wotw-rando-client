#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManagerPrediction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManagerPrediction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerPrediction__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ScenesManagerPrediction__Fields_DEFINED
struct ScenesManagerContext;
struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array;
struct __declspec(align(8)) ScenesManagerPrediction__Fields {
    struct ScenesManagerContext* m_context;
    struct Vector2 _CurrentCameraTargetPositionExtrapolated_k__BackingField;
    struct Vector2 _CurrentCameraTargetPositionExtrapolatedShort_k__BackingField;
    struct Vector2 _CurrentCameraTargetPositionUnstable_k__BackingField;
    struct Vector2 _CurrentCameraTargetPositionShortUnstable_k__BackingField;
    struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array* m_updateJobs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManagerPrediction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenesManagerPrediction__Fields_FWDDECL
#include <Modloader/app/structs/AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array.h>
#include <Modloader/app/structs/ScenesManagerContext.h>
#endif
#undef IL2CPP_STRUCT_ScenesManagerPrediction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerPrediction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManagerPrediction__Fields_FWDDECL)
#include <Modloader/app/structs/ScenesManagerPrediction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManagerPrediction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
