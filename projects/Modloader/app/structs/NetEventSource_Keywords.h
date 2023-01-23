#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetEventSource_Keywords_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetEventSource_Keywords_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetEventSource_Keywords_DEFINED)
#define IL2CPP_STRUCT_NetEventSource_Keywords_DEFINED
struct NetEventSource_Keywords__Class;
struct NetEventSource_Keywords {
    struct NetEventSource_Keywords__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NetEventSource_Keywords_FWDDECL)
#define IL2CPP_STRUCT_NetEventSource_Keywords_FWDDECL
#include <Modloader/app/structs/NetEventSource_Keywords__Class.h>
#endif
#undef IL2CPP_STRUCT_NetEventSource_Keywords_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetEventSource_Keywords_DEFINED) && !defined(IL2CPP_STRUCT_NetEventSource_Keywords_FWDDECL)
#include <Modloader/app/structs/NetEventSource_Keywords.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetEventSource_Keywords.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
