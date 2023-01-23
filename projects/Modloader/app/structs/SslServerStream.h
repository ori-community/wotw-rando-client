#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SslServerStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SslServerStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslServerStream_DEFINED)
#include <Modloader/app/structs/SslServerStream__Fields.h>
#if defined(IL2CPP_STRUCT_SslServerStream__Fields_DEFINED)
#define IL2CPP_STRUCT_SslServerStream_DEFINED
struct SslServerStream__Class;
struct SslServerStream {
    struct SslServerStream__Class* klass;
    MonitorData* monitor;
    struct SslServerStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SslServerStream_FWDDECL)
#define IL2CPP_STRUCT_SslServerStream_FWDDECL
#include <Modloader/app/structs/SslServerStream__Class.h>
#endif
#undef IL2CPP_STRUCT_SslServerStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslServerStream_DEFINED) && !defined(IL2CPP_STRUCT_SslServerStream_FWDDECL)
#include <Modloader/app/structs/SslServerStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SslServerStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
