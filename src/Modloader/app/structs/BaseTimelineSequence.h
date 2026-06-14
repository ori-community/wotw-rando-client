#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseTimelineSequence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseTimelineSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseTimelineSequence_DEFINED)
#include <Modloader/app/structs/BaseTimelineSequence__Fields.h>
#if defined(IL2CPP_STRUCT_BaseTimelineSequence__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseTimelineSequence_DEFINED
struct BaseTimelineSequence__Class;
struct BaseTimelineSequence {
    struct BaseTimelineSequence__Class* klass;
    MonitorData* monitor;
    struct BaseTimelineSequence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseTimelineSequence_FWDDECL)
#define IL2CPP_STRUCT_BaseTimelineSequence_FWDDECL
#include <Modloader/app/structs/BaseTimelineSequence__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseTimelineSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseTimelineSequence_DEFINED) && !defined(IL2CPP_STRUCT_BaseTimelineSequence_FWDDECL)
#include <Modloader/app/structs/BaseTimelineSequence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseTimelineSequence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
