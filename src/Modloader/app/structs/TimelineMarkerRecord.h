#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineMarkerRecord_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineMarkerRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineMarkerRecord_DEFINED)
#include <Modloader/app/structs/TimelineMarkerRecord__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineMarkerRecord__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineMarkerRecord_DEFINED
struct TimelineMarkerRecord__Class;
struct TimelineMarkerRecord {
    struct TimelineMarkerRecord__Class* klass;
    MonitorData* monitor;
    struct TimelineMarkerRecord__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineMarkerRecord_FWDDECL)
#define IL2CPP_STRUCT_TimelineMarkerRecord_FWDDECL
#include <Modloader/app/structs/TimelineMarkerRecord__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineMarkerRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineMarkerRecord_DEFINED) && !defined(IL2CPP_STRUCT_TimelineMarkerRecord_FWDDECL)
#include <Modloader/app/structs/TimelineMarkerRecord.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineMarkerRecord.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
