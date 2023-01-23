#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPickupOnCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPickupOnCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPickupOnCondition__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_GetPickupOnCondition__Fields_DEFINED
struct GameObject;
struct SerializedBooleanUberState;
struct EventTriggerAnimator;
struct Condition_1;
struct MoonTimeline;
struct PickupBase__Array;
struct GetPickupOnCondition__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* PickupsParent;
    struct SerializedBooleanUberState* CollectedUberState;
    bool CreateCheckpointOnPickup;
    struct CheckpointFunctionality Checkpoint;
    struct EventTriggerAnimator* Event;
    struct Condition_1* Condition;
    struct MoonTimeline* TimelinToPlayOnEvent;
    struct PickupBase__Array* m_pickups;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPickupOnCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetPickupOnCondition__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PickupBase__Array.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_GetPickupOnCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPickupOnCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetPickupOnCondition__Fields_FWDDECL)
#include <Modloader/app/structs/GetPickupOnCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPickupOnCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
