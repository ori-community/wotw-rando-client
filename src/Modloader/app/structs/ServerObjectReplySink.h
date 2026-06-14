#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerObjectReplySink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerObjectReplySink_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectReplySink_DEFINED)
#include <Modloader/app/structs/ServerObjectReplySink__Fields.h>
#if defined(IL2CPP_STRUCT_ServerObjectReplySink__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerObjectReplySink_DEFINED
struct ServerObjectReplySink__Class;
struct ServerObjectReplySink {
    struct ServerObjectReplySink__Class* klass;
    MonitorData* monitor;
    struct ServerObjectReplySink__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerObjectReplySink_FWDDECL)
#define IL2CPP_STRUCT_ServerObjectReplySink_FWDDECL
#include <Modloader/app/structs/ServerObjectReplySink__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerObjectReplySink_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectReplySink_DEFINED) && !defined(IL2CPP_STRUCT_ServerObjectReplySink_FWDDECL)
#include <Modloader/app/structs/ServerObjectReplySink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerObjectReplySink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
