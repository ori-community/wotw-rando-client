#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientContextReplySink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientContextReplySink_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientContextReplySink_DEFINED)
#include <Modloader/app/structs/ClientContextReplySink__Fields.h>
#if defined(IL2CPP_STRUCT_ClientContextReplySink__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientContextReplySink_DEFINED
struct ClientContextReplySink__Class;
struct ClientContextReplySink {
    struct ClientContextReplySink__Class* klass;
    MonitorData* monitor;
    struct ClientContextReplySink__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientContextReplySink_FWDDECL)
#define IL2CPP_STRUCT_ClientContextReplySink_FWDDECL
#include <Modloader/app/structs/ClientContextReplySink__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientContextReplySink_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientContextReplySink_DEFINED) && !defined(IL2CPP_STRUCT_ClientContextReplySink_FWDDECL)
#include <Modloader/app/structs/ClientContextReplySink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientContextReplySink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
