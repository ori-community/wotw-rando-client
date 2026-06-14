#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BubblemakerBlocked__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BubblemakerBlocked__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BubblemakerBlocked__Fields_DEFINED)
#include <Modloader/app/structs/Bubblemaker__Fields.h>
#if defined(IL2CPP_STRUCT_Bubblemaker__Fields_DEFINED)
#define IL2CPP_STRUCT_BubblemakerBlocked__Fields_DEFINED
struct SerializedBooleanUberState;
struct Vitals;
struct MoonTimeline;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct BubblemakerBlocked__Fields {
    struct Bubblemaker__Fields _;
    struct SerializedBooleanUberState* BubbleMakerUnblockedState;
    struct Vitals* BlockerVitals;
    struct MoonTimeline* BlockedTimeline;
    struct MoonTimeline* StarDestroyedTimeline;
    struct IUberState__Array* _AffectingUberStates_k__BackingField;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BubblemakerBlocked__Fields_FWDDECL)
#define IL2CPP_STRUCT_BubblemakerBlocked__Fields_FWDDECL
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_BubblemakerBlocked__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BubblemakerBlocked__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BubblemakerBlocked__Fields_FWDDECL)
#include <Modloader/app/structs/BubblemakerBlocked__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BubblemakerBlocked__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
