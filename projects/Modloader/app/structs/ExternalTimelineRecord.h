#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExternalTimelineRecord_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExternalTimelineRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalTimelineRecord_DEFINED)
#include <Modloader/app/structs/ExternalTimelineRecord__Fields.h>
#if defined(IL2CPP_STRUCT_ExternalTimelineRecord__Fields_DEFINED)
#define IL2CPP_STRUCT_ExternalTimelineRecord_DEFINED
struct ExternalTimelineRecord__Class;
struct ExternalTimelineRecord {
    struct ExternalTimelineRecord__Class* klass;
    MonitorData* monitor;
    struct ExternalTimelineRecord__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExternalTimelineRecord_FWDDECL)
#define IL2CPP_STRUCT_ExternalTimelineRecord_FWDDECL
#include <Modloader/app/structs/ExternalTimelineRecord__Class.h>
#endif
#undef IL2CPP_STRUCT_ExternalTimelineRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalTimelineRecord_DEFINED) && !defined(IL2CPP_STRUCT_ExternalTimelineRecord_FWDDECL)
#include <Modloader/app/structs/ExternalTimelineRecord.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExternalTimelineRecord.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
