#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Respawner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Respawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Respawner__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_Respawner__Fields_DEFINED
struct SerializedFloatUberState;
struct GameObject;
struct MoonTimeline;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct Respawner__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedFloatUberState* TimerUberState;
    struct GameObject* RespawnTarget;
    bool RespawnOnTimeout;
    bool RespawnOnScreen;
    float RespawnTime;
    float MinDistanceFromPlayer;
    struct MoonTimeline* RespawnTimeline;
    struct MoonTimeline* DestroyedTimeline;
    float m_timer;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct IUberState__Array* _AffectingUberStates_k__BackingField;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
    bool _InvalidateParentTimelineCache_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Respawner__Fields_FWDDECL)
#define IL2CPP_STRUCT_Respawner__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedFloatUberState.h>
#endif
#undef IL2CPP_STRUCT_Respawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Respawner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Respawner__Fields_FWDDECL)
#include <Modloader/app/structs/Respawner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Respawner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
