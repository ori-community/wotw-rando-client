#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntStateTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntStateTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntStateTransition__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_IntStateTransition__Fields_DEFINED
struct SerializedIntUberState;
struct Condition_1;
struct MoonTimeline;
struct IntStateTransition__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedIntUberState* IntUberState;
    int32_t BeforeStateIndex;
    int32_t DuringStateIndex;
    int32_t AfterStateIndex;
    struct Condition_1* Condition;
    struct MoonTimeline* Timeline;
    bool CheckpointAtStart;
    bool PerformSaveAtStart;
    struct CheckpointFunctionality CheckpointSettingsAtStart;
    bool CheckpointAtEnd;
    bool PerformSaveAtEnd;
    struct CheckpointFunctionality CheckpointSettingsAtEnd;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntStateTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_IntStateTransition__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#endif
#undef IL2CPP_STRUCT_IntStateTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntStateTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IntStateTransition__Fields_FWDDECL)
#include <Modloader/app/structs/IntStateTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntStateTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
