#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineContext_DEFINED)
#include <Modloader/app/structs/TimelineContext__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineContext__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineContext_DEFINED
struct TimelineContext__Class;
struct TimelineContext {
    struct TimelineContext__Class* klass;
    MonitorData* monitor;
    struct TimelineContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineContext_FWDDECL)
#define IL2CPP_STRUCT_TimelineContext_FWDDECL
#include <Modloader/app/structs/TimelineContext__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineContext_DEFINED) && !defined(IL2CPP_STRUCT_TimelineContext_FWDDECL)
#include <Modloader/app/structs/TimelineContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
