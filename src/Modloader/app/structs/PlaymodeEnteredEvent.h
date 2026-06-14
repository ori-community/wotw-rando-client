#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaymodeEnteredEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaymodeEnteredEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaymodeEnteredEvent_DEFINED)
#include <Modloader/app/structs/PlaymodeEnteredEvent__Fields.h>
#if defined(IL2CPP_STRUCT_PlaymodeEnteredEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_PlaymodeEnteredEvent_DEFINED
struct PlaymodeEnteredEvent__Class;
struct PlaymodeEnteredEvent {
    struct PlaymodeEnteredEvent__Class* klass;
    MonitorData* monitor;
    struct PlaymodeEnteredEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaymodeEnteredEvent_FWDDECL)
#define IL2CPP_STRUCT_PlaymodeEnteredEvent_FWDDECL
#include <Modloader/app/structs/PlaymodeEnteredEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_PlaymodeEnteredEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaymodeEnteredEvent_DEFINED) && !defined(IL2CPP_STRUCT_PlaymodeEnteredEvent_FWDDECL)
#include <Modloader/app/structs/PlaymodeEnteredEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaymodeEnteredEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
