#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEventsDebugger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEventsDebugger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEventsDebugger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinEventsDebugger__Fields_DEFINED
struct SeinCharacter;
struct Dictionary_2_SeinEvent_SeinEventsDebugger_Entry_;
struct SeinEventsDebugger__Fields {
    struct MonoBehaviour__Fields _;
    float FadeTime;
    struct SeinCharacter* Character;
    struct Dictionary_2_SeinEvent_SeinEventsDebugger_Entry_* m_events;
    int64_t m_index;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinEventsDebugger__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinEventsDebugger__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_SeinEvent_SeinEventsDebugger_Entry_.h>
#include <Modloader/app/structs/SeinCharacter.h>
#endif
#undef IL2CPP_STRUCT_SeinEventsDebugger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEventsDebugger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinEventsDebugger__Fields_FWDDECL)
#include <Modloader/app/structs/SeinEventsDebugger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEventsDebugger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
