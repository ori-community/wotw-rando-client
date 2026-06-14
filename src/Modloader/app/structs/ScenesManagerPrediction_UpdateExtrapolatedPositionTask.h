#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/ScenesManagerPrediction_UpdateExtrapolatedPositionTask_State__Enum.h>
#include <Modloader/app/structs/ScenesManagerPrediction_UpdatePositionType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_ScenesManagerPrediction_UpdatePositionType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#define IL2CPP_STRUCT_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_DEFINED
struct ScenesManagerPrediction;
struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask {
    struct ScenesManagerPrediction* owner;
    struct Color debugColor;
    ScenesManagerPrediction_UpdatePositionType__Enum updateType;

    ScenesManagerPrediction_UpdateExtrapolatedPositionTask_State__Enum state;

    int32_t iteration;
    struct Vector3 start;
    struct Vector3 target;
    float distanceTravelled;
    struct RaycastHit hitInfo;
    bool horizontal;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_FWDDECL)
#define IL2CPP_STRUCT_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_FWDDECL
#include <Modloader/app/structs/ScenesManagerPrediction.h>
#endif
#undef IL2CPP_STRUCT_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_FWDDECL)
#include <Modloader/app/structs/ScenesManagerPrediction_UpdateExtrapolatedPositionTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManagerPrediction_UpdateExtrapolatedPositionTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
