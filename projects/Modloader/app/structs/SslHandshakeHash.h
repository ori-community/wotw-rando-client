#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SslHandshakeHash_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SslHandshakeHash_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslHandshakeHash_DEFINED)
#include <Modloader/app/structs/SslHandshakeHash__Fields.h>
#if defined(IL2CPP_STRUCT_SslHandshakeHash__Fields_DEFINED)
#define IL2CPP_STRUCT_SslHandshakeHash_DEFINED
struct SslHandshakeHash__Class;
struct SslHandshakeHash {
    struct SslHandshakeHash__Class* klass;
    MonitorData* monitor;
    struct SslHandshakeHash__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SslHandshakeHash_FWDDECL)
#define IL2CPP_STRUCT_SslHandshakeHash_FWDDECL
#include <Modloader/app/structs/SslHandshakeHash__Class.h>
#endif
#undef IL2CPP_STRUCT_SslHandshakeHash_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslHandshakeHash_DEFINED) && !defined(IL2CPP_STRUCT_SslHandshakeHash_FWDDECL)
#include <Modloader/app/structs/SslHandshakeHash.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SslHandshakeHash.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
