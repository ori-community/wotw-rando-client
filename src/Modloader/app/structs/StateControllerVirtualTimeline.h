#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateControllerVirtualTimeline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateControllerVirtualTimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateControllerVirtualTimeline_DEFINED)
#include <Modloader/app/structs/StateControllerVirtualTimeline__Fields.h>
#if defined(IL2CPP_STRUCT_StateControllerVirtualTimeline__Fields_DEFINED)
#define IL2CPP_STRUCT_StateControllerVirtualTimeline_DEFINED
struct StateControllerVirtualTimeline__Class;
struct StateControllerVirtualTimeline {
    struct StateControllerVirtualTimeline__Class* klass;
    MonitorData* monitor;
    struct StateControllerVirtualTimeline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateControllerVirtualTimeline_FWDDECL)
#define IL2CPP_STRUCT_StateControllerVirtualTimeline_FWDDECL
#include <Modloader/app/structs/StateControllerVirtualTimeline__Class.h>
#endif
#undef IL2CPP_STRUCT_StateControllerVirtualTimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateControllerVirtualTimeline_DEFINED) && !defined(IL2CPP_STRUCT_StateControllerVirtualTimeline_FWDDECL)
#include <Modloader/app/structs/StateControllerVirtualTimeline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateControllerVirtualTimeline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
