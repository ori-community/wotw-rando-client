#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsServerHello_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsServerHello_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerHello_DEFINED)
#include <Modloader/app/structs/TlsServerHello__Fields.h>
#if defined(IL2CPP_STRUCT_TlsServerHello__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsServerHello_DEFINED
struct TlsServerHello__Class;
struct TlsServerHello {
    struct TlsServerHello__Class* klass;
    MonitorData* monitor;
    struct TlsServerHello__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsServerHello_FWDDECL)
#define IL2CPP_STRUCT_TlsServerHello_FWDDECL
#include <Modloader/app/structs/TlsServerHello__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsServerHello_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerHello_DEFINED) && !defined(IL2CPP_STRUCT_TlsServerHello_FWDDECL)
#include <Modloader/app/structs/TlsServerHello.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsServerHello.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
