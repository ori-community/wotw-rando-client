#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SslClientStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SslClientStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslClientStream_DEFINED)
#include <Modloader/app/structs/SslClientStream__Fields.h>
#if defined(IL2CPP_STRUCT_SslClientStream__Fields_DEFINED)
#define IL2CPP_STRUCT_SslClientStream_DEFINED
struct SslClientStream__Class;
struct SslClientStream {
    struct SslClientStream__Class* klass;
    MonitorData* monitor;
    struct SslClientStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SslClientStream_FWDDECL)
#define IL2CPP_STRUCT_SslClientStream_FWDDECL
#include <Modloader/app/structs/SslClientStream__Class.h>
#endif
#undef IL2CPP_STRUCT_SslClientStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslClientStream_DEFINED) && !defined(IL2CPP_STRUCT_SslClientStream_FWDDECL)
#include <Modloader/app/structs/SslClientStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SslClientStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
