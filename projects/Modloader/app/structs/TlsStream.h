#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsStream_DEFINED)
#include <Modloader/app/structs/TlsStream__Fields.h>
#if defined(IL2CPP_STRUCT_TlsStream__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsStream_DEFINED
struct TlsStream__Class;
struct TlsStream {
    struct TlsStream__Class* klass;
    MonitorData* monitor;
    struct TlsStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsStream_FWDDECL)
#define IL2CPP_STRUCT_TlsStream_FWDDECL
#include <Modloader/app/structs/TlsStream__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsStream_DEFINED) && !defined(IL2CPP_STRUCT_TlsStream_FWDDECL)
#include <Modloader/app/structs/TlsStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
