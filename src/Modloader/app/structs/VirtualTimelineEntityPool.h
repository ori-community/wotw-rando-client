#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VirtualTimelineEntityPool_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VirtualTimelineEntityPool_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualTimelineEntityPool_DEFINED)
#include <Modloader/app/structs/VirtualTimelineEntityPool__Fields.h>
#if defined(IL2CPP_STRUCT_VirtualTimelineEntityPool__Fields_DEFINED)
#define IL2CPP_STRUCT_VirtualTimelineEntityPool_DEFINED
struct VirtualTimelineEntityPool__Class;
struct VirtualTimelineEntityPool {
    struct VirtualTimelineEntityPool__Class* klass;
    MonitorData* monitor;
    struct VirtualTimelineEntityPool__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VirtualTimelineEntityPool_FWDDECL)
#define IL2CPP_STRUCT_VirtualTimelineEntityPool_FWDDECL
#include <Modloader/app/structs/VirtualTimelineEntityPool__Class.h>
#endif
#undef IL2CPP_STRUCT_VirtualTimelineEntityPool_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualTimelineEntityPool_DEFINED) && !defined(IL2CPP_STRUCT_VirtualTimelineEntityPool_FWDDECL)
#include <Modloader/app/structs/VirtualTimelineEntityPool.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VirtualTimelineEntityPool.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
