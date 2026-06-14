#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineEntityReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineEntityReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntityReference_DEFINED)
#include <Modloader/app/structs/TimelineEntityReference__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntityReference__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineEntityReference_DEFINED
struct TimelineEntityReference__Class;
struct TimelineEntityReference {
    struct TimelineEntityReference__Class* klass;
    MonitorData* monitor;
    struct TimelineEntityReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineEntityReference_FWDDECL)
#define IL2CPP_STRUCT_TimelineEntityReference_FWDDECL
#include <Modloader/app/structs/TimelineEntityReference__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineEntityReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntityReference_DEFINED) && !defined(IL2CPP_STRUCT_TimelineEntityReference_FWDDECL)
#include <Modloader/app/structs/TimelineEntityReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineEntityReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
