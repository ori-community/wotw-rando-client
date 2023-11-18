#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayStreamEventHistory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayStreamEventHistory_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayStreamEventHistory_DEFINED)
#include <Modloader/app/structs/PlayStreamEventHistory__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventHistory__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayStreamEventHistory_DEFINED
struct PlayStreamEventHistory__Class;
struct PlayStreamEventHistory {
    struct PlayStreamEventHistory__Class* klass;
    MonitorData* monitor;
    struct PlayStreamEventHistory__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayStreamEventHistory_FWDDECL)
#define IL2CPP_STRUCT_PlayStreamEventHistory_FWDDECL
#include <Modloader/app/structs/PlayStreamEventHistory__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayStreamEventHistory_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayStreamEventHistory_DEFINED) && !defined(IL2CPP_STRUCT_PlayStreamEventHistory_FWDDECL)
#include <Modloader/app/structs/PlayStreamEventHistory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayStreamEventHistory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
