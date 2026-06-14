#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SslStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SslStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslStream_DEFINED)
#include <Modloader/app/structs/SslStream__Fields.h>
#if defined(IL2CPP_STRUCT_SslStream__Fields_DEFINED)
#define IL2CPP_STRUCT_SslStream_DEFINED
struct SslStream__Class;
struct SslStream {
    struct SslStream__Class* klass;
    MonitorData* monitor;
    struct SslStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SslStream_FWDDECL)
#define IL2CPP_STRUCT_SslStream_FWDDECL
#include <Modloader/app/structs/SslStream__Class.h>
#endif
#undef IL2CPP_STRUCT_SslStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslStream_DEFINED) && !defined(IL2CPP_STRUCT_SslStream_FWDDECL)
#include <Modloader/app/structs/SslStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SslStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
