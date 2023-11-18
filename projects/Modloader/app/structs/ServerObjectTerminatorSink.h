#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerObjectTerminatorSink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerObjectTerminatorSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectTerminatorSink_DEFINED)
#include <Modloader/app/structs/ServerObjectTerminatorSink__Fields.h>
#if defined(IL2CPP_STRUCT_ServerObjectTerminatorSink__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerObjectTerminatorSink_DEFINED
struct ServerObjectTerminatorSink__Class;
struct ServerObjectTerminatorSink {
    struct ServerObjectTerminatorSink__Class* klass;
    MonitorData* monitor;
    struct ServerObjectTerminatorSink__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerObjectTerminatorSink_FWDDECL)
#define IL2CPP_STRUCT_ServerObjectTerminatorSink_FWDDECL
#include <Modloader/app/structs/ServerObjectTerminatorSink__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerObjectTerminatorSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectTerminatorSink_DEFINED) && !defined(IL2CPP_STRUCT_ServerObjectTerminatorSink_FWDDECL)
#include <Modloader/app/structs/ServerObjectTerminatorSink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerObjectTerminatorSink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
