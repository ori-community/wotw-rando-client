#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetEventSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetEventSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetEventSource_DEFINED)
#include <Modloader/app/structs/NetEventSource__Fields.h>
#if defined(IL2CPP_STRUCT_NetEventSource__Fields_DEFINED)
#define IL2CPP_STRUCT_NetEventSource_DEFINED
struct NetEventSource__Class;
struct NetEventSource {
    struct NetEventSource__Class* klass;
    MonitorData* monitor;
    struct NetEventSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NetEventSource_FWDDECL)
#define IL2CPP_STRUCT_NetEventSource_FWDDECL
#include <Modloader/app/structs/NetEventSource__Class.h>
#endif
#undef IL2CPP_STRUCT_NetEventSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetEventSource_DEFINED) && !defined(IL2CPP_STRUCT_NetEventSource_FWDDECL)
#include <Modloader/app/structs/NetEventSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetEventSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
