#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineEntityRecord_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineEntityRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntityRecord_DEFINED)
#include <Modloader/app/structs/TimelineEntityRecord__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntityRecord__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineEntityRecord_DEFINED
struct TimelineEntityRecord__Class;
struct TimelineEntityRecord {
    struct TimelineEntityRecord__Class* klass;
    MonitorData* monitor;
    struct TimelineEntityRecord__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineEntityRecord_FWDDECL)
#define IL2CPP_STRUCT_TimelineEntityRecord_FWDDECL
#include <Modloader/app/structs/TimelineEntityRecord__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineEntityRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntityRecord_DEFINED) && !defined(IL2CPP_STRUCT_TimelineEntityRecord_FWDDECL)
#include <Modloader/app/structs/TimelineEntityRecord.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineEntityRecord.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
