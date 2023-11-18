#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerTimelineSequence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerTimelineSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerTimelineSequence_DEFINED)
#include <Modloader/app/structs/ServerTimelineSequence__Fields.h>
#if defined(IL2CPP_STRUCT_ServerTimelineSequence__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerTimelineSequence_DEFINED
struct ServerTimelineSequence__Class;
struct ServerTimelineSequence {
    struct ServerTimelineSequence__Class* klass;
    MonitorData* monitor;
    struct ServerTimelineSequence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerTimelineSequence_FWDDECL)
#define IL2CPP_STRUCT_ServerTimelineSequence_FWDDECL
#include <Modloader/app/structs/ServerTimelineSequence__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerTimelineSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerTimelineSequence_DEFINED) && !defined(IL2CPP_STRUCT_ServerTimelineSequence_FWDDECL)
#include <Modloader/app/structs/ServerTimelineSequence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerTimelineSequence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
