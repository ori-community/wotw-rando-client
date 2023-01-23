#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Flammable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Flammable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Flammable__Fields_DEFINED)
#include <Modloader/app/structs/Flammable_FlameColor__Enum.h>
#include <Modloader/app/structs/Flammable_FlameState__Enum.h>
#include <Modloader/app/structs/GuidOwner__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_Flammable_FlameColor__Enum_DEFINED) && defined(IL2CPP_STRUCT_Flammable_FlameState__Enum_DEFINED)
#define IL2CPP_STRUCT_Flammable__Fields_DEFINED
struct SerializedBooleanUberState;
struct MoonTimeline;
struct Action_1_Moon_Flammable_;
struct GameObject;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct Flammable__Fields {
    struct GuidOwner__Fields _;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    Flammable_FlameColor__Enum Color;

    int32_t FlameColorPriority;
    float BurningDuration;
    bool BurnOnEnter;
    bool ExtinguishOnWind;
    bool DestroyOnEnter;
    bool SetToBurnOnStart;
    bool DestroyProjectile;
    bool ToggleableOnlyWhenTimelinesStopped;
    struct SerializedBooleanUberState* UberState;
    struct MoonTimeline* OnStartBurning;
    struct MoonTimeline* OnExtinguished;
    struct Action_1_Moon_Flammable_* OnFlammableStateChange;
    struct GameObject* Flame;
    float m_remainingBurningDuration;
    Flammable_FlameState__Enum m_state;

    struct IUberState__Array* m_states;
    struct List_1_UnityEngine_GameObject_* m_targets;
    bool _InvalidateParentTimelineCache_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Flammable__Fields_FWDDECL)
#define IL2CPP_STRUCT_Flammable__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Moon_Flammable_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_Flammable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Flammable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Flammable__Fields_FWDDECL)
#include <Modloader/app/structs/Flammable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Flammable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
