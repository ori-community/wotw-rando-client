#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Elevator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Elevator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Elevator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_Elevator__Fields_DEFINED
struct Transform;
struct SerializedByteUberState;
struct MoonTimeline;
struct MoonReference_1_ILever_;
struct List_1_Elevator_ElevatorStop_;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct Elevator__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* ElevatorSuport;
    struct SerializedByteUberState* UberState;
    float Speed;
    struct MoonTimeline* StartGoingUpTimeline;
    struct MoonTimeline* StartGoingDownTimeline;
    struct MoonTimeline* StopMovingTimeline;
    struct MoonReference_1_ILever_* Lever;
    struct List_1_Elevator_ElevatorStop_* Stops;
    float m_timer;
    float m_duration;
    struct Vector3 m_fromPosition;
    struct Vector3 m_toPosition;
    bool m_isMoving;
    struct IUberState__Array* m_affectingUberStates;
    struct List_1_UnityEngine_GameObject_* m_targets;
    SuspendableMask__Enum _Mask_k__BackingField;

    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Elevator__Fields_FWDDECL)
#define IL2CPP_STRUCT_Elevator__Fields_FWDDECL
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_Elevator_ElevatorStop_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonReference_1_ILever_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Elevator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Elevator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Elevator__Fields_FWDDECL)
#include <Modloader/app/structs/Elevator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Elevator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
