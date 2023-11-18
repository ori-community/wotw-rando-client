#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITimelineContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITimelineContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineContext_DEFINED)
#define IL2CPP_STRUCT_ITimelineContext_DEFINED
struct ITimelineContext__Class;
struct ITimelineContext {
    struct ITimelineContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITimelineContext_FWDDECL)
#define IL2CPP_STRUCT_ITimelineContext_FWDDECL
#include <Modloader/app/structs/ITimelineContext__Class.h>
#endif
#undef IL2CPP_STRUCT_ITimelineContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineContext_DEFINED) && !defined(IL2CPP_STRUCT_ITimelineContext_FWDDECL)
#include <Modloader/app/structs/ITimelineContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITimelineContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
