#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsServerHelloDone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsServerHelloDone_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerHelloDone_DEFINED)
#include <Modloader/app/structs/TlsServerHelloDone__Fields.h>
#if defined(IL2CPP_STRUCT_TlsServerHelloDone__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsServerHelloDone_DEFINED
struct TlsServerHelloDone__Class;
struct TlsServerHelloDone {
    struct TlsServerHelloDone__Class* klass;
    MonitorData* monitor;
    struct TlsServerHelloDone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsServerHelloDone_FWDDECL)
#define IL2CPP_STRUCT_TlsServerHelloDone_FWDDECL
#include <Modloader/app/structs/TlsServerHelloDone__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsServerHelloDone_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerHelloDone_DEFINED) && !defined(IL2CPP_STRUCT_TlsServerHelloDone_FWDDECL)
#include <Modloader/app/structs/TlsServerHelloDone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsServerHelloDone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
