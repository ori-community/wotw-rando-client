#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoTlsStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoTlsStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsStream_DEFINED)
#include <Modloader/app/structs/MonoTlsStream__Fields.h>
#if defined(IL2CPP_STRUCT_MonoTlsStream__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoTlsStream_DEFINED
struct MonoTlsStream__Class;
struct MonoTlsStream {
    struct MonoTlsStream__Class* klass;
    MonitorData* monitor;
    struct MonoTlsStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoTlsStream_FWDDECL)
#define IL2CPP_STRUCT_MonoTlsStream_FWDDECL
#include <Modloader/app/structs/MonoTlsStream__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoTlsStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTlsStream_DEFINED) && !defined(IL2CPP_STRUCT_MonoTlsStream_FWDDECL)
#include <Modloader/app/structs/MonoTlsStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoTlsStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
