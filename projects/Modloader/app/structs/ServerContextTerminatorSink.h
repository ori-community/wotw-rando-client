#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerContextTerminatorSink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerContextTerminatorSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerContextTerminatorSink_DEFINED)
#define IL2CPP_STRUCT_ServerContextTerminatorSink_DEFINED
struct ServerContextTerminatorSink__Class;
struct ServerContextTerminatorSink {
    struct ServerContextTerminatorSink__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerContextTerminatorSink_FWDDECL)
#define IL2CPP_STRUCT_ServerContextTerminatorSink_FWDDECL
#include <Modloader/app/structs/ServerContextTerminatorSink__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerContextTerminatorSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerContextTerminatorSink_DEFINED) && !defined(IL2CPP_STRUCT_ServerContextTerminatorSink_FWDDECL)
#include <Modloader/app/structs/ServerContextTerminatorSink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerContextTerminatorSink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
