#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsException_DEFINED)
#include <Modloader/app/structs/TlsException__Fields.h>
#if defined(IL2CPP_STRUCT_TlsException__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsException_DEFINED
struct TlsException__Class;
struct TlsException {
    struct TlsException__Class* klass;
    MonitorData* monitor;
    struct TlsException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsException_FWDDECL)
#define IL2CPP_STRUCT_TlsException_FWDDECL
#include <Modloader/app/structs/TlsException__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsException_DEFINED) && !defined(IL2CPP_STRUCT_TlsException_FWDDECL)
#include <Modloader/app/structs/TlsException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
