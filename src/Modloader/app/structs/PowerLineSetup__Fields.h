#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PowerLineSetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PowerLineSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PowerLineSetup__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_PowerLineSetup__Fields_DEFINED
struct List_1_PowerFuse_;
struct SerializedIntUberState;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct Renderer;
struct MoonTimeline;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct IDesiredUberState;
struct PowerLineSetup__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_PowerFuse_* PowerFuses;
    struct SerializedIntUberState* State;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* OnAllDestroyed;
    struct Renderer* WireRenderer;
    struct Color TurnedOnColor;
    struct Color TurnedOffColor;
    struct MoonTimeline* m_allDestroyedResolvedTimeline;
    struct IUberState__Array* m_states;
    struct List_1_UnityEngine_GameObject_* m_allTargets;
    struct IDesiredUberState* m_desiredUberForTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PowerLineSetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_PowerLineSetup__Fields_FWDDECL
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_PowerFuse_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#endif
#undef IL2CPP_STRUCT_PowerLineSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PowerLineSetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PowerLineSetup__Fields_FWDDECL)
#include <Modloader/app/structs/PowerLineSetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PowerLineSetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
