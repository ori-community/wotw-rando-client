#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientContextTerminatorSink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientContextTerminatorSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientContextTerminatorSink_DEFINED)
#include <Modloader/app/structs/ClientContextTerminatorSink__Fields.h>
#if defined(IL2CPP_STRUCT_ClientContextTerminatorSink__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientContextTerminatorSink_DEFINED
struct ClientContextTerminatorSink__Class;
struct ClientContextTerminatorSink {
    struct ClientContextTerminatorSink__Class* klass;
    MonitorData* monitor;
    struct ClientContextTerminatorSink__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientContextTerminatorSink_FWDDECL)
#define IL2CPP_STRUCT_ClientContextTerminatorSink_FWDDECL
#include <Modloader/app/structs/ClientContextTerminatorSink__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientContextTerminatorSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientContextTerminatorSink_DEFINED) && !defined(IL2CPP_STRUCT_ClientContextTerminatorSink_FWDDECL)
#include <Modloader/app/structs/ClientContextTerminatorSink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientContextTerminatorSink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
