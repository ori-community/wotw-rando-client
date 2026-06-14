#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrillZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrillZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrillZone__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DrillZone__Fields_DEFINED
struct SerializedBooleanUberState;
struct MoonTimeline;
struct EventTriggerAnimator;
struct Collider;
struct List_1_UnityEngine_Collider_;
struct DrillZone__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedBooleanUberState* SerializedState;
    struct MoonTimeline* BreakTimeline;
    struct EventTriggerAnimator* ReleaseEvent;
    struct Collider* m_collider;
    struct List_1_UnityEngine_Collider_* m_ignoringColliders;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrillZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_DrillZone__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_DrillZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrillZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DrillZone__Fields_FWDDECL)
#include <Modloader/app/structs/DrillZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrillZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
