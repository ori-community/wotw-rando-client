#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields_DEFINED
struct PlayerInsideZoneChecker;
struct MoonTimeline;
struct SerializedBooleanUberState;
struct __declspec(align(8)) PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields {
    struct PlayerInsideZoneChecker* Trigger;
    struct MoonTimeline* Timeline;
    struct SerializedBooleanUberState* State;
    bool HasBeenTriggered;
};
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_EscapePart__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
