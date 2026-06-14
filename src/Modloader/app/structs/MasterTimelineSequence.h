#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MasterTimelineSequence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MasterTimelineSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_MasterTimelineSequence_DEFINED)
#include <Modloader/app/structs/MasterTimelineSequence__Fields.h>
#if defined(IL2CPP_STRUCT_MasterTimelineSequence__Fields_DEFINED)
#define IL2CPP_STRUCT_MasterTimelineSequence_DEFINED
struct MasterTimelineSequence__Class;
struct MasterTimelineSequence {
    struct MasterTimelineSequence__Class* klass;
    MonitorData* monitor;
    struct MasterTimelineSequence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MasterTimelineSequence_FWDDECL)
#define IL2CPP_STRUCT_MasterTimelineSequence_FWDDECL
#include <Modloader/app/structs/MasterTimelineSequence__Class.h>
#endif
#undef IL2CPP_STRUCT_MasterTimelineSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_MasterTimelineSequence_DEFINED) && !defined(IL2CPP_STRUCT_MasterTimelineSequence_FWDDECL)
#include <Modloader/app/structs/MasterTimelineSequence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MasterTimelineSequence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
