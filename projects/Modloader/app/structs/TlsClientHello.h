#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsClientHello_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsClientHello_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientHello_DEFINED)
#include <Modloader/app/structs/TlsClientHello__Fields.h>
#if defined(IL2CPP_STRUCT_TlsClientHello__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsClientHello_DEFINED
struct TlsClientHello__Class;
struct TlsClientHello {
    struct TlsClientHello__Class* klass;
    MonitorData* monitor;
    struct TlsClientHello__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsClientHello_FWDDECL)
#define IL2CPP_STRUCT_TlsClientHello_FWDDECL
#include <Modloader/app/structs/TlsClientHello__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsClientHello_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientHello_DEFINED) && !defined(IL2CPP_STRUCT_TlsClientHello_FWDDECL)
#include <Modloader/app/structs/TlsClientHello.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsClientHello.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
