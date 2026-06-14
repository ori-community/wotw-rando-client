#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineSequenceLabel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineSequenceLabel_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineSequenceLabel_DEFINED)
#include <Modloader/app/structs/TimelineSequenceLabel__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineSequenceLabel__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineSequenceLabel_DEFINED
struct TimelineSequenceLabel__Class;
struct TimelineSequenceLabel {
    struct TimelineSequenceLabel__Class* klass;
    MonitorData* monitor;
    struct TimelineSequenceLabel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineSequenceLabel_FWDDECL)
#define IL2CPP_STRUCT_TimelineSequenceLabel_FWDDECL
#include <Modloader/app/structs/TimelineSequenceLabel__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineSequenceLabel_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineSequenceLabel_DEFINED) && !defined(IL2CPP_STRUCT_TimelineSequenceLabel_FWDDECL)
#include <Modloader/app/structs/TimelineSequenceLabel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineSequenceLabel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
