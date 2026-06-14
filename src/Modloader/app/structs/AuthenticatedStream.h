#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthenticatedStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthenticatedStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticatedStream_DEFINED)
#include <Modloader/app/structs/AuthenticatedStream__Fields.h>
#if defined(IL2CPP_STRUCT_AuthenticatedStream__Fields_DEFINED)
#define IL2CPP_STRUCT_AuthenticatedStream_DEFINED
struct AuthenticatedStream__Class;
struct AuthenticatedStream {
    struct AuthenticatedStream__Class* klass;
    MonitorData* monitor;
    struct AuthenticatedStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuthenticatedStream_FWDDECL)
#define IL2CPP_STRUCT_AuthenticatedStream_FWDDECL
#include <Modloader/app/structs/AuthenticatedStream__Class.h>
#endif
#undef IL2CPP_STRUCT_AuthenticatedStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticatedStream_DEFINED) && !defined(IL2CPP_STRUCT_AuthenticatedStream_FWDDECL)
#include <Modloader/app/structs/AuthenticatedStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthenticatedStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
